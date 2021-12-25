#include <GL/gl.h>
#include <GL/glut.h>
#include<stdio.h>
#include<math.h>


float x,y,i;
float PI=3.1416;

void Display(void)
{

    float x,y;
    int i;
    GLfloat r;
    int angle =100;
    GLfloat P = 2.0 * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(250.0, 92.0, 215.0);
    x=0;
    y=0;
    r =30;

    P = 2.0*PI;

    glVertex2f(x, y);   // center of circle
    for(i=0; i <=angle; i++)
    {
        glVertex2f(
            x +(r*cos(i * P/angle )),
            y +(r*sin(i * P/angle ))
        );
    }

    glEnd();
    glBegin(GL_LINES);
    glVertex2i(2,-20);
    glVertex2i(2,-80);
    glEnd();
    glutSwapBuffers();
}

void init(void)
{
    glClearColor (0.0,0.0,1.0,0.0);
    glLoadIdentity();
    glOrtho(-100.-50, 100.0, -100.0, 100.-50, -100.0, 100.0);
}

int main(int argc,char** argv)
{

    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE);
    glutInitWindowSize(700,550);
    glutInitWindowPosition(200,50);
    glutCreateWindow("Balloon");
    glutDisplayFunc(Display);
    init ();
    glutMainLoop();

    return 0;
}
