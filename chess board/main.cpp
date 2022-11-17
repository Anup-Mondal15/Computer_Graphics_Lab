#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
glClear (GL_COLOR_BUFFER_BIT);

bool cc=false;

for(int x=0;x<=600;x+=100)//row
{
    for(int y=0;y<=600;y+=100)//column
    {
        if(cc)
        {
            glColor3f(1.0,1.0,1.0);
            cc=!cc;
        }
        else
        {
            glColor3f(0.0,0.0,0.0);
            cc=!cc;

        }
        glBegin(GL_QUADS);
        glVertex2i(x,y);
        glVertex2i(x,y+100);
        glVertex2i(x+100,y+100);
        glVertex2i(x+100,y);
        glEnd();

        glFlush ();

    }
}

}
void init (void)
{
/* select clearing (background) color */
glClearColor(1.0,1.0,0.0,0.0);
/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0,600.0,0.0,600.0);
}

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (700, 700);
glutInitWindowPosition (100, 100);
glutCreateWindow ("193-15-13424");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0; /* ISO C requires main to return int. */
}
