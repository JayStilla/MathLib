#ifndef _MISCMATH_H_
#define _MISCMATH_H_

#define _USE_MATH_DEFINES
#include "math.h"
#include "Vect3.h"

class CommonMath
{
public:
	float x; 
	int y; 
	float z; 
	float Pow2(float x, int y); 
	float m_RadianConvert(float a, float b);
	float m_degreeConvert(float a, float b); 
	Vector3 m_Lerp(Vector3 &a, Vector3 &b, float tx);
};




#endif