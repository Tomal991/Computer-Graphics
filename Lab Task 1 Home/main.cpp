#include <GL/gl.h>
#include <GL/glut.h>

void init (void)
{

    glClearColor (1.0, 0.6, 0.1, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}


void display(void)
{

    glClear (GL_COLOR_BUFFER_BIT);

    glColor3f (1.0, 1.0, 1.0);

    glBegin(GL_QUADS);

    //Trapezoid
    glColor3f (0.4, 0.4, 0.4);
    glVertex2d(0.05, 0.05);
    glVertex2d(0.94, 0.05);
    glVertex2d(0.94, 0.60);
    glVertex2d(0.05, 0.60);


    //door-small
    glColor3f (0.7, 0.6, 0.0);
    glVertex2d(0.36, 0.50);
    glVertex2d(0.56, 0.50);
    glVertex2d(0.56, 0.55);
    glVertex2d(0.36, 0.55);

    //door
    glColor3f (0.7, 0.6, 0.0);
    glVertex2d(0.36, 0.05);
    glVertex2d(0.56, 0.05);
    glVertex2d(0.56, 0.46);
    glVertex2d(0.36, 0.46);

    //window-small
    glColor3f (1.0, 0.0, 0.0);
    glVertex2d(0.64, 0.50);
    glVertex2d(0.90, 0.50);
    glVertex2d(0.90, 0.56);
    glVertex2d(0.64, 0.56);

    //window
    glColor3f (1.0, 0.0, 0.0);
    glVertex2d(0.64, 0.20);
    glVertex2d(0.90, 0.20);
    glVertex2d(0.90, 0.46);
    glVertex2d(0.64, 0.46);

    glEnd();


    glBegin(GL_TRIANGLES);


    //Triangle
    glColor3f (1.0, 0.0, 0.0);
    glVertex2d(0.0, 0.60);
    glVertex2d(1.0, 0.60);
    glVertex2d(0.60, 1.0);

    glEnd();


    glFlush ();

}

/*
* Declare initial window size, position, and display mode
* Enter main loop and process events.
*/

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (500, 500);
    glutInitWindowPosition (400, 50);
    glutCreateWindow ("Home");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
