#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>

void init(void)
{
    glClearColor(1.0,1.0,1.0,1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-500, 500, -300, 700);

}


void Draw()
{
    glClear(GL_COLOR_BUFFER_BIT);

//bottom1
    glBegin(GL_POLYGON);

    glColor3f(0.3, 0.3, 0.3) ;
    glVertex2d(-400, -70);
    glVertex2d(400, -70);
    glVertex2d(180, 70);
    glVertex2d(-180, 70);

    glEnd();


//bottom2
    glBegin(GL_POLYGON);

    glColor3f(0.4, 0.4, 0.4) ;
    glVertex2d(-390, -60);
    glVertex2d(390, -60);
    glVertex2d(170, 60);
    glVertex2d(-170, 60);

    glEnd();

//bottom3
    glBegin(GL_POLYGON);

    glColor3f(0.5, 0.5, 0.5) ;
    glVertex2d(-380, -50);
    glVertex2d(380, -50);
    glVertex2d(180, 50);
    glVertex2d(-180, 50);

    glEnd();

//----------------



//circle
    int m=0;
    int n=200;
    int r=100;

    float x=m;
    float y=r;
    float p=1-r;


    while(x<=y)
    {
        glColor3f(0.7,0.1,0.0);
        glBegin(GL_POLYGON);

        if(p<0)
        {
            x++;
            p=p+(2*x)+1;
        }

        else if(p>=0)
        {
            x++;
            y--;
            p=p+(2*x)-(2*y)+1;

        }


        glVertex2d(m+x,n+y);
        glVertex2d(m+y,n+x);
        glVertex2d(m-y,n+x);
        glVertex2d(m-x,n+y);
        glVertex2d(m-x,n-y);
        glVertex2d(m-y,n-x);
        glVertex2d(m+x,n-y);
        glVertex2d(m+y,n-x);


        glEnd();

    }

//----------



//top-middle1
    glBegin(GL_POLYGON);

    glColor3f(0.0, 0.7, 0.1) ;
    glVertex2d(-100, 390);
    glVertex2d(100, 390);
    glVertex2d(100, 370);
    glVertex2d(-100, 370);

    glEnd();

//top-middle2
    glBegin(GL_POLYGON);

    glColor3f(0.1, 0.0, 0.7) ;
    glVertex2d(-100, 370);
    glVertex2d(100, 370);
    glVertex2d(60, 300);
    glVertex2d(-60, 300);

    glEnd();

//top-middle3
    glBegin(GL_POLYGON);

    glColor3f(0.7, 0.1, 0.0) ;
    glVertex2d(-50, 350);
    glVertex2d(50, 350);
    glVertex2d(30, 300);
    glVertex2d(-30, 300);

    glEnd();

//top-middle4
    glBegin(GL_POLYGON);

    glColor3f(0.0, 0.1, 0.7) ;
    glVertex2d(-40, 350);
    glVertex2d(40, 350);
    glVertex2d(25, 300);
    glVertex2d(-25, 300);

    glEnd();


//------------


//middle1
    glBegin(GL_POLYGON);

    glColor3f(0.1, 0.0, 0.7) ;
    glVertex2d(-60, 300);
    glVertex2d(-30, 300);
    glVertex2d(-30, 0);
    glVertex2d(-60, 0);

    glEnd();


//middle2
    glBegin(GL_POLYGON);

    glColor3f(0.1, 0.0, 0.7) ;
    glVertex2d(60, 300);
    glVertex2d(30, 300);
    glVertex2d(30, 0);
    glVertex2d(60, 0);

    glEnd();

//--------------


//right1
    glBegin(GL_POLYGON);

    glColor3f(0.1, 0.7, 0.0) ;
    glVertex2d(130, 280);
    glVertex2d(100, 280);
    glVertex2d(100, 0);
    glVertex2d(130, 0);

    glEnd();


//right2
    glBegin(GL_POLYGON);

    glColor3f(0.0, 0.7, 0.1) ;
    glVertex2d(200, 280);
    glVertex2d(170, 280);
    glVertex2d(170, 0);
    glVertex2d(200, 0);

    glEnd();


//right-head
    glBegin(GL_POLYGON);

    glColor3f(0.1, 0.7, 0.0) ;
    glVertex2d(170, 280);
    glVertex2d(130, 280);
    glVertex2d(130, 250);
    glVertex2d(170, 250);

    glEnd();

    //---------------


//left1
    glBegin(GL_POLYGON);

    glColor3f(0.7, 0.1, 0.0) ;
    glVertex2d(-130, 280);
    glVertex2d(-100, 280);
    glVertex2d(-100, 0);
    glVertex2d(-130, 0);

    glEnd();


//left2
    glBegin(GL_POLYGON);

    glColor3f(0.7, 0.0, 0.1) ;
    glVertex2d(-200, 280);
    glVertex2d(-170, 280);
    glVertex2d(-170, 0);
    glVertex2d(-200, 0);

    glEnd();


//left-head
    glBegin(GL_POLYGON);

    glColor3f(0.7, 0.0, 0.1) ;
    glVertex2d(-170, 280);
    glVertex2d(-130, 280);
    glVertex2d(-130, 250);
    glVertex2d(-170, 250);

    glEnd();


    //------


    glFlush();

    glutSwapBuffers();



}



int main(int argc,char **argv)
{


    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowPosition(300,0);
    glutInitWindowSize(700,600);
    glutCreateWindow("Lab Task 7 Shahid Minar");
    init();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}
