#include "CVect2D.h"
//BUT:	 Initialis� les valeurs du vecteur
//ENTREE:2 floats
//SORTIE:le vecteur initialis�
CVect2D::CVect2D(float flt_x, float flt_y)
{
	this->flt_x = flt_x;
	this->flt_y = flt_y;
}

//BUT:   Initialis� avec constructeur de copie
//ENTREE:Un vecteur
//SORTIE:Un vecteur
CVect2D::CVect2D(const CVect2D& v)
{
	this->flt_x = v.flt_x;
	this->flt_y = v.flt_y;
}

//BUT:   Lib�r� la m�moire
//ENTREE:/
//SORTIE:/
CVect2D::~CVect2D()
{
}

//BUT:   Obtenir la valeur de X
//ENTREE:/
//SORTIE:X
float CVect2D::getX() const
{
	return this->flt_x;
}

//BUT:   Obtenir la valeur de Y
//ENTREE:/
//SORTIE:Y
float CVect2D::getY() const
{
	return this->flt_y;
}

//BUT:   Set la valeur de X
//ENTREE:Un float
//SORTIE:Une nouvelle valeur pour X
void CVect2D::setX(float x)
{
	this->flt_x = x;
}

//BUT:   Set la valeur de Y
//ENTREE:Un float
//SORTIE:Une nouvelle valeur pour Y
void CVect2D::setY(float y)
{
	this->flt_y = y;
}

//BUT:   Additionner deux vecteurs
//ENTREE:Un vecteur
//SORTIE:Un vecteur
CVect2D CVect2D::operator+(CVect2D& v) const
{
	CVect2D vTot;
	vTot.flt_x = this->flt_x + v.flt_x;
	vTot.flt_y = this->flt_y + v.flt_y;
	return vTot;
}

//BUT:   Soustraire deux vecteurs
//ENTREE:Un vecteur
//SORTIE:Un vecteur
CVect2D CVect2D::operator-(CVect2D& v) const
{
	CVect2D vTot;
	vTot.flt_x = this->flt_x - v.flt_x;
	vTot.flt_y = this->flt_y - v.flt_y;
	return vTot;
}

//BUT:   Multiplier un vecteur avec un scalaire
//ENTREE:Un float
//SORTIE:Un vecteur
CVect2D CVect2D::operator*(float flt_scal) const
{
	CVect2D vTot;
	vTot.flt_x = this->flt_x * flt_scal;
	vTot.flt_y = this->flt_y * flt_scal;
	return vTot;
}

//BUT:   Multiplier deux vecteurs
//ENTREE:Un vecteur
//SORTIE:Un float
float CVect2D::operator*(CVect2D& v) const
{
	float flt_tot;
	flt_tot = this->flt_x * v.flt_x + this->flt_y * v.flt_y;
	return flt_tot;
}

//BUT:   Assigner la valeur d'un vecteur � un autre
//ENTREE:Un vecteur
//SORTIE:Un vecteur
CVect2D CVect2D::operator=(const CVect2D& v)
{
	this->flt_x = v.flt_x;
	this->flt_y = v.flt_y;
	return *this;
}

//BUT:   V�rifier si deux vecteurs sont �gaux
//ENTREE:Un vecteur
//SORTIE:Un bool
bool CVect2D::operator==(CVect2D& v) const
{
	if (this->flt_x == v.flt_x && this->flt_y == v.flt_y) {
		return true;
	}
	return false;
}

//BUT:   V�rifier si deux vecteurs sont diff�rents
//ENTREE:Un vecteur
//SORTIE:Un bool
bool CVect2D::operator!=(CVect2D& v) const
{
	if (this->flt_x != v.flt_x || this->flt_y != v.flt_y) {
		return true;
	}
	return false;
}

//BUT:   Afficher les donn�es du vecteur
//ENTREE:/
//SORTIE:Affiche les donn�es
void CVect2D::AfficheLog()const
{
	cout << "X : " << this->flt_x << endl;
	cout << "Y : " << this->flt_y << endl;
}