#ifndef _VECT4_H_
#define _VECT4_H_

#define _USE_MATH_DEFINES
#include "math.h"
#include "Matrix4.h"

#ifdef DLL
        #define DLLEXPORT __declspec(dllexport)
#else
        #define DLLEXPORT __declspec(dllimport)
#endif

class DLLEXPORT Vector4
{
public:
	float x; 
	float y; 
	float z; 
	float w; 

	float m_Magnitude();	
	Vector4 m_GetNormal(Vector4 &v); 
	Vector4 m_Normalise(Vector4 &v); 
	float m_DotProduct(Vector4 &b);  
	Vector4 m_RGBconverter(int hexValue);
	Vector4 m_TransformPoint(Matrix4 &c);
	Vector4 m_TransformVector4(Vector4 &a, Matrix4 &w);
	
	/*
	Vector4 operator * (Matrix4 &w)
	{
		Vector4 c; 
		c.x = x * w.a_fMatricesMatrix3D[4][4];
		c.y = y * w.a_fMatricesMatrix3D[4][4];
		c.z = z * w.a_fMatricesMatrix3D[4][4];
		return c; 
	}*/

	inline friend ostream& operator<< (ostream &os, const Vector4 &Vect4)
	{
		os << Vect4.x << " " << Vect4.y << " " << Vect4.z << " " << Vect4.w << " "; 

		return os; 
	}

};



#endif