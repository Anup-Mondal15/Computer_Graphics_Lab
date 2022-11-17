#include <GL/gl.h>
#include <GL/glut.h>
#include<stdio.h>

float x, y, r, p, uX, uY, nX, nY;
int dx=0, dy=0;

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

     glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2d(60, 10);
    glVertex2d(20, 100);
    glVertex2d(30, 100);
    glVertex2d(70, 10);
    glEnd();

    glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2d(10, 90);
    glVertex2d(10, 100);
    glVertex2d(30, 100);
    glVertex2d(30, 90);
    glEnd();

    glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2d(-60, 5);
    glVertex2d(-60, 15);
    glVertex2d(-5, 15);
    glVertex2d(-5, 5);
    glEnd();

    glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2d(-5, 10);
    glVertex2d(-45, 100);
    glVertex2d(-55, 100);
    glVertex2d(-15, 10);
    glEnd();

    glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2d(-60, 90);
    glVertex2d(-60, 100);
    glVertex2d(-30, 100);
    glVertex2d(-30, 90);
    glEnd();

    glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2d(-70, 5);
    glVertex2d(-40, 65);
    glVertex2d(-30, 65);
    glVertex2d(-60, 5);
    glEnd();

    glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2d(-40, 65);
    glVertex2d(-40, 75);
    glVertex2d(40, 75);
    glVertex2d(40, 65);
    glEnd();

    glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2d(-5, 5);
    glVertex2d(-5, 15);
    glVertex2d(40, 75);
    glVertex2d(40, 65);
    glEnd();

    glBegin(GL_POINTS);
    glColor3ub(255, 0, 0);

    p = 1 - r;
    while(x<=y)
    {
        if(p<0)
        {
            x = x + 1;
            y = y;
            printf("x, y = %f %f \n", x, y);
            p = p+(2*x)+1;
        }
        else if(p>=0)
        {
            x = x +1;
            y = y - 1;
            printf("x, y = %f %f \n", x, y);
            p = p+(2*x)+1-(2*y);
        }

        glVertex3f(x+uX,y+uY,0);
        glVertex3f(y+uX,x+uY,0);
        glVertex3f((-x+uX),(-y+uY),0);
        glVertex3f((-x+uX),y+uY,0);
        glVertex3f(x+uX,(-y+uY),0);
        glVertex3f(y+uX,(-x+uY),0);
        glVertex3f((-y+uX),(-x+uY),0);
        glVertex3f((-y+uX),x+uY,0);


        glVertex3f(x+70,y+12,0);
        glVertex3f(y+70,x+12,0);
        glVertex3f((-x+70),(-y+12),0);
        glVertex3f((-x+70),y+12,0);
        glVertex3f(x+70,(-y+12),0);
        glVertex3f(y+70,(-x+12),0);
        glVertex3f((-y+70),(-x+12),0);
        glVertex3f((-y+70),x+12,0);

    }

    glEnd();


    glFlush ();
}
void init (void)
{
    /* select clearing (background) color */
    glClearColor (0.0, 0.0, 0.0, 0.0);
    /* initialize viewing values */
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-500, 500, -500, 500, -10.0, 10.0);
}

int main(int argc, char** argv)
{

    printf("Enter Radius: ");
    scanf("%f", &r);

    printf("Enter x: ");
    scanf("%f", &uX);

    printf("Enter y: ");
    scanf("%f", &uY);

    y=r;

    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (600, 600);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("193-15-13442");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0; /* ISO C requires main to return int. */
}
