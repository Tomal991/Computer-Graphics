#include <GL/gl.h>
#include <GL/glut.h>

void init (void)
{

    glClearColor (0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}


void display(void)
{

    glClear (GL_COLOR_BUFFER_BIT);

    glBegin(GL_QUADS);

    glColor3f (1.0, 1.0, 1.0);
    glVertex2d(0.36, 0.70);
    glVertex2d(0.96, 0.70);
    glVertex2d(0.96, 0.80);
    glVertex2d(0.36, 0.80);

    glColor3f (0.0, 0.0, 1.0);
    glVertex2d(0.36, 0.60);
    glVertex2d(0.96, 0.60);
    glVertex2d(0.96, 0.70);
    glVertex2d(0.36, 0.70);

    glColor3f (1.0, 0.0, 0.0);
    glVertex2d(0.36, 0.50);
    glVertex2d(0.96, 0.50);
    glVertex2d(0.96, 0.60);
    glVertex2d(0.36, 0.60);


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
    glutCreateWindow ("Flag of Russia");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
