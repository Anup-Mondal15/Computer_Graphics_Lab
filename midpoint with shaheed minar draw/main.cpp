#include <GL/gl.h>
#include <GL/glut.h>
#include<stdio.h>

float x, y, r, p, uX, uY, nX, nY;
int dx=0, dy=0;

void display() {

    glClear(GL_COLOR_BUFFER_BIT);
    glColor3ub(83, 12, 12);
    glBegin(GL_POLYGON);

    glVertex2i(-280, -0);
    glVertex2i(300, 0);
    glVertex2i(300, 0);
    glVertex2i(300, -10);
    glVertex2i(300, -10);
    glVertex2i(-280, -10);
    glVertex2i(-280, -10);
    glVertex2i(-280, 0);
    glEnd();

    // 1 number pilar
    glBegin(GL_POLYGON);
    // glColor3f(0.5, 0.2, 0.2);
    glColor3d(255, 255, 255);
    glVertex2d(-190, 270);
    glVertex2d(-160, 270);
    glVertex2d(-160, 0);
    glVertex2d(-190, 0);
    glEnd();

    //pilar of var
    glBegin(GL_POLYGON);
    glColor3d(255, 255, 255);
    glVertex2d(-160, 270);
    glVertex2d(-120, 270);
    glVertex2d(-120, 240);
    glVertex2d(-160, 240);
    glEnd();

    // 2 number pilar
    glBegin(GL_POLYGON);
    glColor3d(255, 255, 255);
    glVertex2d(-120, 270);
    glVertex2d(-90, 270);
    glVertex2d(-90, 0);
    glVertex2d(-120, 0);
    glEnd();
    glColor3f(1.0, 0.0, 0.0);

    //Center point of this window start
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glEnd();

     p = 1 - r;
    while(x<=y)
    {
        if(p<0)
        {
            x = x + 1;
            y = y;
            printf("x, y =  %f %f \n", x, y);
            p = p + (2*x) + 1;

        }
        else if(p>=0)
        {
            x = x +1;
            y = y - 1;
            printf("x, y = %f %f \n", x, y);
            p = p+(2*x)+1-(2*y);
        }

        glBegin(GL_POLYGON);
        glVertex3f(x+uX,y+uY,0);
        glVertex3f(y+uX,x+uY,0);
        glVertex3f((-x+uX),(-y+uY),0);
        glVertex3f((-x+uX),y+uY,0);
        glVertex3f(x+uX,(-y+uY),0);
        glVertex3f(y+uX,(-x+uY),0);
        glVertex3f((-y+uX),(-x+uY),0);
        glVertex3f((-y+uX),x+uY,0);

    }
    glEnd();

    //drawing
    glBegin(GL_POLYGON);
    glColor3d(255, 255, 255);
    glVertex2d(-100, 370);
    glVertex2d(100, 370);
    glVertex2d(60, 300);
    glVertex2d(-60, 300);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2d(-60, 360);
    glVertex2d(60, 360);
    glVertex2d(40, 310);
    glVertex2d(-40, 310);
    glEnd();


    // drawing
    glBegin(GL_POLYGON);
    glColor3d(255, 255, 255);
    glVertex2d(-60, 300);
    glVertex2d(-30, 300);
    glVertex2d(-30, 0);
    glVertex2d(-60, 0);
    glEnd();


    //drawing
    glBegin(GL_POLYGON);
    glColor3d(255, 255, 255);
    glVertex2d(60, 300);
    glVertex2d(30, 300);
    glVertex2d(30, 0);
    glVertex2d(60, 0);
    glEnd();


    // pilar number 5 of 1
    glBegin(GL_POLYGON);
    glColor3d(255, 255, 255);
    glVertex2d(120, 270);
    glVertex2d(90, 270);
    glVertex2d(90, 0);
    glVertex2d(120, 0);
    glEnd();

    // 5 number pilar of upper line
    glBegin(GL_POLYGON);
    glColor3d(255, 255, 255);
    glVertex2d(160, 270);
    glVertex2d(120, 270);
    glVertex2d(120, 240);
    glVertex2d(160, 240);
    glEnd();


    // pilar number 5 of 2
    glBegin(GL_POLYGON);
    glColor3d(255, 255, 255);
    glVertex2d(190, 270);
    glVertex2d(160, 270);
    glVertex2d(160, 0);
    glVertex2d(190, 0);
    glEnd();


    glFlush();
    glutSwapBuffers();
}
void init (void)
{
    /* select clearing (background) color */
    glClearColor (0.0, 0.0, 0.0, 0.0);
    /* initialize viewing values */
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-500, 500, -500, 500, -500, 500);
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
    glutCreateWindow ("193-15-13424");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0; /* ISO C requires main to return int. */
}

