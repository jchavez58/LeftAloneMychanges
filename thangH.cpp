/*
 * Author: Thang Hin
 */
#include "math.h"
#include <X11/Xlib.h>
#include <GL/glx.h>
#include "log.h"
#include "fonts.h"

void showThangPicture (int x, int y, GLuint textid)
{
	Rect r;
	glColor3ub(255,255,255);
	static float angle = 0.0f;
	static int wid = 80;
	wid += sin(angle) * 10;
	float fx = (float)x;
	float fy = (float)y;
	float a = 0;
	a+= sin(angle) * 10.0f;
	fx += a;
	angle += 0.2f;
	glPushMatrix();
    glTranslatef(fx,fy,0);
	glRotatef(a, 0, 0, 1.0);
	glBindTexture(GL_TEXTURE_2D, textid);
	
	glBegin(GL_QUADS);
	glTexCoord2f(0.0f, 1.0f); glVertex2i(-wid,-wid);
	glTexCoord2f(0.0f, 0.0f); glVertex2i(-wid, wid);
	glTexCoord2f(1.0f, 0.0f); glVertex2i( wid, wid);
	glTexCoord2f(1.0f, 1.0f); glVertex2i( wid,-wid);
	glEnd();
	glPopMatrix();
	unsigned int c = 0x00ffff44;
	r.bot = y - 20;
	r.left = x - wid/2 - 350; //x
	r.center = 0;
	ggprint16(&r, 32, c, "Desinated Leader: Thang Hin"); 
}

void playerSprite ( int x, int y, GLuint textid)
{
	float cx = 1250/2;
	float cy = 900/2;
	//float h = 200.0;
	//float w = h * 0.5;
	glPushMatrix();
	glColor3f(1.0, 1.0, 1.0);
	glBindTexture(GL_TEXTURE_2D, textid);
	glEnable(GL_ALPHA_TEST);
	glAlphaFunc(GL_GREATER, 0.0f);
	glColor4ub(255,255,255,255);
	int ix = textid % 8;
	int iy = 0;
	//if (gl.walkFrame >= 8)
		//iy = 1;
	float fx = (float)ix / 8.0;
	float fy = (float)iy / 2.0;
    glBegin(GL_QUADS);
        /*if (gl.keys[XK_Left]) {
            glTexCoord2f(fx+.125, fy+.5); glVertex2i(cx-w, cy-h);
            glTexCoord2f(fx+.125, fy);    glVertex2i(cxw, cy+h);
            glTexCoord2f(fx,      fy);    glVertex2i(cx+w, cy+h);
            glTexCoord2f(fx,      fy+.5); glVertex2i(cx+w, cy-h);
        } else */
	glTexCoord2f(fx,      fy+.5); glVertex2i(cx-x, cy-y);
	glTexCoord2f(fx,      fy);    glVertex2i(cx-x, cy+y);
	glTexCoord2f(fx+.125, fy);    glVertex2i(cx+x, cy+y);
	glTexCoord2f(fx+.125, fy+.5); glVertex2i(cx+x, cy-y);
	glEnd();
	glPopMatrix();
	glBindTexture(GL_TEXTURE_2D, 0);
	glDisable(GL_ALPHA_TEST);
}
