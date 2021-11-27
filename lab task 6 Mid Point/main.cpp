#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>

void init(void)
{
    glClearColor(0.0,0.0,0.0,0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-500.0, 500.0, -500.0, 500.0, -1.0, 1.0);

}


void Draw()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);


    for(int i=-200; i<=200; i++)
    {
        glVertex2d(0,i);
        glVertex2d(i,0);


    }


    double m=0,n=0,r=129; //My ID-182-15-2170 so 2170%157=129
    double p0=1-r;
    double pk=p0;
    double pk2;
    double x=m,y=n+r;

    glColor3f(0.1,0.7,0.0); //last 3 digit- 170
    glBegin(GL_POLYGON);

    glVertex2d(x,y);

    while(1)
    {
        if(pk<0)
        {
            x++;
            pk2=pk+(2*x)+1;
        }

        else if(pk>=0)
        {
            x++;
            y--;
            pk2=pk+(2*x)+1-(2*y);

        }

        pk=pk2;

        glVertex2d(x,y);

        glColor3f(0.7, 0.1, 0.0);
        glVertex2d(x,-y);

        glColor3f(0.1, 0.0, 0.7);
        glVertex2d(-x,y);

        glColor3f (0.0, 0.7, 0.1);
        glVertex2d(-x,-y);

        glColor3f(0.7, 0.0, 0.1);
        glVertex2d(y,x);

        glColor3f(0.0, 0.1, 0.7);
        glVertex2d(y,-x);

        glColor3f(0.1, 0.7, 0.0);
        glVertex2d(-y,x);

        glColor3f(0.0, 0.1, 0.7);
        glVertex2d(-y,-x);


        if(x>=y)
        {
            break;
        }
    }
    glEnd();
    glFlush();

    glutSwapBuffers();
}

int main(int argc,char **argv)
{


    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowPosition(500,10);
    glutInitWindowSize(600,600);
    glutCreateWindow("Lab Task 6 Mid Point");
    init();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}
