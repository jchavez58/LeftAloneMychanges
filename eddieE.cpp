/**
* Author: Eddie Ekpo
*
*/
#include "math.h"
#include <X11/Xlib.h>
#include <GL/glx.h>
#include "log.h"
#include "fonts.h"

void showEddiePhoto (int x, int y, GLuint textid) {
	glColor3ub(255,255,255);
	//static float angle = 0.0f;
	static int wid = 100;
	//wid += sin(angle) * 10;
	float fx = (float)x;
	float fy = (float)y;
	//float a = 0;
	//fx += a;
	glPushMatrix();
	glTranslatef(fx,fy,0);
	//glRotatef(a, 0, 0, 1.0);
	glBindTexture(GL_TEXTURE_2D, textid);
	
	glBegin(GL_QUADS);
		glTexCoord2f(0.0f, 1.0f); glVertex2i(-wid, -wid);
		glTexCoord2f(0.0f, 0.0f); glVertex2i(-wid,  wid);
		glTexCoord2f(0.0f, 0.0f); glVertex2i( wid,  wid);
		glTexCoord2f(1.0f, 0.0f); glVertex2i( wid, -wid);
	glEnd();
	glPopMatrix();
    Rect r;
    r.bot = y - 20;
    r.left = x - wid/2 - 200;
    r.center = 0;
    ggprint16(&r, 32, 0x00ffff44, "Eddie Ekpo");
}

void drawFloor(int height, int width) {
    glColor3ub(150,75,0);
    glpushMatrux();
    //Will insert box here: glTranslatef(x,y,0);
    glBegin(GL_QUADS)
        glVertex2i(0, 0);
        glVertex2i(0, 0);
        glVertex2i(0, 0);
        glVertex2i(0, 0);
    glEnd();
    glPopMatrix();
}
