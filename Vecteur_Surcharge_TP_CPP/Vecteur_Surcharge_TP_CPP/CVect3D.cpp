#include "CVect3D.h"

//BUT:	 Initialisé les valeurs du vecteur
//ENTREE:1 float
//SORTIE:le vecteur 3D initialisé
CVect3D::CVect3D(const float flt_z)
{
	this->flt_z = flt_z;
}

//BUT:	 Initialisé les valeurs du vecteur
//ENTREE:3 floats
//SORTIE:le vecteur 3D initialisé
CVect3D::CVect3D(const float flt_x, const float flt_y, const float flt_z):CVect2D(flt_x, flt_y)
{
	this->flt_z = flt_z;
}

//BUT:   Initialisé avec constructeur de copie
//ENTREE:Un vecteur 3D
//SORTIE:Un vecteur 3D
CVect3D::CVect3D(const CVect3D& v):CVect2D(v)
{
	/*this->setX(v.getX());
	this->setY(v.getY());*/
	this->flt_z = v.flt_z;
}

//BUT:   Libéré la mémoire
//ENTREE:/
//SORTIE:/
CVect3D::~CVect3D()
{
}

//BUT:   Obtenir la valeur de Z
//ENTREE:/
//SORTIE:Z
float CVect3D::getZ() const
{
	return this->flt_z;
}

//BUT:   Changer la valeur de Z
//ENTREE:Un float
//SORTIE:Z avec une nouvelle valeur
void CVect3D::setZ(float z)
{
	this->flt_z = z;
}

//BUT:   Opérateur +
//ENTREE:Le vecteur a additionner
//SORTIE:Un vecteur 3d
CVect3D CVect3D::operator+(CVect3D& v) const
{
	//CVect2D vect2d = CVect2D::operator +(v);
	CVect3D vect3d;
	/*vect3d.setX(vect2d.getX());
	vect3d.setY(vect2d.getY());*/
	vect3d.setX(this->getX() + v.getX());
	vect3d.setY(this->getY() + v.getY());
	vect3d.flt_z = this->flt_z + v.flt_z;
	return vect3d;
}

//BUT:   Opérateur -
//ENTREE:Le vecteur a soustraire
//SORTIE:Un vecteur 3d
CVect3D CVect3D::operator-(CVect3D& v) const
{
	CVect3D vect3d;
	vect3d.setX(this->getX() - v.getX());
	vect3d.setY(this->getY() - v.getY());
	vect3d.flt_z = this->flt_z - v.flt_z;
	return vect3d;
}

//BUT:   Opérateur =
//ENTREE:Le vecteur a prendre la valeur
//SORTIE:Un vecteur 3d
CVect3D CVect3D::operator=(const CVect3D& v)
{
	this->setX(v.getX());
	this->setY(v.getY());
	this->flt_z = v.flt_z;
	return *this;
}

//BUT:   Opérateur * entre vecteur et scalaire
//ENTREE:Le nombre scalaire
//SORTIE:Un vecteur 3d
CVect3D CVect3D::operator*(float flt_scal)
{
	CVect3D vect3d;
	vect3d.setX(this->getX() * flt_scal);
	vect3d.setY(this->getY() * flt_scal);
	vect3d.flt_z = this->flt_z * flt_scal;
	return vect3d;
}

//BUT:   Opérateur * entre deux vecteurs
//ENTREE:Un vecteur 3d
//SORTIE:Un vecteur 3d
float CVect3D::operator*(CVect3D& v)
{
	float flt_tot = this->getX() * v.getX() + this->getY() * v.getY() + this->flt_z * v.flt_z;
	return flt_tot;
}

//BUT:   Opérateur ==
//ENTREE:Un vecteur 3d
//SORTIE:Un vecteur 3d
bool CVect3D::operator==(CVect3D& v)
{
	if (this->getX() == v.getX() && this->getY() == v.getY() && this->flt_z == v.flt_z) {
		return true;
	}
	return false;
}

//BUT:   Opérateur !=
//ENTREE:Un vecteur 3d
//SORTIE:Un vecteur 3d
bool CVect3D::operator!=(CVect3D& v)
{
	if (this->getX() != v.getX() || this->getY() != v.getY() || this->flt_z != v.flt_z) {
		return true;
	}
	return false;
}

//BUT:   Affichage
//ENTREE:/
//SORTIE:affiche les coordonnées du vecteur
void CVect3D::AfficheLog()const
{
	CVect2D::AfficheLog();
	cout << "Z : " << this->flt_z << endl;
}

//BUT:   Check si deux points se trouve au même endroit
//ENTREE:Deux vecteurs à comparer
//SORTIE:True ou false
bool coincide3d(CVect3D& v1, CVect3D& v2)
{
	if (v1 == v2) {
		return true;
	}
	return false;
}
