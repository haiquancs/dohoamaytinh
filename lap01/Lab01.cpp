#include <iostream>
#include <GL/glut.h>
using namespace std;

/**
 * gl : c�c l?nh li�n quan d?n v?
 * glut : c�c l?nh li�n quan d?n c?a s?, m�n h�nh ..
 * */

void displayMe(void)
{
    // L?nh x�a n?n
    glClear(GL_COLOR_BUFFER_BIT);


    // B?t d?u v? da gi�c
    glBegin(GL_POLYGON);
        // C�c d?nh du?c li?t k� s? t? n?i v?i nhau v� d?nh cu?i s? n�i v?i d?nh d?u 
        glVertex3f(0.5, 0.0, 0.5);
        glVertex3f(0.5, 0.0, 0.0);
        glVertex3f(0.0, 0.5, 0.0);
        glVertex3f(0.0, 0.0, 0.5);
        glVertex3f(1, 2, 3);
    glEnd();
    // Lo?i b? c�c transforms
    glFlush();
    
}
 
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(400, 300);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Hello world!");
    glutDisplayFunc(displayMe);
    glutMainLoop();
    return 0;
}
