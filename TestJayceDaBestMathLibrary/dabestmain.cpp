#include <iostream>
#include <Windows.h>
#include "MiscMath.h"
#include "Matrix3.h"
#include "Matrix4.h"
#include "Vect2.h"
#include "Vect3.h"
#include "Vect4.h"
#include "UnitTestLib.h"
#include "math.h"

using namespace std;

CommonMath ComMath; 
Vector4 Vect4; 
Matrix3 Mat3;
Matrix4 Mat4; 

void main()
{
	Matrix3 Identity;
	Identity = Mat3.m_CreateIdentity();
	cout << Identity; 

	Matrix3 TranslationXY; 
	TranslationXY = Mat3.m_TranslationXY(2, 2); 
	cout << TranslationXY; 

	Matrix4 RotationX; 
	RotationX = Mat4.m_RotationX(3); 
	cout << RotationX; 

	getchar(); 
}