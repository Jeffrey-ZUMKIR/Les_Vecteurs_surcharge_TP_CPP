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
	int getX()const;
	int getY()const;

	//Mutateurs
	void setX(float x);
	void setY(float y);

	//Somme de deux vecteurs
	CVect2D SomVect(const CVect2D& v)const;

	//Soustraction de deux vecteurs
	CVect2D SousVect(const CVect2D& v)const;

	//Multiplication de deux vecteurs
	float MultVect(const CVect2D& v)const;

	//Multiplication d'un vecteur et un scalaire
	CVect2D MultVectScal(float flt_scal)const;

	//Coincide
	friend bool coincide2D(const CVect2D& v1, const CVect2D& v2);

	//Affichage
	void AfficheLog()const;
};