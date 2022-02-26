#include "Sphere.hpp"
#include "Vector3D.hpp"
using namespace std;

int main(){
	Vector3D a(1,1,1);
	Vector3D b(1,0,0);
	Sphere a(1,a,b);
	return 0;
}
