#include<GL/glut.h>
#include<GL/gl.h>
#include<math.h>
void circle(float x,float y,double r,float red,float green,float blue){
float x2,y2;
float angle;
double radius = r;
glColor3f(red,green,blue);
glBegin(GL_TRIANGLE_FAN);
glVertex2f(x,y);

for(angle=1.0;angle<360.0;angle+=0.1)
{
 	x2 = (float)(x+cos(angle)*radius);
 	y2 = (float)(y+sin(angle)*radius);
 	glVertex2f(x2,y2);
}

glEnd();
}
void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	
	//triangle roof
	glClearColor(0.57,1.00,0.76,0.00);
	glColor3f(0.6,0.3,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(0,0.2);
	glVertex2f(-0.2,-0.2);
	glVertex2f(0.2,-0.2);
	glEnd();
	
	//front wall
	glColor3f(0.6,0.6,0.6);
	glBegin(GL_POLYGON);
	glVertex2f(-0.2,-0.2);
	glVertex2f(0.2,-0.2);
	glVertex2f(0.2,-0.6);
	glVertex2f(-0.2,-0.6);
	glEnd();
	
	//grass
	glColor3f(0.0,0.8,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(-1.0,-0.6);
	glVertex2f(1.0,-0.6);
	glVertex2f(1.0,-1.0);
	glVertex2f(-1.0,-1.0);
	glEnd();
	
	
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINES);
	glVertex2f(-1.0,-0.61);
	glVertex2f(1.0,-0.61);
	glEnd();
	
	//slant roof
	glColor3f(0.70,0.3,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(0.0,0.2);
	glVertex2f(0.6,0.2);
	glVertex2f(0.8,-0.2);
	glVertex2f(0.2,-0.2);
	glEnd();
	
	//side wall
	glColor3f(0.50,0.50,0.50);
	glBegin(GL_POLYGON);
	glVertex2f(0.2,-0.2);
	glVertex2f(0.8,-0.2);
	glVertex2f(0.8,-0.6);
	glVertex2f(0.2,-0.6);
	glEnd();
	
	//door
	glColor3f(0.30,0.40,0.50);
	glBegin(GL_POLYGON);
	glVertex2f(-0.1,-0.3);
	glVertex2f(0.1,-0.3);
	glVertex2f(0.1,-0.6);
	glVertex2f(-0.1,-0.6);
	glEnd();
	
	circle(-0.062,-0.45,0.01,0.0,0.0,0.0);
	
	//pathway
	glColor3f(0.250,0.25,0.25);
	glBegin(GL_POLYGON);
	glVertex2f(-0.1,-0.6);
	glVertex2f(0.1,-0.6);
	glVertex2f(0.2,-1.0);
	glVertex2f(-0.2,-1.0);
	glEnd();
	
	//window
	glColor3f(0.25,0.25,0.25);
	glBegin(GL_POLYGON);
	glVertex2f(0.3,-0.3);
	glVertex2f(0.7,-0.3);
	glVertex2f(0.7,-0.5);
	glVertex2f(0.3,-0.5);
	glEnd();
	
	//WindowLines
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_LINES);
	glVertex2f(0.5,-0.3);
	glVertex2f(0.5,-0.5);
	glEnd();
	
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_LINES);
	glVertex2f(0.3,-0.4);
	glVertex2f(0.7,-0.4);
	glEnd();
	
	
	//treetrunk
	glColor3f(0.00,0.10,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(-0.68,-0.6);
	glVertex2f(-0.72,-0.6);
	glVertex2f(-0.72,-0.3);
	glVertex2f(-0.68,-0.3);
	glEnd();
	
	//sun
	circle(-0.7,0.75,0.15,1.0,1.0,0);
	
	//clouds
	circle(-0.2,0.72,0.1,1.0,1.0,1.0);
	circle(0.0,0.77,0.17,1.0,1.0,1.0);
	circle(0.2,0.72,0.1,1.0,1.0,1.0);
	
	circle(0.43,0.63,0.08,1.0,1.0,1.0);
	circle(0.53,0.68,0.13,1.0,1.0,1.0);
	circle(0.71,0.65,0.12,1.0,1.0,1.0);
	circle(0.85,0.65,0.05,1.0,1.0,1.0);
	
	//househole
	circle(0.0,-0.05,0.05,1.0,0.3,0.0);
	
	//tree-greens
	glColor3f(0.00,0.70,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(-0.9,-0.3);
	glVertex2f(-0.5,-0.3);
	glVertex2f(-0.7,0.0);
	glEnd();
	
	glColor3f(0.00,0.70,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(-0.85,-0.1);
	glVertex2f(-0.55,-0.1);
	glVertex2f(-0.7,0.2);
	glEnd();
	
	glColor3f(0.00,0.70,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(-0.8,0.1);
	glVertex2f(-0.6,0.1);
	glVertex2f(-0.7,0.4);
	glEnd();
	
	
	
	
	glFlush();
}

int main(int argc,char** argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowSize(800,800);
	glutInitWindowPosition(100,100);
	glutCreateWindow("Exp-1:Scene with Hut");
	glutDisplayFunc(display);
	glutMainLoop();
}

