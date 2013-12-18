#ifndef _VECT4_H_
#define _VECT4_H_

#define _USE_MATH_DEFINES
#include "math.h"
#include "Matrix4.h"

class Vector4
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
	Vector4 m_CrossProduct(float v1[], float v2[], float vR[]); 
	Vector4 m_RGBconverter(int hexValue);
	Vector4 m_TransformPoint(Matrix4 &w);
	Vector4 m_TransformPoint(Vector4 &a, Matrix4 &w); 
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
};



#endif