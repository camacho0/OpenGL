#include "Vector3D.hpp"

using namespace std;

int main(){
	Vector3D a(1,1,1);
	Vector3D b(2,3,4);
	
	cout<< a.X()<< endl;
	cout<< b.Y()<< endl;
	cout<< a << endl;
	cout<< b << endl;

	cout<< (a==b) << endl;
	cout<< (a!=b) << endl;

	return 0;
}
