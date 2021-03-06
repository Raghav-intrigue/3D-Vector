// Vector_3D.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include "Vector3D.h"

using namespace std;

int main()
{
	Vector3D v1(1, 2, 3);
	Vector3D v2(4, 5, 6);

	cout << v1 << " . " << v2 << " = " << v1*v2 << "\n";

	Vector3D v3(v1.cross_product(v2));
	cout << v1 << " X " << v2 << " = " << v3 << "\n";

	v1 += 3*v2;
	cout << "v1: " << v1 << "\n";
	cout << "Length: " << v1.length() << "\n";
	v1.rotate(180, 0, 180);
	cout << "Rotate(180, 0, 180): " << v1 << "\n";

	system("pause");
	return 0;
}