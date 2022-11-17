#include <GL/gl.h>
#include <GL/glut.h>

float x = -250;
float y = 250;
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    if (x <= 250)
        x = x + 0.01;
    else
        x = -250;

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2d(x, 20);
    glVertex2d(x + 20, 20);
    glVertex2d(x + 20, -20);
    glVertex2d(x, -20);
    glEnd();



    if (y >= -250)
        y = y - 0.01;
    else
        y = 250;

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2d(20, y);
    glVertex2d(20, y - 20);
    glVertex2d(-20, y - 20);
    glVertex2d(-20, y);
    glEnd();
    glutPostRedisplay();

    glFlush();
}



void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-250, 250, -250, 250);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("193-15-13424");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0; /* ISO C requires main to return int. */
}
