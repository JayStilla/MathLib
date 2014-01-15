#ifndef _VECT2_H_
#define _VECT2_H_

#include <iostream>
using namespace std; 

#define _USE_MATH_DEFINES
#include "math.h" 

#ifdef DLL
        #define DLLEXPORT __declspec(dllexport)
#else
        #define DLLEXPORT __declspec(dllimport)
#endif

//////////////////////////////////VECTOR CLASS
class DLLEXPORT Vectors
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

	inline friend ostream& operator<< (ostream &os, const Vectors::Point2D &V2)
	{
		os << V2.x << " " << V2.y << " "; 
		
		return os; 
	}


};



#endif