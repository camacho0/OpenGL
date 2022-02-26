#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>
#include <string>
//#include "cabezera.hpp"
#include "Vector3D.hpp"
#include "Sphere.hpp"
double rotate_y=0;
double rotate_x=0;
double zoom=1., y_t=0., x_t=0.,z_t=0.;

#include "cabezera.hpp"
using namespace std;

int main(int argc, char* argv[])
{
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE); //inicializar pantalla (colores | tipo de buffer)
  glutInitWindowPosition(0,0);  //posición incial de la pantalla
  glutInitWindowSize(500,500);   //dimenciones de la pantalla
  glutCreateWindow("Sphere");   // título de la pantalla
  inicio();                    //llama a las caracteríticas de la pantalla
  glutDisplayFunc(pantalla);   //declara cual subrutina será la pantalla
  glutSpecialFunc(specialKeys); //teclas especiales
  glutKeyboardFunc(keys);  //teclas normales
  pantalla();             // pantalla del contenido
  glutMainLoop();             //bucle para no cerrar pantalla

}
