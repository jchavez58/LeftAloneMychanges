/*
 *Author: Joshua C
 */
#include "math.h"
#include <X11/Xlib.h>
#include <GL/glx.h>
#include "log.h"
#include "fonts.h"

void TitleScreen (int x, int y, GLuint textid)
{
    glColor3ub(255,255,255);
    static float angle = 0.0f;
    //changed wid
    static int wid = 100;
    wid += sin(angle) * 10;
    float fx = (float)x;
    float fy = (float)y;
    float a = 0 ;
    a += sin(angle) * 10.0f;
    fx += a;
    //angle += 0.2f;
    glPushMatrix();
    glTranslatef(fx,fy,0);
    glRotatef(a,0,0,1.0);
    glBindTexture(GL_TEXTURE_2D, textid);

    glBegin(GL_QUADS);
    glTexCoord2f(0.0f,1.0f); glVertex2i(-wid,-wid);
    glTexCoord2f(0.0f,0.0f); glVertex2i(-wid,wid);
    glTexCoord2f(1.0f,0.0f); glVertex2i(wid,wid);
    glTexCoord2f(1.0f,1.0f); glVertex2i(wid,-wid);
    glEnd();
    glPopMatrix();
    

}

void JCimage (int x, int y, GLuint textid)
{
    glColor3ub(255,255,255);
    static float angle = 0.0f;
    //changed wid
    static int wid = 100;
    wid += sin(angle) * 10;
    float fx = (float)x;
    float fy = (float)y;
    float a = 0 ;
    a += sin(angle) * 10.0f;
    fx += a;
    //angle += 0.2f;
    glPushMatrix();
    glTranslatef(fx,fy,0);
    glRotatef(a,0,0,1.0);
    glBindTexture(GL_TEXTURE_2D, textid);

    glBegin(GL_QUADS);
    glTexCoord2f(0.0f,1.0f); glVertex2i(-wid,-wid);
    glTexCoord2f(0.0f,0.0f); glVertex2i(-wid,wid);
    glTexCoord2f(1.0f,0.0f); glVertex2i(wid,wid);
    glTexCoord2f(1.0f,1.0f); glVertex2i(wid,-wid);
    glEnd();
    glPopMatrix();
    
    Rect r;
    unsigned int c = 0x00ffff44;
    r.bot = y - 20;
    r.left = x - wid/2 - 250;
    r.center = 0;
    ggprint16(&r, 32, c, "Joshua Chavez");

}




