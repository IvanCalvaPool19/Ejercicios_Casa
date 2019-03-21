/*Calva Lorenzo Iv�n Eduardo
Pr�ctica 6
Visual Studio 2017
Programa que muestra un Sistema Solar, el sol asi como los planetas giran sobre su propio eje*/
#include "Main.h"


// Variables used to calculate frames per second: (Windows)
DWORD dwFrames = 0;
DWORD dwCurrentTime = 0;
DWORD dwLastUpdateTime = 0;
DWORD dwElapsedTime = 0;


//Variables used to create movement

float transZ = -5.0f;
float transX = 0.0f;
float angleX = 0.0f;
float angleY = 0.0f;
int screenW = 0.0;
int screenH = 0.0;

int sol=0;
int mercurio = 0;
int venus = 0;
int tierra = 0;
int luna = 1;
int marte = 0;
int jupiter = 0;
int saturno = 0;
int urano = 0;
int neptuno = 0;
float an = 0;

float camaraZ = 0.0;
float camaraX = 0.0;

GLfloat SunDiffuse[]= { 1.0f, 1.0f, 1.0f, 1.0f };			// Diffuse Light Values
GLfloat SunSpecular[] = { 1.0, 1.0, 1.0, 1.0 };				// Specular Light Values
GLfloat SunPosition[]= { 0.0f, 0.0f, 0.0f, 1.0f };			// Light Position

GLfloat EarthDiffuse[]= { 0.2f, 0.2f, 1.0f, 1.0f };			// Tierra
GLfloat EarthSpecular[] = { 0.8, 0.8, 0.8, 1.0 };
GLfloat EarthShininess[] = { 50.0 };

GLfloat MoonDiffuse[]= { 0.8f, 0.8f, 0.8f, 1.0f };			// Luna
GLfloat MoonSpecular[] = { 1.0, 1.0, 1.0, 1.0 };
GLfloat MoonShininess[] = { 50.0 };

GLfloat MarsDiffuse[]= { 0.8f, 0.4f, 0.1f, 1.0f };			// Marte
GLfloat MarsSpecular[] = { 1.0, 0.5, 0.0, 1.0 };
GLfloat MarsShininess[] = { 50.0 };

void InitGL ( GLvoid )     // Inicializamos parametros
{
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);				// Negro de fondo

	glClearDepth(1.0f);									// Configuramos Depth Buffer
	glEnable(GL_DEPTH_TEST);							// Habilitamos Depth Testing
	glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
	
	
}

void display ( void )   // Creamos la funcion donde se dibuja
{
	glClear (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();

	glTranslatef(camaraX,0.0,-5.0+camaraZ);			//camara

	glPushMatrix();
		
	glRotatef(sol, 0, 1, 0);	//El Sol gira sobre su eje
	glColor3f( 1.0,1.0,0.0 );	//Sol amarillo
	glutSolidSphere(2 ,50 ,50);  //Draw Sun (radio,H,V);

	//Mercurio
	glPushMatrix();
	glTranslatef(3, 0, 0);
	glRotatef(mercurio, 0.0, 1.0, 0.0);
	glColor3f(1.0, 0.5, 0.0);
	glutSolidSphere(0.1, 50, 50);
	glPopMatrix();

	//Venus
	glPushMatrix();
	glTranslatef(6, 0, 0);
	glRotatef(venus, 0.0, 1.0, 0.0);
	glColor3f(0.9, 0.8, 0.5);
	glutSolidSphere(0.15, 50, 50);
	glPopMatrix();

	//Tierra
	glPushMatrix();
	glTranslatef(8, 0, 0);
	glRotatef(tierra, 0.0, 1.0, 0.0);
	glColor3f(0.0, 0.8, 0.5);
	glutSolidSphere(0.22, 50, 50);
	glPushMatrix();
	glTranslatef(0.4, 0, 0);
	glRotatef(luna, 1.0, 1.0, 1.0);
	glColor3f(1.0, 1.0, 1.0);
	glutSolidSphere(0.08, 50, 50);
	glPopMatrix();
	glPopMatrix();

	//Marte
	glPushMatrix();
	glTranslatef(11, 0, 0);
	glRotatef(marte, 0.0, 1.0, 0.0);
	glColor3f(1.0, 0.0, 0.0);
	glutSolidSphere(0.15, 50, 50);
	glPopMatrix();

	//Jupiter
	glPushMatrix();
	glTranslatef(14, 0, 0);
	glRotatef(jupiter, 0.0, 1.0, 0.0);
	glColor3f(1.0, 0.8, 0.8);
	glutSolidSphere(0.9, 50, 50);
	glPopMatrix();

	//Saturno
	glPushMatrix();
	glTranslatef(17, 0, 0);
	glRotatef(saturno, 0.0, 1.0, 0.0);
	glColor3f(0.7, 0.8, 0.2);
	glutSolidSphere(0.45, 50, 50);
	glColor3f(0.7, 0.8, 1);
	glRotatef(an, 0, 0, 0);
	glutSolidTorus(0.2, 0.9, 2, 50);
	glPushMatrix();
	glTranslatef(0.9, 0, 1);
	glRotatef(luna, 0.5, 1.0, 1.0);
	glColor3f(1.0, 1.0, 1.0);
	glutSolidSphere(0.05, 50, 50);
	glTranslatef(-0.3, 1, 1);
	glRotatef(luna, 0.5, 1.0, 1.0);
	glColor3f(1.0, 1.0, 1.0);
	glutSolidSphere(0.05, 50, 50);

	glPopMatrix();
	glPopMatrix();

	//Urano
	glPushMatrix();
	glTranslatef(20, 0, 0);
	glRotatef(urano, 0.0, 1.0, 0.0);
	glColor3f(0.7, 0.8, 1);
	glutSolidSphere(0.3, 50, 50);
	glPopMatrix();

	//Neptuno
	glPushMatrix();
	glTranslatef(21.5, 0, 0);
	glRotatef(neptuno, 0.0, 1.0, 0.0);
	glColor3f(0.3, 0.6, 1);
	glutSolidSphere(0.36, 50, 50);
	glPopMatrix();

	glPopMatrix();


	glutSwapBuffers ( );

}


void animacion()
{
	// Calculate the number of frames per one second:
	//dwFrames++;
	dwCurrentTime = GetTickCount(); // Even better to use timeGetTime()
	dwElapsedTime = dwCurrentTime - dwLastUpdateTime;

	if(dwElapsedTime >= 30)
	{
		sol = (sol - 5) % 360;

		dwLastUpdateTime = dwCurrentTime;
	}

	glutPostRedisplay();
}

void reshape ( int width , int height )   // Creamos funcion Reshape
{
  if (height==0)										// Prevenir division entre cero
	{
		height=1;
	}

	glViewport(0,0,width,height);	

	glMatrixMode(GL_PROJECTION);						// Seleccionamos Projection Matrix
	glLoadIdentity();

	// Tipo de Vista
	
	glFrustum (-0.1, 0.1,-0.1, 0.1, 0.1, 50.0);

	glMatrixMode(GL_MODELVIEW);							// Seleccionamos Modelview Matrix
	//glLoadIdentity();
}

void keyboard ( unsigned char key, int x, int y )  // Create Keyboard Function
{
	switch ( key ) {
		case 'w':   //Movimientos de camara
		case 'W':
			camaraZ +=0.5f;
			break;
		case 's':
		case 'S':
			camaraZ -=0.5f;
			break;
		case 'a':
		case 'A':
			camaraX -= 0.5f;
			break;
		case 'd':
		case 'D':
			camaraX += 0.5f;
			break;

		case 'i':		//Movimientos de Luz
		case 'I':
			
			break;
		case 'k':
		case 'K':
			
			break;

		case 'l':   //Activamos/desactivamos luz
		case 'L':
			break;
		case 27:        // Cuando Esc es presionado...
			exit ( 0 );   // Salimos del programa
			break;        
		default:        // Cualquier otra
			break;
  }
	glutPostRedisplay();
}

void arrow_keys(int a_keys, int x, int y)  // Funcion para manejo de teclas especiales (arrow keys)
{
	switch (a_keys) {
	case GLUT_KEY_UP:		// Presionamos tecla ARRIBA...
		angleX += 2.0f;
		break;
	case GLUT_KEY_DOWN:		// Presionamos tecla ABAJO...
		angleX -= 2.0f;
		break;
	case GLUT_KEY_LEFT:
		angleY += 2.0f;
		break;
	case GLUT_KEY_RIGHT:
		angleY -= 2.0f;
		break;
	default:
		break;
	}
	glutPostRedisplay();
}



int main ( int argc, char** argv )   // Main Function
{
  glutInit            (&argc, argv); // Inicializamos OpenGL
  glutInitDisplayMode (GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); // Display Mode (Clores RGB y alpha | Buffer Doble )
  glutInitWindowSize  (500, 500);	// Tama�o de la Ventana
  glutInitWindowPosition (20, 60);	//Posicion de la Ventana
  glutCreateWindow    ("Practica 6"); // Nombre de la Ventana
  InitGL ();						// Parametros iniciales de la aplicacion
  glutDisplayFunc     ( display );  //Indicamos a Glut funci�n de dibujo
  glutReshapeFunc     ( reshape );	//Indicamos a Glut funci�n en caso de cambio de tamano
  glutKeyboardFunc    ( keyboard );	//Indicamos a Glut funci�n de manejo de teclado
  glutSpecialFunc     ( arrow_keys );	//Otras
  glutIdleFunc		  ( animacion );
  glutMainLoop        ( );          // 

  return 0;
}