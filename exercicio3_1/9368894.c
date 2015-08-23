#include <stdio.h>

int main () {
	int x, y, z;
	scanf("%d %d %d", &x, &y, &z);

	if (x > y) {
		if (x > z) {
			printf ("%d", x);
		} else {// (z>x)
			printf ("%d", z);
		}
	} else { // (y>x)
		if (y > z) {
			printf ("%d", y);
		} else // (z>y)
			printf ("%d", z);
        }

	return 0;
}
