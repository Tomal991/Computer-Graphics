#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
#include <math.h>

void init(void)
{
    glClearColor(0.0,0.0,0.0,0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 600.0, 0.0, 600.0);
}

void Circle(int x,int y,int r)
{
    float m;
    glBegin(GL_POLYGON);

    for(int i=0; i<360; i++)
    {
        m=i*3.142/180;
        glVertex2f(x+r*cos(m),y+r*sin(m));
    }

    glEnd();

}


void Draw()
{

    glColor3f(0.9,0.6,0.2);
    Circle(300,300,70);

    glBegin(GL_LINES);

    //left
    glColor3f(0.0, 0.0, 0.0);
    glVertex2i(270, 270);
    glVertex2i(300,330);
    //For shadow
    glVertex2i(271, 270);
    glVertex2i(301,330);
    glVertex2i(272, 270);
    glVertex2i(302,330);

    //right
    glVertex2i(300, 330);
    glVertex2i(330,270);
    // For shadow
    glVertex2i(301, 330);
    glVertex2i(331,270);
    glVertex2i(302, 330);
    glVertex2i(332,270);

    //bottom
    glVertex2i(270, 270);
    glVertex2i(330,270);
    // For shadow
    glVertex2i(271, 271);
    glVertex2i(331,271);
    glVertex2i(272, 272);
    glVertex2i(332,272);

    glEnd();


    glutSwapBuffers();

}
int main(int argc,char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowPosition(200,20);
    glutInitWindowSize(700,500);
    glutCreateWindow("Lab final Figure ID 2 (182-15-2170)");
    init();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}
