#pragma once
#include "CVect2D.h"

class CVect3D : public CVect2D {
private:
	float flt_z;
public:
	//Constructeur
	CVect3D(const float flt_z = 0);
	CVect3D(const float flt_x, const float flt_y, const float flt_z);

	//Constructeur de copie
	CVect3D(const CVect3D& v);

	//Destructeur
	~CVect3D();

	//Accesseur
	float getZ()const;

	//Mutateur
	void setZ(float z);

	//Opérateur +
	CVect3D operator+(CVect3D& v)const;
	//Opérateur -
	CVect3D operator-(CVect3D& v)const;
	//Opérateur =
	CVect3D operator=(const CVect3D& v);
	//Opérateur *
	CVect3D operator*(float flt_scal);
	float operator*(CVect3D& v);
	//Opérateur ==
	bool operator==(CVect3D& v);
	//Opérateur !=
	bool operator!=(CVect3D& v);

	//coincide
	friend bool coincide3d(CVect3D& v1, CVect3D& v2);

	//Affichage
	void AfficheLog()const;

	//Opérateur <<
	friend ostream& operator<<(ostream& os, const CVect3D v);
};