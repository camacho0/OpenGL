#ifndef SPHERE_HPP
#define SPHERE_HPP

#include <iostream>
#include "Vector3D.hpp"

using namespace std;

class Sphere{
	private:
		float radio;
		Vector3D vel;
		Vector3D pos;

	public:
		Sphere(float radio, Vector3D pos, Vector3D vel);
//		bool test(double max);
	//	void colision();
};

#endif
