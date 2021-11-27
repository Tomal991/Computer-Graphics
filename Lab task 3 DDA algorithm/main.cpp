#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
#include <math.h>

void init(void)
{
    glClearColor(0.0,0.0,0.0,0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 400.0, 0.0, 400.0, -1.0, 1.0);
}

void Draw()
{

    int xstart=21, xend=387, ystart=87, yend=321;
    double xi, yi, m;
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1,1,1);

    m = (yend-ystart)/(xend-xstart);

    if(xend>xstart)
    {
        if(m<=1)
        {
            xi = 1;
            yi = m;
        }
        else if(m>1)
        {
            yi = 1;
            xi = 1/m;
        }
    }
    else if(xstart>xend)
    {
        if(m<=1)
        {
            xi = -1;
            yi = -m;
        }
        else if(m>1)
        {
            xi = (-1)/m;
            yi = -1;
        }
    }


    glBegin(GL_POINTS);
    glVertex2i(round(xstart), round(ystart));

    while(1)
    {
        xstart = xstart+xi;
        ystart = ystart+yi;

        glVertex2i(round(xstart), round(ystart));

        if(xstart==xend || ystart==yend)
        {
            break;
        }
    }

    glEnd();

    glutSwapBuffers();
}

int main(int argc,char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowPosition(200,50);
    glutInitWindowSize(600,600);
    glutCreateWindow("Lab Task 3 DDA");
    init();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}
