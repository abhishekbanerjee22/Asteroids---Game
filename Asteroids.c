#include <stdio.h>
#include <GL/glut.h>
//#include<SOIL/SOIL.h>
#include<stdlib.h>
#include<string.h>

int i,j,score=0;
char str[100];
GLfloat a,b,m,n,o,p;
//GLuint tex_2d,tex_2d1;

void keyboard(unsigned char key,int x,int y)
{   switch(key)
    {
        case 'd':a=a+9.0;glutPostRedisplay();
                break;
        case 'a': a=a-9.0;glutPostRedisplay();
                break;
    }
}
//creation of spaceship
void spaceship()
{
glBegin(GL_POLYGON);
    glColor3f(0.2,0.3,0.6);
    glVertex2d(100,0);
    glColor3f(0.2,1.0,0.4);
    glVertex2d(125,25);
    glColor3f(0.0,0.0,1.0);
    glVertex2d(150,25);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glColor3f(0.2,0.3,0.6);
    glVertex2d(150,25);
    glColor3f(0.2,1.0,0.4);
    glVertex2d(162.5,12.5);
    glColor3f(0.0,0.0,1.0);
    glVertex2d(175,25);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glColor3f(0.2,0.3,0.6);
    glVertex2d(225,0);
    glColor3f(0.2,1.0,0.4);
    glVertex2d(175,25);
    glColor3f(0.0,0.0,1.0);
    glVertex2d(200,25);
    glEnd();

    glColor3f(0.0,1.0,0.0);
    glBegin(GL_POLYGON);
    glColor3f(0.4,0.8,0.7);
    glVertex2d(150,50);
    glColor3f(0.433,0.223,0.445);
    glVertex2d(175,50);
    glColor3f(0.344,0.1223,0.988);
    glVertex2d(162.5,62.5);
    glEnd();

    glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glColor3f(0.2,0.3,0.6);
    glVertex2d(125,25);
    glColor3f(0.2,0.3,0.4);
    glVertex2d(125,37.5);
    glColor3f(0.3,0.3,0.2);
    glVertex2d(137.5,50);
    glColor3f(0.2,0.3,0.6);
    glVertex2d(187.5,50);
    glColor3f(0.7,0.5,0.87);
    glVertex2d(200,37.5);
    glColor3f(0.4,0.3,0.6);
    glVertex2d(200,25);
    glEnd();
    }
    //asteroids creation
void asteroid3()
{

    glBegin(GL_POLYGON);
    glColor3f(0.46,0.46,0.46);
    glVertex2d(700,700);
    glColor3f(0.46,0.46,0.4);
    glVertex2d(650,650);
    glColor3f(0.3,0.4,0.4);
    glVertex2d(700,600);
    glColor3f(0.2,0.3,0.2);
    glVertex2d(750,620);
    glColor3f(5,5,5);
    glVertex2d(770,640);
    glColor3f(5,5,5);
    glVertex2d(700,700);
    glEnd();

}
void asteroid2()
{
    glBegin(GL_POLYGON);
    glColor3f(0.46,0.46,0.46);
    glVertex2d(300,700);
    glColor3f(0.46,0.46,0.4);
    glVertex2d(250,650);
    glColor3f(0.3,0.4,0.4);
    glVertex2d(300,600);
    glColor3f(0.2,0.3,0.2);
    glVertex2d(350,620);
    glColor3f(5,5,5);
    glVertex2d(370,640);
    glColor3f(5,5,5);
    glVertex2d(300,700);
    glEnd();

}
void asteroid1()
{
    glColor3f(0.46,0.46,0.46);
    glVertex2d(900,700);
    glColor3f(0.46,0.46,0.4);
    glVertex2d(850,650);
    glColor3f(0.3,0.4,0.4);
    glVertex2d(900,600);
    glColor3f(0.2,0.3,0.2);
    glVertex2d(950,620);
    glColor3f(5,5,5);
    glVertex2d(970,640);
    glColor3f(5,5,5);
    glVertex2d(900,700);
    glEnd();

}
void asteroid()
{
    glBegin(GL_POLYGON);
    glColor3f(0.46,0.46,0.46);
    glVertex2d(500,700);
    glColor3f(0.46,0.46,0.4);
    glVertex2d(450,650);
    glColor3f(0.3,0.4,0.4);
    glVertex2d(500,600);
    glColor3f(0.2,0.3,0.2);
    glVertex2d(550,620);
    glColor3f(5,5,5);
    glVertex2d(570,640);
    glColor3f(5,5,5);
    glVertex2d(500,700);
    glEnd();

}
//moving the asteroids..
void movea()
{
    glPushMatrix();
    glTranslatef(0.0,m,0.0);
    asteroid();
    glPopMatrix();
    glFlush();

   for(i=0;i<10;i++)
    {   m=m-2.0;
        glutPostRedisplay();
    }
}
void moveb()
{   glPushMatrix();
    glTranslatef(0.0,n,0.0);
    glBegin(GL_POLYGON);
    asteroid1();
    glPopMatrix();
    glFlush();
    for(i=0;i<20;i++)
    {   n=n-2.5;
        glutPostRedisplay();
    }
}
void movec()
{   glPushMatrix();
    glTranslatef(0.0,o,0.0);
    asteroid2();
    glPopMatrix();
    glFlush();
    for(i=0;i<25;i++)
    {   o=o-3.0;
        glutPostRedisplay();
    }
}
void moved()
{	glPushMatrix();
    glTranslatef(0.0,p,0.0);
    asteroid3();
    glPopMatrix();
    glFlush();
    for(i=0;i<10;i++)
    {   p=p-2.5;
        glutPostRedisplay();
    }
}
void display()
{   glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0.0, 0.0, 0.0, 0.1);
   // glEnable(GL_TEXTURE_2D);

	/*imagemorphing*/
	//glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	/*tex_2d = SOIL_load_OGL_texture
		 (	 "bbc.png",
			 SOIL_LOAD_AUTO,
			 SOIL_CREATE_NEW_ID,
			 SOIL_FLAG_COMPRESS_TO_DXT
		 );
	glBindTexture(GL_TEXTURE_2D, tex_2d);
	glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);
	glBegin(GL_POLYGON);
		glTexCoord2f(1.0, 0.0);
		glVertex2f(1200,700);
		glTexCoord2f(0.0, 0.0);
		glVertex2f(0,700);
		glTexCoord2f(0.0, 1.0);
		glVertex2f(0,0);
		glTexCoord2f(1.0, 1.0);
		glVertex2f(1200,0);

    glEnd();
    glDisable(GL_TEXTURE_2D);*/

//Spaceship movement
    glPushMatrix();
    glTranslatef(a,b,0.0);
    spaceship();
    glPopMatrix();
    glFlush();
//asteroid movement
    movea();
	moveb();
	movec();
	moved();

	//calling the game finished screen function
	while(a>=1000)
        screen4();

        //calling the game over screen function
if(a>=320.00&& a<=360&& m<=-560.0&&m>=-640.0 || a>=90.00 && a<=130.00 && n<=-560.0 && n>=-640.0
 || a>=660.00 && a<=760.00 && o<=-600.0 && o>=-640.0 ||a>=520.00 && a<=540.00 && p<=-600.0 && p>=-640.0)
 {  screen3();
 }
//code for continuous fall of asteroids
   if(m==-720.0 || n==-720.0 || o==-720.0 || p==-720.0)
    {
        m=-40.0;
        n=-40.0;
        o=-40.0;
        p=-40.0;
        score+=100;
        movea();
        moveb();
        movec();
        moved();
    }
    printf("%lf\t%lf\n",a,n);

}
//Function for game complete screen
void screen4()
{   glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0.0, 0.0, 0.0, 0.1);
   /* glEnable(GL_TEXTURE_2D);

	//imagemorphing
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	tex_2d1 = SOIL_load_OGL_texture
		 (	 "bbc.png",
			 SOIL_LOAD_AUTO,
			 SOIL_CREATE_NEW_ID,
			 SOIL_FLAG_COMPRESS_TO_DXT
		 );
	glBindTexture(GL_TEXTURE_2D, tex_2d1);
	glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);
	glBegin(GL_POLYGON);
		glTexCoord2f(1.0, 0.0);
		glVertex2f(1200,700);
		glTexCoord2f(0.0, 0.0);
		glVertex2f(0,700);
		glTexCoord2f(0.0, 1.0);
		glVertex2f(0,0);
		glTexCoord2f(1.0, 1.0);
		glVertex2f(1200,0);

    glEnd();
    glDisable(GL_TEXTURE_2D);*/

    char ch3[100]="CONGRATS!!YOU HAVE COMPLETED THE GAME";
    glColor3f(1.0,1.0,1.0);
    glRasterPos2f(300,400);
    for(j=0;j<=strlen(ch3);j++)
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18 ,ch3[j]);
    glFlush();
}
//game over screen

void screen3()
{

    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);
    glColor3f(0.46,0.46,0.46);
    glVertex2f(1200,700);
    glColor3f(0.7,1.0,0.0);
    glVertex2f(0,700);
    glColor3f(0.0,0.0,1.0);
    glVertex2f(0,0);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(1200,0);

    glEnd();

    char ch1[30]="YOUR SCORE";
    glColor3f(0.0,0.0,0.0);
    glRasterPos2f(500,400);
    for(j=0;j<=strlen(ch1);j++)
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,ch1[j]);

    char ch[30]="GAME OVER";
    glColor3f(0.0,0.0,0.0);
    glRasterPos2f(500,500);
    for(j=0;j<=strlen(ch);j++)
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,ch[j]);
    sprintf(str,"%d",score);


    glColor3f(0.0,0.0,0.0);
    glRasterPos2f(500,350);
    for(j=0;j<=strlen(str);j++)
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str[j]);
    glFlush();
    while(1)
    {
        screen3();
    }
}

void myinit()
{   glClearColor(1.0,1.0,1.0,0.0);
    glColor3f(0.0f,0.0f,0.0f);
    glPointSize(4.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0,1200.0,0.0,700.0);
}
int main(int argc,char **argv)
{   glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(1200,700);
    glutInitWindowPosition(0,0);
    glutCreateWindow("Asteroids Game");
    glutDisplayFunc(display);
    glEnable(GL_TEXTURE_2D);
    glutKeyboardFunc(keyboard);
    myinit();
    glutMainLoop();
    return 0;
}
