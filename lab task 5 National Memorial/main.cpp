#include<Gl/gl.h>
#include<Gl/glut.h>


void myInit(void)

{
    glClearColor(1.0,1.0,1.0,1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 350.0, 0.0, 350.0);

}

void Draw(void)

{

    glClear(GL_COLOR_BUFFER_BIT);


    glBegin(GL_TRIANGLES);


    //Triangle1
    glColor3f(0.1, 0.7, 0.0);  //myId- 182-15-2170
    glVertex2i(45, 30);
    glVertex2i(315, 30);
    glVertex2i(180,100);

    //Triangle2
    glColor3f(0.7, 0.1, 0.0);
    glVertex2i(65, 30);
    glVertex2i(295, 30);
    glVertex2i(180,130);

    //Triangle3
    glColor3f(0.1, 0.0, 0.7);
    glVertex2i(85, 30);
    glVertex2i(275, 30);
    glVertex2i(180,160);

    //Triangle4
    glColor3f (0.0, 0.7, 0.1);
    glVertex2i(105, 30);
    glVertex2i(255, 30);
    glVertex2i(180,190);

    //Triangle5
    glColor3f(0.7, 0.0, 0.1);
    glVertex2i(125, 30);
    glVertex2i(235, 30);
    glVertex2i(180,220);


    //Triangle6
    glColor3f(0.0, 0.1, 0.7);
    glVertex2i(145, 30);
    glVertex2i(215, 30);
    glVertex2i(180,250);

    //Triangle7
    glColor3f(0.1, 0.7, 0.0);
    glVertex2i(165, 30);
    glVertex2i(195, 30);
    glVertex2i(180,285);


    glEnd();




    glBegin(GL_POLYGON);

    glColor3f(0.3, 0.3, 0.3) ;
    glVertex2i(20, 20);
    glVertex2i(335, 20);
    glVertex2i(335, 5);
    glVertex2i(20, 5);

    glEnd();


    glBegin(GL_POLYGON);

    glColor3f(0.4, 0.4, 0.4) ;
    glVertex2i(30, 30);
    glVertex2i(325, 30);
    glVertex2i(325, 20);
    glVertex2i(30, 20);

    glEnd();

    glFlush();

}


int main (int argc, char **argv)
{

    glutInit (&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (700, 500);
    glutInitWindowPosition (400, 50);
    glutCreateWindow ("Lab task 5 Sriti Shoudho");
    glutDisplayFunc (Draw);
    myInit();
    glutMainLoop();
    return 0;
}
