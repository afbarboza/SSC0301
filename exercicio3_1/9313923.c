#include <stdio.h>

int main(){
	int x,y,z;
	printf("Digite tres numeros\n");
	scanf("%d",&x);
	scanf("%d",&y);
	scanf("%d",&z);

	if(x >= y) {
		if (x >= z)
			printf("O maior numero eh: %d",x);
		else
			printf("O maior numero eh: %d",z);
	} else { //y>=x
		if(y >= z)
			printf("O maior numero eh: %d",y);
		else
			printf("O maior numero eh: %d",z);
        }

	return 0;
}
