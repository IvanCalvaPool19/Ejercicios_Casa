/* Calva Lorenzo Iv�n Eduardo
Pr�ctica 4 Casa
VS Versi�n 2017
Este programa dibuja cubos para formar un mu�eco, utilizando teclas especiales para observar desde distintos angulos 3D
y proporciones para que sean cubos de distientos tama�os*/
#include "Main.h"

float transZ = -5.0f;
float transY = -5.0f;
float transX = -5.0f;
int screenW = 0.0;
int screenH = 0.0;
float angY = 0.0f;
float angX = 0.0f;


void InitGL(void)     // Inicializamos parametros
{

	//glShadeModel(GL_SMOOTH);							// Habilitamos Smooth Shading
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);				// Negro de fondo
	glClearDepth(1.0f);									// Configuramos Depth Buffer
	glEnable(GL_DEPTH_TEST);							// Habilitamos Depth Testing
	//glEnable(GL_LIGHTING);
	glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar
	//glEnable ( GL_COLOR_MATERIAL );
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
}

void prisma(void)
{
	GLfloat vertice[8][3] = {
				{0.5 ,-0.5, 0.5},    //Coordenadas V�rtice 0 V0
				{-0.5 ,-0.5, 0.5},    //Coordenadas V�rtice 1 V1
				{-0.5 ,-0.5, -0.5},    //Coordenadas V�rtice 2 V2
				{0.5 ,-0.5, -0.5},    //Coordenadas V�rtice 3 V3
				{0.5 ,0.5, 0.5},    //Coordenadas V�rtice 4 V4
				{0.5 ,0.5, -0.5},    //Coordenadas V�rtice 5 V5
				{-0.5 ,0.5, -0.5},    //Coordenadas V�rtice 6 V6
				{-0.5 ,0.5, 0.5},    //Coordenadas V�rtice 7 V7
	};

	glBegin(GL_POLYGON);	//Front
	
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom
	
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}

void display(void)   // Creamos la funcion donde se dibuja
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// Limiamos pantalla y Depth Buffer
	//glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	glTranslatef(transX, transY, transZ);
	glRotatef(angY, 0, 1, 0);
	glRotatef(angX, 1, 0, 0);
	//Poner C�digo Aqu�.
	glColor3f(0.0f, 0.0f, 1.0f);
	glScalef(10, 10, 10);
	prisma();
	glColor3f(1.0f, 0.2f, 0.2f);
	glScalef(0.3,0.3,0.3);
	glTranslatef(0.0f, 2.0f, 0.0f);
	prisma();
	glColor3f(1.0f, 1.0f, 1.0f);
	glScalef(1.5, 1.5, 1.5);
	glTranslatef(0.0f, 0.5f, 0.0f);
	prisma();
	//Brazos
	glColor3f(0.0f, 1.0f, 0.0f);
	glScalef(0.5, 0.5, 0.5);
	glTranslatef(2.7f, -2.0f, 0.0f);
	prisma();
	glTranslatef(-5.35f, 0.0f, 0.0f);
	prisma();
	glColor3f(1.0f, 1.0f, 0.0f);
	glScalef(1.5, 1, 1);
	glTranslatef(-0.8f, 0.0f, 0.0f);
	prisma();
	glTranslatef(5.2f, 0.0f, 0.0f);
	prisma();
	glColor3f(1.0f, 0.0f, 0.0f);
	glScalef(1.2, 1, 1);
	glTranslatef(0.9f, 0.0f, 0.0f);
	prisma();
	glTranslatef(-6.15f, 0.0f, 0.0f);
	prisma();
	glColor3f(1.0f, 1.0f, 1.0f);
	glScalef(0.5, 1, 1);
	glTranslatef(-1.5f, 0.0f, 0.0f);
	prisma();
	glTranslatef(15.3f, 0.0f, 0.0f);
	prisma();
	//Piernas
	glColor3f(1.0f, 0.0f, 0.0f);
	glScalef(2, 2, 1);
	glTranslatef(-4.55f, -2.45f, 0.0f);
	prisma();
	glTranslatef(1.44f, 0.0f, 0.0f);
	prisma();
	glColor3f(0.0f, 1.0f, 0.0f);
	glScalef(1, 0.5, 1);
	glTranslatef(0.0f, -1.5f, 0.0f);
	prisma();
	glTranslatef(-1.44f, 0.0f, 0.0f);
	prisma();
	glColor3f(0.0f, 0.0f, 1.0f);
	glScalef(1, 2, 1);
	glTranslatef(0.0f, -0.75f, 0.0f);
	prisma();
	glTranslatef(1.44, 0.0f, 0.0f);
	prisma();
	glColor3f(0.1f, 0.1f, 0.0f);
	glScalef(1.5, 0.5, 1);
	glTranslatef(0.17f, -1.5f, 0.0f);
	prisma();
	glTranslatef(-1.28f, 0.0f, 0.0f);
	prisma();



	glutSwapBuffers();
	// Swap The Buffers
}

void reshape(int width, int height)   // Creamos funcion Reshape
{
	if (height == 0)										// Prevenir division entre cero
	{
		height = 1;
	}

	glViewport(0, 0, width, height);

	glMatrixMode(GL_PROJECTION);						// Seleccionamos Projection Matrix
	glLoadIdentity();

	// Tipo de Vista
	//glOrtho(-5,5,-5,5,0.2,20);	
	glFrustum(-0.1, 0.1, -0.1, 0.1, 0.1, 50.0);

	glMatrixMode(GL_MODELVIEW);							// Seleccionamos Modelview Matrix
}

void keyboard(unsigned char key, int x, int y)  // Create Keyboard Function
{
	switch (key) {
	case 'w':
	case 'W':
		transZ += 0.2f;
		break;
	case 's':
	case 'S':
		transZ -= 0.2f;
		break;
	case 'a':
	case 'A':
		transX -= 0.2f;

		break;
	case 'd':
	case 'D':
		transX += 0.2f;

		break;
	case 'q':
	case 'Q':
		transY += 0.2f;

		break;
	case 'e':
	case 'E':
		transY -= 0.2f;

		break;

	case 27:        // Cuando Esc es presionado...
		exit(0);   // Salimos del programa
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
		angX += 1.5f;
		break;
	case GLUT_KEY_DOWN:		// Presionamos tecla ABAJO...
		angX -= 1.5f;
		break;
	case GLUT_KEY_LEFT:
		angY += 1.5f;
		break;
	case GLUT_KEY_RIGHT:
		angY -= 1.5f;
		break;
	default:
		break;
	}
	glutPostRedisplay();
}


int main(int argc, char** argv)   // Main Function
{
	glutInit(&argc, argv); // Inicializamos OpenGL
	//glutInitDisplayMode (GLUT_RGBA | GLUT_SINGLE | GLUT_DEPTH); // Display Mode (Clores RGB y alpha | Buffer Sencillo )
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); // Display Mode (Clores RGB y alpha | Buffer Doble )
	screenW = glutGet(GLUT_SCREEN_WIDTH);
	screenH = glutGet(GLUT_SCREEN_HEIGHT);
	glutInitWindowSize(500, 500);	// Tama�o de la Ventana
	glutInitWindowPosition(0, 0);	//Posicion de la Ventana
	glutCreateWindow("Practica 4"); // Nombre de la Ventana
	printf("Resolution H: %i \n", screenW);
	printf("Resolution V: %i \n", screenH);
	InitGL();						// Parametros iniciales de la aplicacion
	glutDisplayFunc(display);  //Indicamos a Glut funci�n de dibujo
	glutReshapeFunc(reshape);	//Indicamos a Glut funci�n en caso de cambio de tamano
	glutKeyboardFunc(keyboard);	//Indicamos a Glut funci�n de manejo de teclado
	glutSpecialFunc(arrow_keys);	//Otras
	glutMainLoop();          // 

	return 0;
}