/* Calva Lorenzo Iván Eduardo
Práctica 2 (Casa Pixel)
VS Versión 2017
Este programa dibuja las iniciales de Computación Gráfica y del nombre del alumno con distintas direcciones en el degradado */
#include "Main.h"
void InitGL(GLvoid)     // Inicializamos parametros
{
	//glShadeModel(GL_FLAT);							// Habilitamos Smooth Shading
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);				// Negro de fondo
	//glClearDepth(1.0f);									// Configuramos Depth Buffer
	//glEnable(GL_DEPTH_TEST);							// Habilitamos Depth Testing
	//glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar


}

void display(void)   // Creamos la funcion donde se dibuja
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// Limpiamos pantalla y Depth Buffer	
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();									// Reinicializamos la actual matriz Modelview

	//Poner aqui codigo ha dibujar
	glBegin(GL_QUADS);         //GL_PONITS (puntos), GL_LINES (lineas), GL_LINES_LOOP (unir lineas), GL_TRIANGLES (triangulo), GL_QUADS (cuadrado), GL_POLYGON (crea un poligono sin importar vertices los toma)

	glColor3f(3.0f, 0.5f, 0.08f);
	glVertex3f(-7.0f, 8.0f, 0.0f);
	glVertex3f(-3.0f, 8.0f, 0.0f);
	glVertex3f(-3.0f, -1.0f, 0.0f);
	glVertex3f(-7.0f, -1.0f, 0.0f);

	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-6.0f, 4.0f, 0.0f);
	glVertex3f(-4.0f, 4.0f, 0.0f);
	glVertex3f(-4.0f, 1.0f, 0.0f);
	glVertex3f(-6.0f, 1.0f, 0.0f);

	glColor3f(3.0f, 3.0f, 3.0f);
	glVertex3f(-6.0f, 4.0f, 0.0f);
	glVertex3f(-5.0f, 4.0f, 0.0f);
	glVertex3f(-5.0f, 3.0f, 0.0f);
	glVertex3f(-6.0f, 3.0f, 0.0f);

	glColor3f(3.0f, 0.5f, 0.08f);
	glVertex3f(-10.0f, 4.0f, 0.0f);
	glVertex3f(-7.0f, 4.0f, 0.0f);
	glVertex3f(-7.0f, 1.0f, 0.0f);
	glVertex3f(-10.0f, 1.0f, 0.0f);

	glColor3f(3.0f, 0.5f, 0.08f);
	glVertex3f(-8.0f, 7.0f, 0.0f);
	glVertex3f(-7.0f, 7.0f, 0.0f);
	glVertex3f(-7.0f, 4.0f, 0.0f);
	glVertex3f(-8.0f, 4.0f, 0.0f);

	glColor3f(3.0f, 0.5f, 0.08f);
	glVertex3f(-9.0f, 5.0f, 0.0f);
	glVertex3f(-8.0f, 5.0f, 0.0f);
	glVertex3f(-8.0f, 4.0f, 0.0f);
	glVertex3f(-9.0f, 4.0f, 0.0f);

	glColor3f(3.0f, 0.5f, 0.08f);
	glVertex3f(-3.0f, 5.0f, 0.0f);
	glVertex3f(-1.0f, 5.0f, 0.0f);
	glVertex3f(-1.0f, -1.0f, 0.0f);
	glVertex3f(-3.0f, -1.0f, 0.0f);

	glColor3f(3.0f, 0.5f, 0.08f);
	glVertex3f(-3.0f, 7.0f, 0.0f);
	glVertex3f(-2.0f, 7.0f, 0.0f);
	glVertex3f(-2.0f, 5.0f, 0.0f);
	glVertex3f(-3.0f, 5.0f, 0.0f);

	glColor3f(3.0f, 0.5f, 0.08f);
	glVertex3f(-9.0f, 1.0f, 0.0f);
	glVertex3f(-7.0f, 1.0f, 0.0f);
	glVertex3f(-7.0f, 0.0f, 0.0f);
	glVertex3f(-9.0f, 0.0f, 0.0f);

	glColor3f(3.0f, 0.5f, 0.08f);
	glVertex3f(-1.0f, 3.0f, 0.0f);
	glVertex3f(0.0f, 3.0f, 0.0f);
	glVertex3f(-0.0f, -3.0f, 0.0f);
	glVertex3f(-1.0f, -3.0f, 0.0f);

	glColor3f(3.0f, 0.5f, 0.08f);
	glVertex3f(-2.0f, -2.0f, 0.0f);
	glVertex3f(-1.0f, -2.0f, 0.0f);
	glVertex3f(-1.0f, -3.0f, 0.0f);
	glVertex3f(-2.0f, -3.0f, 0.0f);

	glColor3f(3.0f, 0.5f, 0.08f);
	glVertex3f(-4.0f, -1.0f, 0.0f);
	glVertex3f(-2.0f, -1.0f, 0.0f);
	glVertex3f(-2.0f, -2.0f, 0.0f);
	glVertex3f(-4.0f, -2.0f, 0.0f);

	glColor3f(3.0f, 0.5f, 0.08f);
	glVertex3f(0.0f, 1.0f, 0.0f);
	glVertex3f(1.0f, 1.0f, 0.0f);
	glVertex3f(1.0f, 0.0f, 0.0f);
	glVertex3f(0.0f, 0.0f, 0.0f);

	glColor3f(3.0f, 0.5f, 0.08f);
	glVertex3f(0.0f, 0.0f, 0.0f);
	glVertex3f(2.0f, 0.0f, 0.0f);
	glVertex3f(2.0f, -6.0f, 0.0f);
	glVertex3f(0.0f, -6.0f, 0.0f);

	glColor3f(3.0f, 0.5f, 0.08f);
	glVertex3f(0.0f, -6.0f, 0.0f);
	glVertex3f(1.0f, -6.0f, 0.0f);
	glVertex3f(1.0f, -8.0f, 0.0f);
	glVertex3f(0.0f, -8.0f, 0.0f);

	glColor3f(3.0f, 0.5f, 0.08f);
	glVertex3f(2.0f, -2.0f, 0.0f);
	glVertex3f(3.0f, -2.0f, 0.0f);
	glVertex3f(3.0f, -5.0f, 0.0f);
	glVertex3f(2.0f, -5.0f, 0.0f);

	glColor3f(3.0f, 0.5f, 0.08f);
	glVertex3f(4.0f, -1.0f, 0.0f);
	glVertex3f(6.0f, -1.0f, 0.0f);
	glVertex3f(6.0f, -3.0f, 0.0f);
	glVertex3f(4.0f, -3.0f, 0.0f);

	glColor3f(3.0f, 0.5f, 0.08f);
	glVertex3f(5.0f, 0.0f, 0.0f);
	glVertex3f(7.0f, 0.0f, 0.0f);
	glVertex3f(7.0f, -1.0f, 0.0f);
	glVertex3f(5.0f, -1.0f, 0.0f);

	glColor3f(3.0f, 0.5f, 0.08f);
	glVertex3f(6.0f, 1.0f, 0.0f);
	glVertex3f(7.0f, 1.0f, 0.0f);
	glVertex3f(7.0f, 0.0f, 0.0f);
	glVertex3f(6.0f, 0.0f, 0.0f);

	glColor3f(3.0f, 0.5f, 0.08f);
	glVertex3f(4.0f, -3.0f, 0.0f);
	glVertex3f(5.0f, -3.0f, 0.0f);
	glVertex3f(5.0f, -4.0f, 0.0f);
	glVertex3f(4.0f, -4.0f, 0.0f);

	glColor3f(2.0f, 1.0f, 0.08f);
	glVertex3f(7.0f, 4.0f, 0.0f);
	glVertex3f(8.0f, 4.0f, 0.0f);
	glVertex3f(8.0f, 2.0f, 0.0f);
	glVertex3f(7.0f, 2.0f, 0.0f);
	
	glColor3f(2.0f, 1.0f, 0.08f);
	glVertex3f(6.0f, 3.0f, 0.0f);
	glVertex3f(7.0f, 3.0f, 0.0f);
	glVertex3f(7.0f, 1.0f, 0.0f);
	glVertex3f(6.0f, 1.0f, 0.0f);

	glColor3f(3.0f, 0.5f, 0.08f);
	glVertex3f(7.0f, 5.0f, 0.0f);
	glVertex3f(8.0f, 5.0f, 0.0f);
	glVertex3f(8.0f, 4.0f, 0.0f);
	glVertex3f(7.0f, 4.0f, 0.0f);

	glColor3f(3.0f, 0.5f, 0.08f);
	glVertex3f(6.0f, 4.0f, 0.0f);
	glVertex3f(7.0f, 4.0f, 0.0f);
	glVertex3f(7.0f, 3.0f, 0.0f);
	glVertex3f(6.0f, 3.0f, 0.0f);

	glColor3f(3.0f, 0.0f, 0.0f);
	glVertex3f(8.0f, 5.0f, 0.0f);
	glVertex3f(9.0f, 5.0f, 0.0f);
	glVertex3f(9.0f, 2.0f, 0.0f);
	glVertex3f(8.0f, 2.0f, 0.0f);

	glColor3f(3.0f, 0.0f, 0.0f);
	glVertex3f(7.0f, 7.0f, 0.0f);
	glVertex3f(8.0f, 7.0f, 0.0f);
	glVertex3f(8.0f, 5.0f, 0.0f);
	glVertex3f(7.0f, 5.0f, 0.0f);

	glColor3f(3.0f, 0.0f, 0.0f);
	glVertex3f(6.0f, 8.0f, 0.0f);
	glVertex3f(7.0f, 8.0f, 0.0f);
	glVertex3f(7.0f, 4.0f, 0.0f);
	glVertex3f(6.0f, 4.0f, 0.0f);

	glColor3f(3.0f, 0.0f, 0.0f);
	glVertex3f(5.0f, 5.0f, 0.0f);
	glVertex3f(6.0f, 5.0f, 0.0f);
	glVertex3f(6.0f, 2.0f, 0.0f);
	glVertex3f(5.0f, 2.0f, 0.0f);

	glColor3f(3.0f, 0.5f, 0.08f);
	glVertex3f(-1.0f, -4.0f, 0.0f);
	glVertex3f(0.0f, -4.0f, 0.0f);
	glVertex3f(0.0f, -6.0f, 0.0f);
	glVertex3f(-1.0f, -6.0f, 0.0f);
	
	glColor3f(2.0f, 1.0f, 0.08f);
	glVertex3f(-5.0f, -2.0f, 0.0f);
	glVertex3f(-3.0f, -2.0f, 0.0f);
	glVertex3f(-3.0f, -4.0f, 0.0f);
	glVertex3f(-5.0f, -4.0f, 0.0f);

	glColor3f(2.0f, 1.0f, 0.08f);
	glVertex3f(-3.0f, -3.0f, 0.0f);
	glVertex3f(-2.0f, -3.0f, 0.0f);
	glVertex3f(-2.0f, -4.0f, 0.0f);
	glVertex3f(-3.0f, -4.0f, 0.0f);

	glColor3f(2.0f, 1.0f, 0.08f);
	glVertex3f(-4.0f, -4.0f, 0.0f);
	glVertex3f(-3.0f, -4.0f, 0.0f);
	glVertex3f(-3.0f, -5.0f, 0.0f);
	glVertex3f(-4.0f, -5.0f, 0.0f);

	glColor3f(2.0f, 1.0f, 0.08f);
	glVertex3f(-3.0f, -4.0f, 0.0f);
	glVertex3f(-1.0f, -4.0f, 0.0f);
	glVertex3f(-1.0f, -6.0f, 0.0f);
	glVertex3f(-3.0f, -6.0f, 0.0f);

	glColor3f(3.0f, 3.0f, 3.0f);
	glVertex3f(-6.0f, -4.0f, 0.0f);
	glVertex3f(-5.0f, -4.0f, 0.0f);
	glVertex3f(-5.0f, -5.0f, 0.0f);
	glVertex3f(-6.0f, -5.0f, 0.0f);

	glColor3f(3.0f, 3.0f, 3.0f);
	glVertex3f(-1.0f, -7.0f, 0.0f);
	glVertex3f(0.0f, -7.0f, 0.0f);
	glVertex3f(0.0f, -8.0f, 0.0f);
	glVertex3f(-1.0f, -8.0f, 0.0f);

	glColor3f(3.0f, 3.0f, 3.0f);
	glVertex3f(1.0f, -7.0f, 0.0f);
	glVertex3f(2.0f, -7.0f, 0.0f);
	glVertex3f(2.0f, -8.0f, 0.0f);
	glVertex3f(1.0f, -8.0f, 0.0f);

	glColor3f(0.1f, 0.1f, 0.1f);
	glVertex3f(-7.0f, 9.0f, 0.0f);
	glVertex3f(-3.0f, 9.0f, 0.0f);
	glVertex3f(-3.0f, 8.0f, 0.0f);
	glVertex3f(-7.0f, 8.0f, 0.0f);

	glColor3f(0.1f, 0.1f, 0.1f);
	glVertex3f(-8.0f, 8.0f, 0.0f);
	glVertex3f(-7.0f, 8.0f, 0.0f);
	glVertex3f(-7.0f, 7.0f, 0.0f);
	glVertex3f(-8.0f, 7.0f, 0.0f);

	glColor3f(0.1f, 0.1f, 0.1f);
	glVertex3f(-9.0f, 7.0f, 0.0f);
	glVertex3f(-8.0f, 7.0f, 0.0f);
	glVertex3f(-8.0f, 5.0f, 0.0f);
	glVertex3f(-9.0f, 5.0f, 0.0f);

	glColor3f(0.1f, 0.1f, 0.1f);
	glVertex3f(-10.0f, 5.0f, 0.0f);
	glVertex3f(-9.0f, 5.0f, 0.0f);
	glVertex3f(-9.0f, 4.0f, 0.0f);
	glVertex3f(-10.0f, 4.0f, 0.0f);

	glColor3f(0.1f, 0.1f, 0.1f);
	glVertex3f(-11.0f, 4.0f, 0.0f);
	glVertex3f(-10.0f, 4.0f, 0.0f);
	glVertex3f(-10.0f, 1.0f, 0.0f);
	glVertex3f(-11.0f, 1.0f, 0.0f);

	glColor3f(0.1f, 0.1f, 0.1f);
	glVertex3f(-10.0f, 1.0f, 0.0f);
	glVertex3f(-9.0f, 1.0f, 0.0f);
	glVertex3f(-9.0f, 0.0f, 0.0f);
	glVertex3f(-10.0f, 0.0f, 0.0f);

	glColor3f(0.1f, 0.1f, 0.1f);
	glVertex3f(-9.0f, 0.0f, 0.0f);
	glVertex3f(-7.0f, 0.0f, 0.0f);
	glVertex3f(-7.0f, -1.0f, 0.0f);
	glVertex3f(-9.0f, -1.0f, 0.0f);

	glColor3f(0.1f, 0.1f, 0.1f);
	glVertex3f(-7.0f, -1.0f, 0.0f);
	glVertex3f(-4.0f, -1.0f, 0.0f);
	glVertex3f(-4.0f, -2.0f, 0.0f);
	glVertex3f(-7.0f, -2.0f, 0.0f);

	glColor3f(0.1f, 0.1f, 0.1f);
	glVertex3f(-6.0f, -2.0f, 0.0f);
	glVertex3f(-5.0f, -2.0f, 0.0f);
	glVertex3f(-5.0f, -4.0f, 0.0f);
	glVertex3f(-6.0f, -4.0f, 0.0f);

	glColor3f(0.1f, 0.1f, 0.1f);
	glVertex3f(-7.0f, -4.0f, 0.0f);
	glVertex3f(-6.0f, -4.0f, 0.0f);
	glVertex3f(-6.0f, -5.0f, 0.0f);
	glVertex3f(-7.0f, -5.0f, 0.0f);

	glColor3f(0.1f, 0.1f, 0.1f);
	glVertex3f(-6.0f, -5.0f, 0.0f);
	glVertex3f(-3.0f, -5.0f, 0.0f);
	glVertex3f(-3.0f, -6.0f, 0.0f);
	glVertex3f(-6.0f, -6.0f, 0.0f);

	glColor3f(0.1f, 0.1f, 0.1f);
	glVertex3f(-5.0f, -4.0f, 0.0f);
	glVertex3f(-4.0f, -4.0f, 0.0f);
	glVertex3f(-4.0f, -5.0f, 0.0f);
	glVertex3f(-5.0f, -5.0f, 0.0f);

	glColor3f(0.1f, 0.1f, 0.1f);
	glVertex3f(-3.0f, -6.0f, 0.0f);
	glVertex3f(0.0f, -6.0f, 0.0f);
	glVertex3f(0.0f, -7.0f, 0.0f);
	glVertex3f(-3.0f, -7.0f, 0.0f);

	glColor3f(0.1f, 0.1f, 0.1f);
	glVertex3f(-2.0f, -7.0f, 0.0f);
	glVertex3f(-1.0f, -7.0f, 0.0f);
	glVertex3f(-1.0f, -8.0f, 0.0f);
	glVertex3f(-2.0f, -8.0f, 0.0f);

	glColor3f(0.1f, 0.1f, 0.1f);
	glVertex3f(-1.0f, -8.0f, 0.0f);
	glVertex3f(2.0f, -8.0f, 0.0f);
	glVertex3f(2.0f, -9.0f, 0.0f);
	glVertex3f(-1.0f, -9.0f, 0.0f);

	glColor3f(0.1f, 0.1f, 0.1f);
	glVertex3f(1.0f, -6.0f, 0.0f);
	glVertex3f(2.0f, -6.0f, 0.0f);
	glVertex3f(2.0f, -7.0f, 0.0f);
	glVertex3f(1.0f, -7.0f, 0.0f);

	glColor3f(0.1f, 0.1f, 0.1f);
	glVertex3f(2.0f, -5.0f, 0.0f);
	glVertex3f(3.0f, -5.0f, 0.0f);
	glVertex3f(3.0f, -8.0f, 0.0f);
	glVertex3f(2.0f, -8.0f, 0.0f);

	glColor3f(0.1f, 0.1f, 0.1f);
	glVertex3f(3.0f, -1.0f, 0.0f);
	glVertex3f(4.0f, -1.0f, 0.0f);
	glVertex3f(4.0f, -6.0f, 0.0f);
	glVertex3f(3.0f, -6.0f, 0.0f);

	glColor3f(0.1f, 0.1f, 0.1f);
	glVertex3f(2.0f, 0.0f, 0.0f);
	glVertex3f(3.0f, 0.0f, 0.0f);
	glVertex3f(3.0f, -2.0f, 0.0f);
	glVertex3f(2.0f, -2.0f, 0.0f);

	glColor3f(0.1f, 0.1f, 0.1f);
	glVertex3f(4.0f, 0.0f, 0.0f);
	glVertex3f(5.0f, 0.0f, 0.0f);
	glVertex3f(5.0f, -1.0f, 0.0f);
	glVertex3f(4.0f, -1.0f, 0.0f);

	glColor3f(0.1f, 0.1f, 0.1f);
	glVertex3f(4.0f, -4.0f, 0.0f);
	glVertex3f(5.0f, -4.0f, 0.0f);
	glVertex3f(5.0f, -5.0f, 0.0f);
	glVertex3f(4.0f, -5.0f, 0.0f);

	glColor3f(0.1f, 0.1f, 0.1f);
	glVertex3f(5.0f, -3.0f, 0.0f);
	glVertex3f(6.0f, -3.0f, 0.0f);
	glVertex3f(6.0f, -4.0f, 0.0f);
	glVertex3f(5.0f, -4.0f, 0.0f);

	glColor3f(0.1f, 0.1f, 0.1f);
	glVertex3f(6.0f, -1.0f, 0.0f);
	glVertex3f(7.0f, -1.0f, 0.0f);
	glVertex3f(7.0f, -3.0f, 0.0f);
	glVertex3f(6.0f, -3.0f, 0.0f);

	glColor3f(0.1f, 0.1f, 0.1f);
	glVertex3f(7.0f, 2.0f, 0.0f);
	glVertex3f(8.0f, 2.0f, 0.0f);
	glVertex3f(8.0f, -1.0f, 0.0f);
	glVertex3f(7.0f, -1.0f, 0.0f);

	glColor3f(0.1f, 0.1f, 0.1f);
	glVertex3f(8.0f, 2.0f, 0.0f);
	glVertex3f(9.0f, 2.0f, 0.0f);
	glVertex3f(9.0f, 1.0f, 0.0f);
	glVertex3f(8.0f, 1.0f, 0.0f);

	glColor3f(0.1f, 0.1f, 0.1f);
	glVertex3f(9.0f, 5.0f, 0.0f);
	glVertex3f(10.0f, 5.0f, 0.0f);
	glVertex3f(10.0f, 2.0f, 0.0f);
	glVertex3f(9.0f, 2.0f, 0.0f);

	glColor3f(0.1f, 0.1f, 0.1f);
	glVertex3f(8.0f, 7.0f, 0.0f);
	glVertex3f(9.0f, 7.0f, 0.0f);
	glVertex3f(9.0f, 5.0f, 0.0f);
	glVertex3f(8.0f, 5.0f, 0.0f);

	glColor3f(0.1f, 0.1f, 0.1f);
	glVertex3f(7.0f, 8.0f, 0.0f);
	glVertex3f(8.0f, 8.0f, 0.0f);
	glVertex3f(8.0f, 7.0f, 0.0f);
	glVertex3f(7.0f, 7.0f, 0.0f);

	glColor3f(0.1f, 0.1f, 0.1f);
	glVertex3f(6.0f, 9.0f, 0.0f);
	glVertex3f(7.0f, 9.0f, 0.0f);
	glVertex3f(7.0f, 8.0f, 0.0f);
	glVertex3f(6.0f, 8.0f, 0.0f);

	glColor3f(0.1f, 0.1f, 0.1f);
	glVertex3f(5.0f, 8.0f, 0.0f);
	glVertex3f(6.0f, 8.0f, 0.0f);
	glVertex3f(6.0f, 5.0f, 0.0f);
	glVertex3f(5.0f, 5.0f, 0.0f);

	glColor3f(0.1f, 0.1f, 0.1f);
	glVertex3f(4.0f, 5.0f, 0.0f);
	glVertex3f(5.0f, 5.0f, 0.0f);
	glVertex3f(5.0f, 2.0f, 0.0f);
	glVertex3f(4.0f, 2.0f, 0.0f);

	glColor3f(0.1f, 0.1f, 0.1f);
	glVertex3f(5.0f, 2.0f, 0.0f);
	glVertex3f(6.0f, 2.0f, 0.0f);
	glVertex3f(6.0f, 0.0f, 0.0f);
	glVertex3f(5.0f, 0.0f, 0.0f);

	glColor3f(0.1f, 0.1f, 0.1f);
	glVertex3f(1.0f, 1.0f, 0.0f);
	glVertex3f(2.0f, 1.0f, 0.0f);
	glVertex3f(2.0f, 0.0f, 0.0f);
	glVertex3f(1.0f,0.0f, 0.0f);

	glColor3f(0.1f, 0.1f, 0.1f);
	glVertex3f(0.0f, 3.0f, 0.0f);
	glVertex3f(1.0f, 3.0f, 0.0f);
	glVertex3f(1.0f, 1.0f, 0.0f);
	glVertex3f(0.0f, 1.0f, 0.0f);

	glColor3f(0.1f, 0.1f, 0.1f);
	glVertex3f(-1.0f, 5.0f, 0.0f);
	glVertex3f(0.0f, 5.0f, 0.0f);
	glVertex3f(0.0f, 3.0f, 0.0f);
	glVertex3f(-1.0f, 3.0f, 0.0f);

	glColor3f(0.1f, 0.1f, 0.1f);
	glVertex3f(-2.0f, 7.0f, 0.0f);
	glVertex3f(-1.0f, 7.0f, 0.0f);
	glVertex3f(-1.0f, 5.0f, 0.0f);
	glVertex3f(-2.0f, 5.0f, 0.0f);

	glColor3f(0.1f, 0.1f, 0.1f);
	glVertex3f(-3.0f, 8.0f, 0.0f);
	glVertex3f(-2.0f, 8.0f, 0.0f);
	glVertex3f(-2.0f, 7.0f, 0.0f);
	glVertex3f(-3.0f, 7.0f, 0.0f);

	glColor3f(0.1f, 0.1f, 0.1f);
	glVertex3f(-2.0f, -3.0f, 0.0f);
	glVertex3f(0.0f, -3.0f, 0.0f);
	glVertex3f(0.0f, -4.0f, 0.0f);
	glVertex3f(-2.0f, -4.0f, 0.0f);

	glColor3f(0.1f, 0.1f, 0.1f);
	glVertex3f(-3.0f, -2.0f, 0.0f);
	glVertex3f(-2.0f, -2.0f, 0.0f);
	glVertex3f(-2.0f, -3.0f, 0.0f);
	glVertex3f(-3.0f, -3.0f, 0.0f);

	glColor3f(0.1f, 0.1f, 0.1f);
	glVertex3f(-1.0f, -1.0f, 0.0f);
	glVertex3f(-2.0f, -1.0f, 0.0f);
	glVertex3f(-2.0f, -2.0f, 0.0f);
	glVertex3f(-1.0f, -2.0f, 0.0f);

	glEnd();



	glFlush();
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

	// Ortogonal
	glOrtho(-15, 15, -15, 15, -1, 2);

	glMatrixMode(GL_MODELVIEW);							// Seleccionamos Modelview Matrix
	glLoadIdentity();
}

// Termina la ejecucion del programa cuando se presiona ESC
void keyboard(unsigned char key, int x, int y)
{
	switch (key)
	{
	case 27: exit(0);
		break;
	}
	glutPostRedisplay();
}

int main(int argc, char** argv)   // Main Function
{
	glutInit(&argc, argv); // Inicializamos OpenGL
	glutInitDisplayMode(GLUT_RGBA | GLUT_SINGLE); // Display Mode (Clores RGB y alpha | Buffer Sencillo )
	glutInitWindowSize(500, 500);	// Tamaño de la Ventana
	glutInitWindowPosition(0, 0);	//Posicion de la Ventana
	glutCreateWindow("Practica 2 (Pixel)"); // Nombre de la Ventana
	InitGL();						// Parametros iniciales de la aplicacion
	glutDisplayFunc(display);  //Indicamos a Glut función de dibujo
	glutReshapeFunc(reshape);	//Indicamos a Glut función en caso de cambio de tamano
	glutKeyboardFunc(keyboard);	//Indicamos a Glut función de manejo de teclado
	glutMainLoop();          // 

	return 0;
}
