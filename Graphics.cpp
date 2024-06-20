#include<GL/glut.h>
#include <iostream>
#include <string>
#include <cmath>

void drawCircle(int x, int y,int radius,float red,float green,float blue,int startagl,int endagl);
void drawCircle1(int x, int y,int radius,float red,float green,float blue,int startagl,int endagl);

void rect(int x, int y, int width,int height);
void drawline(int x, int y, int fx,int fy);
void ball(int value);
void rect2(int x,int y, int d,int h);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void display(void){
//	glMatrixMode(GL_PROJECTION_MATRIX);
	glLoadIdentity();
	glClearColor(0.5,0,0.7,0.7);
	glClear(GL_COLOR_BUFFER_BIT);
    gluOrtho2D(0,1350,0,735);

// drawing stadium

glBegin(GL_QUADS);
glColor3f(0.2,1,0);
glVertex2i(700,100);
glVertex2i(700,450);
glVertex2i(1300,450);
glVertex2i(1300,100);
glEnd();



rect2(700,100,40,350);
rect2(780,100,40,350);
rect2(860,100,40,350);
rect2(940,100,40,350);
rect2(1020,100,40,350);
rect2(1100,100,40,350);
rect2(1180,100,40,350);
rect2(1260,100,40,350);


rect(700,100,600,350);

drawline(1000,100,1000,450);
rect(700,200,100,150);
rect(1200,200,100,150);
rect(700,238,50,75);
rect(1250,237,50,75);
drawCircle(750,275,10,1,1,1,0,360);
drawCircle(1000,275,10,1,1,1,0,360);
drawCircle(1250,275,10,1,1,1,0,360);
drawCircle1(1000,275,50,1,1,1,0,360);
drawCircle1(800,275,40,1,1,1,270,450);
drawCircle1(1200,275,40,1,1,1,90,270);



// Drawing the Asbalt

glBegin(GL_QUADS);
glColor3f(0,0,0);
glVertex2i(350,0);
glVertex2i(575,0);
glVertex2i(575,735);
glVertex2i(350,735);
glEnd();
drawline(462,25,462,95);
drawline(462,165,462,235);
//drawline(462,585,462,650);
drawline(462,305,462,375);
drawline(462,445,462,510);
drawCircle(462,588,35,1,1,1,0,360);

glBegin(GL_QUADS);
glColor3f(0,0,0);
glVertex2i(0,700);
glVertex2i(350,700);
glVertex2i(350,475);
glVertex2i(0,475);
glEnd();
drawline(0,588,70,588);
drawline(140,588,210,588);
drawline(280,588,350,588);

// drawing the tree
drawCircle(1200,550,30,0,1,0,0,180);
glBegin(GL_LINES);
glColor3f(1,0.7,0.3);
glVertex2i(1200,500);
glVertex2i(1200,550);
glEnd();

glBegin(GL_LINES);
glColor3f(1,0.7,0.3);
glVertex2i(1200,525);
glVertex2i(1220,540);
glEnd();

drawCircle(1100,550,30,0,1,0,0,180);
glBegin(GL_LINES);
glColor3f(1,0.7,0.3);
glVertex2i(1100,500);
glVertex2i(1100,550);
glEnd();

// draw traffic sign

		glBegin(GL_POLYGON);
		glColor3f(1,0,0);
		glVertex2i(70,202);
		glVertex2i(97,178);
		glVertex2i(408,178);
		glVertex2i(430,202);
		glVertex2i(271,470);
		glVertex2i(230,470);
		glEnd();
		
	//	triangle that is in side triangle
		glBegin(GL_TRIANGLES);
		glColor3f(1,1,1);
		glVertex2i(105,205);
		glVertex2i(395,205);
		glVertex2i(250,445);
		glEnd();
//
	glBegin(GL_QUADS);
		  glColor3f(0,0,0);
		  glVertex2i(220,245);
		  glVertex2i(280,245); 
		  glVertex2i(280,365);
		  glVertex2i(220,367); 
		  glEnd();
	// rectangle of in side 	
		glBegin(GL_QUADS);
		  glColor3f(0,0,0);
		  glVertex2i(230,0);
		  glVertex2i(270,0); 
		  glVertex2i(270,178);
		  glVertex2i(230,178); 
		  glEnd();
	// drawing the side curve of traffic sign	
		drawCircle(89,193,20,1,0,0,135,315);
		drawCircle(418,190,18,1,0,0,225,405);
		drawCircle(250,465,22,1,0,0,0,180);
	// drawing the curve for in side traffic sign	
		drawCircle(250,245,30,0,0,0,180,360);
		drawCircle(250,365,30,0,0,0,0,180);	
// drawing the flag 
    // rectangle of flag 
	glBegin(GL_QUADS);
    glColor3f(1,0,0);
    glVertex2i(650,500);
    glVertex2i(950,500);
    glVertex2i(950,700);
    glVertex2i(650,700);
    glEnd();
    
    // triangle of flag
    glBegin(GL_TRIANGLES);
    glColor3f(1,1,0);
    glVertex2i(650,700);
    glVertex2i(650,500);
    glVertex2i(760,600);
    glEnd();
   // drawing the flag for aseta
    glLineWidth(20.0);
    glBegin(GL_TRIANGLES);
    glColor3f(1,1,0);
    glVertex2i(865,650);
    glVertex2i(805,565);
    glVertex2i(865,590);
    glEnd();
    
    glBegin(GL_TRIANGLES);
    glColor3f(1,1,0);
    glVertex2i(865,615);
    glVertex2i(805,635);
    glVertex2i(865,550);
    glEnd();
    
     glBegin(GL_TRIANGLES);
     glColor3f(1,1,0);
     glVertex2i(865,590);
     glVertex2i(900,600);
     glVertex2i(865,615);
     glEnd();
   
   
   glBegin(GL_LINES);
   glColor3f(0,1,0);
   glVertex2i(650,700);
   glVertex2i(650,250);
   glEnd();
   // draw botton rectangle for flag
    glBegin(GL_QUADS);
    glColor3f(1,0,1);
    glVertex2i(610,250);
    glVertex2i(690,250);
    glVertex2i(690,270);
    glVertex2i(610,270);
    glEnd();
    // drawing circle for top of flag
    drawCircle(650,710,15,0,1,0,0,360);
    
	glRasterPos2f(40,400);
	for (int r=0;r<13;r++){
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,"TRAFFIC SIGN "[r]);
	}
//glEnd();
	glRasterPos2f(600,60);
	for (int r=0;r<31;r++){
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,"DEVELOPED BY:- TEKLIYE TAMIRU "[r]);
	}
	glRasterPos2f(1000,640);
	for (int r=0;r<16;r++){
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,"NATIONAL FLAG OF"[r]);
	}
	glRasterPos2f(1000,600);
	for (int r=0;r<13;r++){
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,"TIGRAY REGION"[r]);
	}

glFlush();
}
// function that for drawing circle 
void drawCircle(int x, int y,int radius,float red,float green,float blue,int startagl,int endagl){
float s;
	glBegin(GL_POLYGON);
	glColor3f(red,green,blue);
	for (int i=startagl;i<endagl;i++){
	     s=i*3.142/180;
    glVertex2f(x+radius*cos(s),y+radius*sin(s));	
}
glEnd();
}
void drawCircle1(int x, int y,int radius,float red,float green,float blue,int startagl,int endagl){
float s;
	glBegin(GL_LINE_LOOP);
	glLineWidth(7.0);
	glColor3f(red,green,blue);
	for (int i=startagl;i<endagl;i++){
	     s=i*3.142/180;
    glVertex2f(x+radius*cos(s),y+radius*sin(s));	
}
glEnd();	
}
// drawing rectangle
void rect(int x, int y, int width,int height){
	glBegin(GL_LINE_LOOP);
	glColor3f(1,1,1);
	glVertex2i(x,y);
	glVertex2i(x+width,y);
	glVertex2i(x+width,y+height);
	glVertex2i(x,y+height);
	glEnd();
}
void drawline(int x, int y, int fx,int fy){
	glLineWidth(80.0);
	glBegin(GL_LINES);
	
	glColor3f(1,1,1);
	glVertex2i(x,y);
	glVertex2i(fx,fy);
	glEnd();
}
// function that for display yellow light after display of green 
void yel(int value){
	display();
	drawCircle(250,295,20,1,1,0,0,360);
	glFlush();
}
 // function for display the color for traffic sign
void timer(int value){
	static int count=0;  
	switch(count){		
	case 0:
	display();
	drawCircle(250,355,20,1,0,0,0,360);
	glFlush();
	break;
	case 1:
	display();
	drawCircle(250,295,20,1,1,0,0,360);
	glFlush();
	break;
	case 2:
         display();
         drawCircle(250,245,20,0,1,0,0,360);
         glFlush();
        glutTimerFunc(550,yel,0);
break;	
  }
count =(count + 1)%3;
 glutTimerFunc(1000,timer,0);
 //glutTimerFunc(0,ball,0);
}
void ball(int value){
	static int count2=0;
	
	switch(count2){
		
	case 0:
	display();
	drawCircle(1000,275,15,1,0.7,0.3,0,360);
	glFlush();
	break;
	case 1:
	display();
	drawCircle(1200,200,15,1,0.7,0.3,0,360);
	glFlush();
	break;
	case 2:
         display();
         drawCircle(1200,275,15,1,0.7,0.3,0,360);
         glFlush();
break;
	case 3:
	display();
	drawCircle(1100,400,15,1,0.7,0.3,0,360);
	glFlush();
	break;
	case 4:
	display();
	drawCircle(900,340,15,1,0.7,0.3,0,360);
	glFlush();
	break;
	case 5:
         display();
         drawCircle(750,250,15,1,0.7,0.3,0,360);
         glFlush();
break;	
	case 6:
	display();
	drawCircle(950,150,15,1,0.7,0.3,0,360);
	glFlush();
	break;
	case 7:
	display();
	drawCircle(900,400,15,1,0.7,0.3,0,360);
	glFlush();
	break;
	case 8:
         display();
         drawCircle(1250,150,15,1,0.7,0.3,0,360);
         glFlush();
break;		
  }
count2 =(count2 + 1)%9;
 glutTimerFunc(5000,ball,0);
}
void rect2(int x,int y, int d,int h){
	glBegin(GL_QUADS);
	glColor3f(0,0.9,0.1);
	glVertex2i(x,y);
	glVertex2i(x+d,y);
	glVertex2i(x+d,y+h);
	glVertex2i(x,y+h);	
	glEnd();
}
int main(int argc, char** argv) {
	glutInit(&argc,argv);
	glutInitWindowSize(1350,735);
	glutInitWindowPosition(1,1);

	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
		glutCreateWindow("Traffic Signs");
	//glMatrixMode(GLUT_RGB | GLUT_SINGLE);	
	glutDisplayFunc(display);
	glutTimerFunc(0,timer,0);
	glutTimerFunc(1000,ball,0);
	
		
	glutMainLoop();
	return 0;
};

