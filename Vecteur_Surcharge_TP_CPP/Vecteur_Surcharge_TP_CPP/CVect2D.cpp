#include "CVect2D.h"

CVect2D::CVect2D(float flt_x, float flt_y)
{
	this->flt_x = flt_x;
	this->flt_y = flt_y;
}

CVect2D::CVect2D(const CVect2D& v)
{
	this->flt_x = v.flt_x;
	this->flt_y = v.flt_y;
}

CVect2D::~CVect2D()
{
}

int CVect2D::getX() const
{
	return this->flt_x;
}

int CVect2D::getY() const
{
	return this->flt_y;
}

void CVect2D::setX(float x)
{
	this->flt_x = x;
}

void CVect2D::setY(float y)
{
	this->flt_y = y;
}

CVect2D CVect2D::SomVect(const CVect2D& v) const
{
	CVect2D vTot;
	vTot.flt_x = this->flt_x + v.flt_x;
	vTot.flt_y = this->flt_y + v.flt_y;
	return vTot;
}

CVect2D CVect2D::SousVect(const CVect2D& v) const
{
	CVect2D vTot;
	vTot.flt_x = this->flt_x - v.flt_x;
	vTot.flt_y = this->flt_y - v.flt_y;
	return vTot;
}

float CVect2D::MultVect(const CVect2D& v) const
{
	float flt_tot;
	flt_tot = this->flt_x * v.flt_x + this->flt_y * v.flt_y;
	return flt_tot;
}

CVect2D CVect2D::MultVectScal(float flt_scal) const
{
	CVect2D vTot;
	vTot.flt_x *= flt_scal;
	vTot.flt_y *= flt_scal;
	return vTot;
}

bool coincide2D(const CVect2D& v1, const CVect2D& v2)
{
	if (v1.flt_x == v2.flt_x && v1.flt_y == v2.flt_y) {
		return true;
	}
	return false;
}

void CVect2D::AfficheLog()const
{
	cout << "X : " << this->flt_x << endl;
	cout << "Y : " << this->flt_y << endl;
}