#ifndef VECTOR3D_HPP
#define VECTOR3D_HPP

#include <iostream>
#include <cmath>

using namespace std;

class Vector3D{
	private:
		double x, y, z;

	public:
		Vector3D(double a, double b, double c);
		double X(void) const;
		double Y(void) const;
		double Z(void) const;
		double norm(Vector3D& a) const;
		Vector3D unit(Vector3D& a) const;
};

ostream& operator << (ostream& os, const Vector3D& a);
bool operator == (const Vector3D& a, const Vector3D& b);
bool operator != (const Vector3D& a, const Vector3D& b);
#endif
