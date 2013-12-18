#ifndef _VECT3_H_
#define _VECT3_H_

#define _USE_MATH_DEFINES
#include "math.h"
#include "Matrix3.h"

class Vector3
{
public:
	float x; 
	float y; 
	float z; 

	float Magnitude();
	Vector3 Normalise(Vector3 &v); 
	Vector3 GetNormal(Vector3 &v);
	float DotProduct(Vector3 &b); 
	float EulerAngle(Vector3 &a, Vector3 &b); 
	Vector3 CrossProduct(Vector3 &a, Vector3 &c);
	Vector3 m_Lerp(Vector3 &a, Vector3 &b, float tx);
	Vector3 m_TransformVector3(Matrix3 &w);
	Vector3 operator-(Vector3 &b)
	{
		Vector3 c; 
		c.x = x - b.x; 
		c.y = y - b.y; 
		c.z = z - b.z;
		return c; 
	}
	Vector3 operator*(Vector3 &b)
	{
		Vector3 c; 
		c.x = x * b.x; 
		c.y = y * b.y; 
		c.z = z * b.z; 
		return c; 
	}
	Vector3 operator*(float b)
	{
		Vector3 c; 
		c.x = b * x;
		c.y = b * y; 
		c.z = b * z; 
		return c;
	}
	Vector3 operator+(Vector3 b)
	{
		Vector3 c; 
		c.x = x + b.x; 
		c.y = y + b.y; 
		c.z = z + b.z; 
		return c; 
	}


};


#endif