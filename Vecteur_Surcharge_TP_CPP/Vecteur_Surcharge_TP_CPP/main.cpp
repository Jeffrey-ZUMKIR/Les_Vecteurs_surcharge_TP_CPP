#include "CVect2D.h"
#include "CVect3D.h"

int main() {
	CVect3D v1(1, 1, 1);
	CVect3D v2(2, 2, 2);
	CVect3D v3;
	CVect3D v4(1, 1, 1);
	v3 = v1 - v2;
	if (v1 == v4) {
		v1.AfficheLog();
	}
	if (coincide3d(v1, v4)) {
		v1.AfficheLog();
	}

	return 0;
}