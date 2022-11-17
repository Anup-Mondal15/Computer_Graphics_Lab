#include <GL/gl.h>
#include <GL/glut.h>
#include <windows.h>
#include <GL/glut.h>

void display() {

	glClear(GL_COLOR_BUFFER_BIT);


    glBegin(GL_POLYGON);
    glColor3f(0.0, 1.1, 0.0);
    glVertex2d(100, 400);
    glVertex2d(500, 500);
    glVertex2d(100, 600);
    glVertex2d(0, 1000);
    glVertex2d(-100, 600);
    glVertex2d(-500, 500);
    glVertex2d(-100, 400);
    glVertex2d(0, 0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.1, 0.0, 0.0);
    glVertex2d(-400, 100);
    glVertex2d(-500, 500);
    glVertex2d(-600, 100);
    glVertex2d(-1000, 0);
    glVertex2d(-600, -100);
    glVertex2d(-500, -500);
    glVertex2d(-400, -100);
    glVertex2d(0, 0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 1.0);
    glVertex2d(100, -400);
    glVertex2d(500, -500);
    glVertex2d(100, -600);
    glVertex2d(0, -1000);
    glVertex2d(-100, -600);
    glVertex2d(-500, -500);
    glVertex2d(-100, -400);
    glVertex2d(0, 0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.1, 1.1);
    glVertex2d(400, 100);
    glVertex2d(500, 500);
    glVertex2d(600, 100);
    glVertex2d(1000, 0);
    glVertex2d(600, -100);
    glVertex2d(500, -500);
    glVertex2d(400, -100);
    glVertex2d(0, 0);
    glEnd();


	glFlush();
}
void init (void){
glClearColor(1.0,1.0,0.0,0.0);

glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(-1000,1000,-1000,1000);
}
int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (500, 500);
glutInitWindowPosition (100, 100);
glutCreateWindow ("193-15-13424");
init();
glutDisplayFunc(display);
glutMainLoop();
return 0; /* ISO C requires main to return int. */
}
