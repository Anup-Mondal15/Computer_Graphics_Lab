#include <GL/gl.h>
#include <GL/glut.h>
#include<stdio.h>

float x, y, r, p, uX, uY, nX, nY;
int dx=0, dy=0;

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    /*glBegin(GL_POINTS);
    glColor3ub(255, 0, 0);*/
     //green squre
    glColor3ub(0, 106, 78);
    glBegin(GL_POLYGON);
    glVertex2d(-150, -75);
    glVertex2d(-150, 75);
    glVertex2d(150, 75);
    glVertex2d(150, -75);
    glEnd();

    //stand
    glColor3ub(83, 12, 12);
    glBegin(GL_POLYGON);
    glVertex2d(-160, -250);
    glVertex2d(-150, -250);
    glVertex2d(-150, 75);
    glVertex2d(-160, 75);
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
            //nX=x+uX;
            //nY=y+uY;
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

    glFlush ();
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
