#include "CVect2D.h"

int main() {
	CVect2D v1(1,1);
	CVect2D v2 = v1;

	CVect2D v3;
	v3 = v1 + v2;
	v3 = v1 - v2;
	CVect2D v4(3, 3);
	CVect2D v5;
	v5 = v3 * v4;

	if (v1 == v2) {
		v1.AfficheLog();
	}
	if (v1 != v3) {
		v1.AfficheLog();
	}

	return 0;
}