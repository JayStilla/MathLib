#ifndef _VECT2_H_
#define _VECT2_H_

#define _USE_MATH_DEFINES
#include "math.h" 
//////////////////////////////////VECTOR CLASS
class Vectors
{
public: 
	Vectors(); 
	~Vectors();

	static struct Point2D
	{
		float x; 
		float y; 
	};


	static	Point2D pointSubtract(Point2D &v, float s); 
	static	Point2D pointAdd(Point2D &v, float s); 
	static 	Point2D multiplyScalar(Point2D &v, float s); 
	static	Point2D pointSubtract(Point2D &v, Point2D &v2); 
	static 	Point2D pointAdd(Point2D &v, Point2D &v2); 
	static 	Point2D getNormal(Point2D &v); 
	float getMagnitude(Point2D &v); 

};



#endif