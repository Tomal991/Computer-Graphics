#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
#include <math.h>

void init(void)
{
    glClearColor(0.0,0.0,0.0,0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 700.0, 0.0, 700.0, -1.0, 1.0);
}

void Draw()
{

    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0.1,0.7,0.0); //My ID : 182-15-2170

    int xstart=9,ystart=13,xend=37,yend=41;

    int dy=yend-ystart;
    int dx=xend-xstart;
    int diff=2*dy-2*dx;
    int k0=2*dy-dx;
    int k=k0;
    int x=xstart,y=ystart;


    glBegin(GL_POINTS);


    while(true)
    {
        if(k>=0)
        {
            x++;
            y++;
            k=k+diff;
        }
        else
        {
            x++;
            k=k+2*dy;

        }

        glVertex2d(x,y);

        if(x==xend && y==yend)
            break;
    }

    glEnd();

    glutSwapBuffers();
}

int main(int argc,char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowPosition(200,20);
    glutInitWindowSize(800,600);
    glutCreateWindow("Lab Task 4 Bresenham algorithm");
    init();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}
