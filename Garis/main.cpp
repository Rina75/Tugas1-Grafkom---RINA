#include <windows.h>
#include <GL/glut.h>
#include <math.h>

void display(void){
glClear (GL_COLOR_BUFFER_BIT);

    glColor3f(1.0,0.0,0.0);

    glBegin(GL_LINES);

    glVertex3f(-0.4,0.6,0.0);
    glVertex3f(0.7,-0.2,0.0);

    glEnd ();
glFlush();
}

int main(int argc, char **argv){
    glutInit(&argc, argv);
    glutCreateWindow("E1E121089_Garis");
    glutDisplayFunc(display);
    glutMainLoop();
return 0;
}
