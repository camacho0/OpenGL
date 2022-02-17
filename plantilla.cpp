
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <windows.h>
#include <GL/glut.h>
#endif
#include <stdlib.h>
#include <math.h>
#include <string>
#include "cuadrado.h"
double rotate_y=0;
double rotate_x=0;
double zoom=1., y_t=0., x_t=0.,z_t=0.;
using namespace std;
std:: string text;

//funcion que mustra texto
/*
void drawString(float x, float y, float z, const char *text) {
  int len,i;
  glRasterPos3f(x, y, z);  // establece la posición en el espacio
len = (int) strlen(text); // cuenta el número de letras
  for (i= 0; i<len; i++) {
                     //  (      Tipo de letra (fuente), texto)
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, (int) text[i]);  // escribe letra por letra
  }
}*/

/*caraterísticas de la pantalla de opengl*/
void inicio()
{
    glClearColor(0.0,0.0,0.0,0.0);
    glEnable(GL_DEPTH_TEST);
	glShadeModel(GL_SMOOTH);
	glMatrixMode(GL_PROJECTION);
	//     (-x,x,-y,y,-z,z)
    glOrtho(-15.,15.,-15.,15.,-15.,15.);
	gluPerspective(0.0, 1.0, 0.0, 0.0);
	glMatrixMode(GL_MODELVIEW);
    glEnable( GL_LINE_SMOOTH );

}
/*contenido de la pantalla*/
void pantalla ()
{

glClear(GL_COLOR_BUFFER_BIT| GL_DEPTH_BUFFER_BIT);
glLoadIdentity();
glTranslatef(0.0,0.0,0.0);
                      //x,y,z
  glRotatef( rotate_x, 1.0, 0.0, 0.0 );
  glRotatef( rotate_y, 0.0, 1.0, 0.0 );
  glScaled(zoom,zoom,zoom);
  glTranslated(x_t,0.0,0.0);
  glTranslated(0.0,y_t,0.0);
  glTranslated(0.0,0.0,z_t);


	
	//ejemplo de 
	/*
  glColor3f(1.0,1.0,1.0);
text="Hola mundo";
drawString(-8,8,-5,text.data());


gcvt (pi, 8, buf);
text=buf;
drawString(8,8,-5,text.data());*/
 glFlush();
 //glutSwapBuffers();
//glutPostRedisplay();
}
void specialKeys( int key, int x, int y ) {

  //  Flecha derecha: aumentar rotación 5 grados
  if (key == GLUT_KEY_RIGHT)
    rotate_y += 2;

  //  Flecha izquierda: disminuir rotación 5 grados
  else if (key == GLUT_KEY_LEFT)
    rotate_y -= 2;

  else if (key == GLUT_KEY_UP)
    rotate_x += 2;

  else if (key == GLUT_KEY_DOWN)
    rotate_x -= 2;

  //  Solicitar actualización de visualización
  glutPostRedisplay();
}
void keys(unsigned char key, int x, int y)
{
 switch(key)
     {

     case 'S':
         zoom=zoom+0.1;
         break;

     case 's':
         zoom=zoom-0.1;
         break;
     case 'X':
         x_t=x_t+0.1;
         break;
      case 'x':
         x_t=x_t-0.1;
         break;
     case 'Y':
         y_t=y_t+0.1;
         break;
      case 'y':
         y_t=y_t-0.1;
         break;
     case 'Z':
         z_t=z_t+0.1;
         break;
      case 'z':
         z_t=z_t-0.1;
         break;


     }

     glutPostRedisplay();
}
int main(int argc, char* argv[])
{
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE); //inicializar pantalla (colores | tipo de buffer)
  glutInitWindowPosition(0,0);  //posición incial de la pantalla
  glutInitWindowSize(500,500);   //dimenciones de la pantalla
  glutCreateWindow("Figura 2 (3D)");   // título de la pantalla
  inicio();                    //llama a las caracteríticas de la pantalla
  glutDisplayFunc(pantalla);   //declara cual subrutina será la pantalla
  glutSpecialFunc(specialKeys); //teclas especiales
  glutKeyboardFunc(keys);  //teclas normales
  pantalla();             // pantalla del contenido
  glutMainLoop();             //bucle para no cerrar pantalla

}
