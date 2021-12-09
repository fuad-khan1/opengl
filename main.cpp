#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include <math.h>
using namespace std;


float _moveA = 0.0f;
float _moveB = 0.0f;
float _angle1 = 0.0f;
float speed = 0.02f;
void Scene()
{
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3d(1,0,0);
    glLoadIdentity(); //Reset the drawing perspective
    gluOrtho2D(-15,15,-15,15);//range
    glMatrixMode(GL_MODELVIEW);



    ///river
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(-15.0f,-15.0f);
    glVertex2f(15.0f,-15.0f);
    glVertex2f(15.0f,-5.0f);
    glVertex2f(-15.0f,-5.0f);

    glEnd();



    ///boat upper
    glPushMatrix();
    glTranslatef(_moveA, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(0,153,76);
    glVertex2f(1.0f, -8.0f);
    glVertex2f(1.50f, -7.0f);
    glVertex2f(-2.0f, -7.0f);
    glVertex2f(-3.0f, -8.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,0,0);
    glVertex2f(2.0f, -9.0f);
    glVertex2f(2.0f, -8.0f);
    glVertex2f(-3.0f, -8.0f);
    glVertex2f(-3.0f, -9.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(88,55,200);
    glVertex2f(-1.0f, -7.0f);
    glVertex2f(1.0f, -7.0f);
    glVertex2f(1.3f, -6.0f);
    glVertex2f(-0.6f, -6.0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,153,76);
    glVertex2f(-3.0f, -8.0f);
    glVertex2f(-3.0f, -9.0f);
    glVertex2f(-4.5f, -7.7f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,153,76);
    glVertex2f(2.0f, -8.0f);
    glVertex2f(3.5f, -7.7f);
    glVertex2f(2.0f, -9.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub (245,245,245);
    glVertex2f(2.0f, -8.0f);
    glVertex2f(1.5f, -7.0f);
    glVertex2f(1.0f, -8.0f);

    glEnd();

    glPopMatrix();



    ///boat lower///
    glPushMatrix();
    //glColor3d(1,0,0);
    glTranslatef(_moveB, 0.0f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(255,0,0);
    glVertex2f(14.0f, -13.5f);
    glVertex2f(13.0f, -12.5f);
    glVertex2f(9.50f, -12.5f);
    glVertex2f(10.0f, -13.5f);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(0,150,70);
    glVertex2f(14.0f, -14.6f);
    glVertex2f(14.0f, -13.5f);
    glVertex2f(9.0f, -13.5f);
    glVertex2f(9.0f, -14.6f);
    glEnd();



    glBegin(GL_TRIANGLES);
    glColor3ub(255,0,0);
    glVertex2f(9.0f, -14.6);
    glVertex2f(9.0f, -13.5f);
    glVertex2f(7.5f, -13.2f);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255,0,0);
    glVertex2f(14.0f, -14.6f);
    glVertex2f(14.0f, -13.5f);
    glVertex2f(15.5f, -13.2f);

    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(9.0f, -13.5f);
    glColor3ub(0,0,0);
    glVertex2f(10.0f, -13.5f);
    glVertex2f(9.5f, -12.5f);

    glEnd();

    glutSwapBuffers();
}
void init()
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);


}

void Scene2()
{
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3d(1,0,0);
    glLoadIdentity(); //Reset the drawing perspective
    gluOrtho2D(-15,15,-15,15);//range
    glMatrixMode(GL_MODELVIEW);

    ///river
    glBegin(GL_POLYGON);
    glColor3ub(0,255,255);
    glVertex2f(-15.0f,-15.0f);
    glVertex2f(15.0f,-15.0f);
    glVertex2f(15.0f,-5.0f);
    glVertex2f(-15.0f,-5.0f);
    glEnd();

    ///boat upper
    glPushMatrix();
    glTranslatef(_moveA, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(0,153,76);
    glVertex2f(1.0f, -8.0f);
    glVertex2f(1.50f, -7.0f);
    glVertex2f(-2.0f, -7.0f);
    glVertex2f(-3.0f, -8.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,0,0);
    glVertex2f(2.0f, -9.0f);
    glVertex2f(2.0f, -8.0f);
    glVertex2f(-3.0f, -8.0f);
    glVertex2f(-3.0f, -9.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(88,55,200);
    glVertex2f(-1.0f, -7.0f);
    glVertex2f(1.0f, -7.0f);
    glVertex2f(1.3f, -6.0f);
    glVertex2f(-0.6f, -6.0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,153,76);
    glVertex2f(-3.0f, -8.0f);
    glVertex2f(-3.0f, -9.0f);
    glVertex2f(-4.5f, -7.7f);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,153,76);
    glVertex2f(2.0f, -8.0f);
    glVertex2f(3.5f, -7.7f);
    glVertex2f(2.0f, -9.0f);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,1,0);
    glVertex2f(2.0f, -8.0f);
    glVertex2f(1.5f, -7.0f);
    glVertex2f(1.0f, -8.0f);

    glEnd();

    glPopMatrix();



    ///boat lower///
    glPushMatrix();
    //glColor3d(1,0,0);
    glTranslatef(_moveB, 0.0f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(255,0,0);
    glVertex2f(14.0f, -13.5f);
    glVertex2f(13.0f, -12.5f);
    glVertex2f(9.50f, -12.5f);
    glVertex2f(10.0f, -13.5f);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(0,150,70);
    glVertex2f(14.0f, -14.6f);
    glVertex2f(14.0f, -13.5f);
    glVertex2f(9.0f, -13.5f);
    glVertex2f(9.0f, -14.6f);
    glEnd();



    glBegin(GL_TRIANGLES);
    glColor3ub(255,0,0);
    glVertex2f(9.0f, -14.6);
    glVertex2f(9.0f, -13.5f);
    glVertex2f(7.5f, -13.2f);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255,0,0);
    glVertex2f(14.0f, -14.6f);
    glVertex2f(14.0f, -13.5f);
    glVertex2f(15.5f, -13.2f);

    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(9.0f, -13.5f);
    glColor3ub(0,0,0);
    glVertex2f(10.0f, -13.5f);
    glVertex2f(9.5f, -12.5f);
    glEnd();

    glutSwapBuffers();
}
void handleKeypress(unsigned char key, int x, int y)
{
    switch(key)
    {
    case 'n':

        glutDisplayFunc(Scene);
        break;
    case 'd':

        glutDisplayFunc(Scene2);
        break;
    //switch (key)

    case 's'://stops
        speed = 0.0f;
        break;
    case 'r'://runs
        speed = 0.02f;
        break;

    }
    glutPostRedisplay();
}



void update1(int value)
{

    _moveA += speed;
    if(_moveA > 15)
    {
        _moveA = -15;
    }
    //Notify GLUT that the display has changed

//_moveA += 0.13;

    glutTimerFunc(20, update1, 0); //Notify GLUT to call update again in 25 milliseconds
    glutPostRedisplay();
}

/*void handleMouse(int button, int state, int x, int y)
{

    if (button == GLUT_LEFT_BUTTON)
    {
        speed += 0.05f;
    }


    else if (button == GLUT_RIGHT_BUTTON)
    {
        speed -= 0.05f;
    }
    glutPostRedisplay();
}*/
/*void handleKeypress1(unsigned char key, int x, int y)
{
   / switch (key)
    {
    case 's'://stops
        speed = 0.0f;
        break;
    case 'r'://runs
        speed = 0.02f;
        break;
        glutPostRedisplay();
    }
}*/

void update2(int value)
{
    _moveA += speed;

    if(_moveB <-24)
    {
        _moveB = +15;
    }
    //Notify GLUT that the display has changed

    _moveB -= 0.13;

    glutTimerFunc(20, update2, 0); //Notify GLUT to call update again in 25 milliseconds
    glutPostRedisplay();
}



int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);



    glutInitWindowSize(800, 800);
    glutCreateWindow("river");
    init();
//    glutSpecialFunc(SpecialInput);


    glutDisplayFunc(Scene);
    glutTimerFunc(20, update1, 0); //Add a timer
    glutTimerFunc(20, update2, 0); //Add a timer

    glutKeyboardFunc(handleKeypress);
//    glutKeyboardFunc(handleKeypress1);


//    glutMouseFunc(handleMouse);

    glutMainLoop();
    return 0;
}
