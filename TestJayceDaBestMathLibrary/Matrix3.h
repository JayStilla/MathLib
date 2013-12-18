#ifndef _MATRIX3_H_
#define _MATRIX3_H_
#include <iostream>

using namespace std; 
class Matrix3
{
public:
	float a_fMatricesMatrix2D [3][3];
	Matrix3 m_CreateIdentity();
	Matrix3 m_TranslationXY(float x, float y);

	inline friend ostream& operator<< (ostream &os, const Matrix3 &Mat3)
	{
		for(int i=0; i<3; i++)
		{
			for(int j=0; j<3; j++)
			{
				os<< Mat3.a_fMatricesMatrix2D[i][j]<< " "; 
			}
			os << endl; 
		}
		return os; 
	}
	Matrix3 operator*(Matrix3 &w);
};




#endif