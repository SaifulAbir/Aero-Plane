#include<windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>
#include<math.h>
#define PI 3.1416
#include<mmsystem.h>

using namespace std;

GLfloat a=0,b=0,c=0,d=0,e=0, f=0, g=0, h=0, j=0, k=0, m=0, n=0;
void update(int value)
{
        a+=4.0;
        b-=10.0;
        c+=1.0;
        f+=4;
        g+=0.3;
        h-=4;
        j+=2;
        k+=4;
        d-=4;

        m+=8.0;
        n+=4.0;
        if(h<=-1300)
        {
            h=0;
            j=-10;
        }
        if(f>=1300)
        {
            f=-70;
            g=-20;
        }
        if(k>=1090)
        {
            k=-600;
            g=-20;
        }
        if(a>=1290)
        {
            a=-350;
            c=200;
        }
        if(b<=-280.0)
        {
            b=0.0;
        }
        glutPostRedisplay();
        glutTimerFunc(50,update,0);
}
GLvoid drawCircle(GLdouble xc, GLdouble yc, GLdouble radx, GLdouble rady )
{
        GLfloat i;
        glPointSize(3);
        glBegin(GL_POLYGON);
        for(i=0;i<=7;i+=.01)
            glVertex2f(xc+radx*cos(i),yc+rady*sin(i));
        glEnd();
}
void draw_airplane()
{
//body
        glColor3f(0.7f, 0.9f, 0.9f);
        glBegin(GL_POLYGON);
        glVertex2f(-655.0,-260.0);
        glVertex2f(-660.0,-250.0);
        glVertex2f(-420.0,-250.0);
        glVertex2f(-420.0,-314.0);
        glVertex2f(-565.0,-310.0);
        glVertex2f(-560.0,-307.0);
        glVertex2f(-580.0,-301.0);
        glVertex2f(-590.0,-296.0);
        glVertex2f(-600.0,-289.0);
        glVertex2f(-610.0,-282.0);
        glVertex2f(-620.0,-275.0);
        glVertex2f(-630.0,-267.0);
        glEnd();
//back while
        glColor3f(0.40,0.40,0.40);
        glBegin(GL_POLYGON);
        glVertex2f(-546.0,-310.0);
        glVertex2f(-540.0,-310.0);
        glVertex2f(-540.0,-318.0);
        glVertex2f(-546.0,-318.0);
        glEnd();
        glColor3f(0.2,0.2,0.2);
        drawCircle(-543,-320,6, 6);
        glColor3f(1.0,1.0,1.0);
        drawCircle(-543,-320,3, 3);
//front while
        glColor3f(0.40,0.40,0.40);
        glBegin(GL_POLYGON);
        glVertex2f(-436.0,-314.0);
        glVertex2f(-430.0,-314.0);
        glVertex2f(-430.0,-322.0);
        glVertex2f(-436.0,-322.0);
        glEnd();
        glColor3f(0.2,0.2,0.2);
        drawCircle(-433,-324,6, 6);
        glColor3f(1.0,1.0,1.0);
        drawCircle(-433,-324,3, 3);
//window
        glColor3f(1.0,1.0,1.0);
        glBegin(GL_POLYGON);
        glVertex2f(-600.0,-280.0);
        glVertex2f(-600.0,-270.0);
        glVertex2f(-590.0,-270.0);
        glVertex2f(-590.0,-280.0);
        glEnd();
        glColor3f(1.0,1.0,1.0);
        glBegin(GL_POLYGON);
        glVertex2f(-580.0,-280.0);
        glVertex2f(-580.0,-270.0);
        glVertex2f(-570.0,-270.0);
        glVertex2f(-570.0,-280.0);
        glEnd();
        glColor3f(1.0,1.0,1.0);
        glBegin(GL_POLYGON);
        glVertex2f(-560.0,-280.0);
        glVertex2f(-560.0,-270.0);
        glVertex2f(-550.0,-270.0);
        glVertex2f(-550.0,-280.0);
        glEnd();
        glColor3f(1.0,1.0,1.0);
        glBegin(GL_POLYGON);
        glVertex2f(-540.0,-280.0);
        glVertex2f(-540.0,-270.0);
        glVertex2f(-530.0,-270.0);
        glVertex2f(-530.0,-280.0);
        glEnd();
        glColor3f(1.0,1.0,1.0);
        glBegin(GL_POLYGON);
        glVertex2f(-520.0,-280.0);
        glVertex2f(-520.0,-270.0);
        glVertex2f(-510.0,-270.0);
        glVertex2f(-510.0,-280.0);
        glEnd();
        glColor3f(1.0,1.0,1.0);
        glBegin(GL_POLYGON);
        glVertex2f(-500.0,-280.0);
        glVertex2f(-500.0,-270.0);
        glVertex2f(-490.0,-270.0);
        glVertex2f(-490.0,-280.0);
        glEnd();
        glColor3f(1.0,1.0,1.0);
        glBegin(GL_POLYGON);
        glVertex2f(-480.0,-280.0);
        glVertex2f(-480.0,-270.0);
        glVertex2f(-470.0,-270.0);
        glVertex2f(-470.0,-280.0);
        glEnd();
        glColor3f(1.0,1.0,1.0);
        glBegin(GL_POLYGON);
        glVertex2f(-460.0,-280.0);
        glVertex2f(-460.0,-270.0);
        glVertex2f(-450.0,-270.0);
        glVertex2f(-450.0,-280.0);
        glEnd();
        glColor3f(1.0,1.0,1.0);
        glBegin(GL_POLYGON);
        glVertex2f(-440.0,-280.0);
        glVertex2f(-440.0,-270.0);
        glVertex2f(-430.0,-270.0);
        glVertex2f(-430.0,-280.0);
        glEnd();
//head upper side
        glColor3f(0.7f, 0.9f, 0.9f);
        glBegin(GL_POLYGON);
        glVertex2f(-420.50,-250.0);
        glVertex2f(-410.0,-250.20);
        glVertex2f(-400.0,-252.0);
        glVertex2f(-390.0,-254.0);
        glVertex2f(-380.0,-258.0);
        glVertex2f(-370.0,-265.0);
        glVertex2f(-365.0,-270.0);
        glVertex2f(-360.0,-281.0);
        glVertex2f(-420.50,-281.0);
        glEnd();
//head lower side
        glColor3f(0.7f, 0.9f, 0.9f);
        glBegin(GL_POLYGON);
        glVertex2f(-420.50,-281.0);
        glVertex2f(-360.0,-281.0);
        glVertex2f(-365.0,-292.0);
        glVertex2f(-370.0,-297.0);
        glVertex2f(-380.0,-304.0);
        glVertex2f(-390.0,-309.0);
        glVertex2f(-400.0,-313.0);
        glVertex2f(-410.0,-313.80);
        glVertex2f(-420.50,-314.0);
        glEnd();
//head window
        glColor3f(1.0,1.0,1.0);
        glBegin(GL_POLYGON);
        glVertex2f(-420.0,-280.0);
        glVertex2f(-420.0,-270.0);
        glVertex2f(-410.0,-270.0);
        glVertex2f(-410.0,-280.0);
        glEnd();
//back wings
        glColor3f(0.2f, 0.9f, 0.9f);
        glBegin(GL_POLYGON);
        glVertex2f(-640.0,-250.0);
        glVertex2f(-643.0,-245.0);
        glVertex2f(-646.0,-240.0);
        glVertex2f(-650.0,-225.0);
        glVertex2f(-640.0,-225.0);
        glVertex2f(-630.0,-230.0);
        glVertex2f(-620.0,-238.0);
        glVertex2f(-610.0,-243.0);
        glVertex2f(-600.0,-247.0);
        glVertex2f(-590.0,-250.0);
        glEnd();
//top wing
        glColor3f(0.2f, 0.9f, 0.9f);
        glBegin(GL_POLYGON);
        glVertex2f(-500.0,-250.0);
        glVertex2f(-515.0,-222.0);
        glVertex2f(-480.0,-222.0);
        glVertex2f(-453.0,-250.0);
        glEnd();
//bottom wing
        glColor3f(0.2f, 0.9f, 0.9f);
        glBegin(GL_POLYGON);
        glVertex2f(-445.0,-290.0);
        glVertex2f(-485.0,-335.0);
        glVertex2f(-520.0,-335.0);
        glVertex2f(-500.0,-290.0);
        glEnd();
        glFlush();
}
void leftcloud()
{
        glColor3f(0.902, 0.902, 0.980);
        drawCircle(-520,330,42, 30);
        drawCircle(-500,340,32, 40);
        drawCircle(-505,310,32, 40);
        drawCircle(-460,305,32, 40);
        drawCircle(-460,340,32, 40);
        drawCircle(-430,320,37, 30);

        glColor3f(0.902, 0.902, 0.980);
        drawCircle(-610,230,25, 20);
        drawCircle(-590,240,20, 25);
        drawCircle(-570,230,32, 20);
}
void midcloud()
{
        glColor3f(0.902, 0.902, 0.980);
        drawCircle(10,320,30, 40);
        drawCircle(-20,290,40, 35);
        drawCircle(30,280,25, 25);
        drawCircle(50,290,30, 20);
        drawCircle(50,320,65, 20);
}
void rightcloud()
{
        glColor3f(0.902, 0.902, 0.980);
        drawCircle(580,290,45, 30);
        drawCircle(550,330,40, 35);
        drawCircle(510,305,50, 38);
}
void draw_sun()
{
        glColor3f(1,0.6,0.1);
        drawCircle(-250,320,40, 40);
        glColor3f(1,0.7,0);
        drawCircle(-250,320,35, 35);
        glColor3f(1,0.8,0.4);
        drawCircle(-250,320,30, 30);
        glColor3f(1,0.9,0.3);
        drawCircle(-250,320,25, 25);
        glColor3f(1,1,0.2);
        drawCircle(-250,320,20, 20);
}
void draw_runway()
{
        glColor3f(1.0,1.0,1.0);
        glBegin(GL_POLYGON);
        glVertex2f(-680.0,-324.0);
        glVertex2f(-660.0,-310.0);
        glVertex2f(-460.0,-310.0);
        glVertex2f(-480.0,-324.0);
        glEnd();
        glColor3f(1.0,1.0,1.0);
        glBegin(GL_POLYGON);
        glVertex2f(-400.0,-324.0);
        glVertex2f(-380.0,-310.0);
        glVertex2f(-180.0,-310.0);
        glVertex2f(-200.0,-324.0);
        glEnd();
        glColor3f(1.0,1.0,1.0);
        glBegin(GL_POLYGON);
        glVertex2f(-120.0,-324.0);
        glVertex2f(-100.0,-310.0);
        glVertex2f(100.0,-310.0);
        glVertex2f(80.0,-324.0);
        glEnd();
        glColor3f(1.0,1.0,1.0);
        glBegin(GL_POLYGON);
        glVertex2f(160.0,-324.0);
        glVertex2f(180.0,-310.0);
        glVertex2f(380.0,-310.0);
        glVertex2f(360.0,-324.0);
        glEnd();
        glColor3f(1.0,1.0,1.0);
        glBegin(GL_POLYGON);
        glVertex2f(440.0,-324.0);
        glVertex2f(460.0,-310.0);
        glVertex2f(660.0,-310.0);
        glVertex2f(640.0,-324.0);
        glEnd();
        glColor3f(1.0,1.0,1.0);
        glBegin(GL_POLYGON);
        glVertex2f(720.0,-324.0);
        glVertex2f(740.0,-310.0);
        glVertex2f(940.0,-310.0);
        glVertex2f(920.0,-324.0);
        glEnd();
        glFlush();
}
void Draw()
{
//background
        glClear(GL_COLOR_BUFFER_BIT);
        glColor3f(0.196078 , 0.6, 0.8);
        glBegin(GL_POLYGON);
        glVertex2f(640, 384);
        glVertex2f(-640, 384);
        glVertex2f(-640, -384);
        glVertex2f(640, -384);
        glEnd();
//runway black part
        glColor3f(0.0,0.0,0.0);
        glBegin(GL_POLYGON);
        glVertex2f(-640.0,-360.0);
        glVertex2f(-640.0,-280.0);
        glVertex2f(640.0,-280.0);
        glVertex2f(640.0,-360.0);
        glEnd();
//top green
        glColor3f(0.10,0.80,0.30);
        glBegin(GL_POLYGON);
        glVertex2f(-640.0,-266.0);
        glVertex2f(-640.0,-280.0);
        glVertex2f(640.0,-280.0);
        glVertex2f(640.0,-266.0);
        glEnd();
//bottom green
        glColor3f(0.10,0.80,0.30);
        glBegin(GL_POLYGON);
        glVertex2f(-640.0,-384.0);
        glVertex2f(-640.0,-360.0);
        glVertex2f(640.0,-360.0);
        glVertex2f(640.0,-384.0);
        glEnd();
// call draw_sun function
        draw_sun();
//cloud left to right animated
        glPushMatrix();
        glTranslated(f,0.0,0.0);
        leftcloud();
        glPopMatrix();
//cloud left to right animated (x, y co-ordinate)
        glPushMatrix();
        glTranslated(k,g,0.0);
        midcloud();
        glPopMatrix();
//cloud right to left animated
        glPushMatrix();
        glTranslated(h,0.0,0.0);
        rightcloud();
        glPopMatrix();
//call draw_runway function
        glPushMatrix();
        glTranslated(b,0.0,0.0);
        draw_runway();
        glPopMatrix();
//call draw_airplane function
        glPushMatrix();
        glTranslated(a,c,0.0);
        draw_airplane();
        glPopMatrix();
        glFlush();
}
void Init()
{
    glClearColor(0, 0, 0, 0);
    glClear(GL_COLOR_BUFFER_BIT);
    glOrtho(-640, 640, -384, 384, -20, 20);
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1340, 768);
    glutInitWindowPosition(5, 5);
    glutCreateWindow("Air Plane Runway");
    Init();
    glutDisplayFunc(Draw);
    glutTimerFunc(100,update,0);
    glutMainLoop();
    //PlaySound("sound.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
    //PlaySound(TEXT("sound.wav"), NULL, SND_FILENAME);
    PlaySound(TEXT("sound.wav"), NULL, SND_FILENAME | SND_ASYNC);
    return 0;
}
