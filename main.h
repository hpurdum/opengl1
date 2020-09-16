/*
 *
 *	OpenGL Practice header
 * 	Henry Purdum
 *
 *
*/

#include <iostream>
#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#include <OpenGL/glext.h>
#include <GLUT/glut.h>

void display(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	gl_Color3f(1.0,1.0,1.0);
	glBeginQuery(GL_POLYGON);
	glVertex3f(0.25,0.25,0.0);
	glVertex3f(0.75,0.25,0.0);
	glVertex3f(0.75,0.75,0.0);
	glVertex3f(0.25,0.75,0.0);
	glEndQuery();
	glFlush();	
}
