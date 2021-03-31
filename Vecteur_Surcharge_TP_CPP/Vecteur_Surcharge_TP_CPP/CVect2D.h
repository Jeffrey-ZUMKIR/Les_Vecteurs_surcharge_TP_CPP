#pragma once
#include <iostream>

using namespace std;

class CVect2D {
private:
	float flt_x, flt_y;
public:
	//Constructeur
	CVect2D(float flt_x = 0, float flt_y = 0);

	//Constructeur de copie
	CVect2D(const CVect2D &v);

	//Destructeur
	~CVect2D();

	//Accesseurs
	float getX()const;
	float getY()const;

	//Mutateurs
	void setX(float x);
	void setY(float y);

	//Op�rateur +
	CVect2D operator +(CVect2D& v)const;
	//Op�rateur -
	CVect2D operator -(CVect2D& v)const;
	//Op�rateur * entre un vecteur et un scalaire
	CVect2D operator *(float flt_scal)const;
	//Op�rateur * entre deux vecteurs
	float operator *(CVect2D& v)const;
	//Op�rateur ==
	bool operator ==(CVect2D& v)const;
	//Op�rateur !=
	bool operator !=(CVect2D& v)const;

	//Affichage
	void AfficheLog()const;
};