#include<GL/glut.h> 
#include<stdlib.h> 
#include<math.h>
#include<bits/stdc++.h>



float r,g,b,x,y;
bool check=true;
int count = 0;
int arr[101][3];
int i=0,j=0;
bool clear = false;
char name[] = "Harshvardhan Gupta 500067717"; 



void mouse(int button, int state, int mousex, int mousey)
{
    if(button==GLUT_LEFT_BUTTON && state==GLUT_DOWN)
    {
       check=true;

        x = mousex;
        y = 480-mousey;
        arr[i][0] = mousex;
        arr[i][1] = 480-mousey;
        i++;
        }
        

   else if(button==GLUT_RIGHT_BUTTON && state==GLUT_DOWN)
           {
           if(count>4)
           {
             count = 0;
           }
           count++;
     }
glutPostRedisplay();
     }
void keyboard(unsigned char Key,int x, int y)
{
if(Key== 27)
{
exit(0);
}
else if(Key==' ')
{
clear =true;
glutPostRedisplay();
j++;
}
}

void display(void)
{

    if(count == 1)
    {
      glColor3f(1,0,0);
    }
    else if(count == 2)
    {
      glColor3f(0,1,0);
    }
    else if(count == 3)
    {
      glColor3f(1,0,1);
    }
    else if(count == 4)
    {
      glColor3f(1,1,0);
    }

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 640.0, 0.0, 480.0);

if(check)
{
       glBegin(GL_POLYGON); 
       glVertex2f(x-50,y+50);
       glVertex2f(x+50,y+70);
       glVertex2f(x+50,y-50);
       glVertex2f(x,y-75);
       glVertex2f(x-60,y-60);
       
       
  glEnd();
}
if(clear)
{
         glColor3f(0,0,0);
         glBegin(GL_POLYGON); 
         glVertex2f(arr[j][0]-50,arr[j][1]+50);
         glVertex2f(arr[j][0]+50,arr[j][1]+70);
         glVertex2f(arr[j][0]+50,arr[j][1]-50);
         glVertex2f(arr[j][0],arr[j][1]-75);
         glVertex2f(arr[j][0]-60,arr[j][1]-60);
          glEnd();
}

glColor3f(1,1,1);
glRasterPos2f(450,10);
for(int k=0;k<strlen(name);k++)
{
  glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,name[k]);
}

    glFlush();    
}

int main(int argc,char** argv)
{
	glutInit(&argc,argv);
    glutInitWindowSize(640,480);   
    glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutCreateWindow("Exp-2:Event Handling");
    glClearColor(0, 0, 0, 0); 
    glClear(GL_COLOR_BUFFER_BIT);

    glutDisplayFunc(display);
    glutMouseFunc(mouse);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
}
