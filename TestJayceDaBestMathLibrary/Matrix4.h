#ifndef _MATRIX4_H_
#define _MATRIX4_H_


class Matrix4
{
public:
	float phi; 
	float theta; 
	float psi;

	float a_fMatricesMatrix3D [4][4];
	Matrix4 m_RotationX(float rot); 
	Matrix4 m_RotationY(float rot); 
	Matrix4 m_RotationZ(float rot); 
	Matrix4 m_TranslationXYZ(float x, float y, float z);

		inline friend ostream& operator<< (ostream &os, const Matrix4 &Mat4)
	{
		for(int i=0; i<4; i++)
		{
			for(int j=0; j<4; j++)
			{
				os<< Mat4.a_fMatricesMatrix3D[i][j]<< " "; 
			}
			os << endl; 
		}
		return os; 
	}
};



#endif