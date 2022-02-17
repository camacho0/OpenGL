void dibujarcuadrado(float tam){
	glBegin(GL_QUADS);
	glVertex3f(-tam/2.0,tam/2.0,0.0);
	glVertex3f(-tam/2.0,-tam/2.0,0.0);
	glVertex3f(tam/2.0,-tam/2.0,0.0);
	glVertex3f(tam/2.0,tam/2.0,0.0);
	glEnd();
}

void dibujarcuadradoRecursivo(float tam){
	if(tam >0.005){
		dibujarcuadrado(tam);

		glPushMatrix();
			glTranslatef(0.0,tam *2.0,0.0);
			dibujarcuadradoRecursivo(tam/2.0);
		glPopMatrix();

		glPushMatrix();
			glTranslatef(0.0,-tam *2.0,0.0);
			dibujarcuadradoRecursivo(tam/2.0);
		glPopMatrix();

		glPushMatrix();
			glTranslatef(tam *2.0,0.0,0.0);
			dibujarcuadradoRecursivo(tam/2.0);
		glPopMatrix();

		glPushMatrix();
			glTranslatef(-tam *2.0,0.0,0.0);
			dibujarcuadradoRecursivo(tam/2.0);
		glPopMatrix();


			
	}
}
