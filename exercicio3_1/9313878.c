#include <stdio.h>

int main(){
	int x,y,w;
	scanf ("%d %d %d", &x, &y, &w);

	if  (x<y)
		if  (y<w)
			printf("%d",w);
		else  // (y>w)
			printf("%d",y);
	else { //(x>y)
		// ???!!!
	}

	if (x > w)
		printf ("%d",x);
        else {
		printf ("%d", w);
	}
	return 0;
}
