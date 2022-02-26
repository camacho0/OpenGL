
/*caraterísticas de la pantalla de opengl*/
void inicio()
{
    glClearColor(0.0,0.0,0.0,0.0);
    glEnable(GL_DEPTH_TEST);
	glShadeModel(GL_SMOOTH);
	glMatrixMode(GL_PROJECTION);
	//     (-x,x,-y,y,-z,z)
    glOrtho(0.0,15.,0.,15.,0.,15.);
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
/*  glRotatef( rotate_x, 1.0, 0.0, 0.0 );
  glRotatef( rotate_y, 0.0, 1.0, 0.0 );
  glScaled(zoom,zoom,zoom);
  glTranslated(x_t,0.0,0.0);
  glTranslated(0.0,y_t,0.0);
  glTranslated(0.0,0.0,z_t);*/
	
	Vector3D p(1,1,1);
	Vector3D v(1,0,0);

	Sphere a(1,p,v);

 glFlush();
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
