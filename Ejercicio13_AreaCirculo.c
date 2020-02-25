#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415926

int main(){
	int diametro=10;
	int radio = diametro /2;
	double area= PI*radio*radio;
	printf("El radio del circulo es %d por lo tanto su area es = %f\n",radio,area);
	system("Pause");
	return 0;
}
