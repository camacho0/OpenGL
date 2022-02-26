#include "Vector3D.hpp"
//#include <iostream>

Vector3D::Vector3D(double a, double b, double c){
	x=a;
	y=b;
	z=c;
}

double Vector3D::X(void) const{
	return x;
}

double Vector3D::Y(void) const{
	return y;
}

double Vector3D::Z(void) const{
	return z;
}

double Vector3D::norm(Vector3D& a)const{
	return sqrt(a.X()*a.X()+a.Y()*a.Y()+a.Z()*a.Z());
}

Vector3D Vector3D::unit(Vector3D& a)const{
	return Vector3D(a.X()/norm(a),
									a.Y()/norm(a),
									a.Z()/norm(a));
}

ostream& operator << (ostream& os, const Vector3D& a){
	os<<"("<< a.X()<<","<<a.Y()<<","<<a.Z()<<")";
	return os;
}

bool operator == (const Vector3D& a, const Vector3D& b){
	return (a.X()==b.X() && a.Y()==b.Y() && a.Z()==b.Z() )?
					true:false;
}

bool operator != (const Vector3D& a, const Vector3D& b){
	return (a==b)? false:true;
}


