/**
* Author: Eddie Ekpo
*
*/
void showEddiePhoto (int x, int y, GLuint textid) 
{
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
    ggprint16(&r, 32, 0x00ff0000, "Eddie Ekpo");
}
