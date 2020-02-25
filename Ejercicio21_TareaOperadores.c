#include <stdio.h>
int main(){
	float div1 =(float) 1/3;
	float div2=(float)3/5;
	float div3=(float)1/30;
	float div4=(float)23/38;
	
	float div5=(float)2-(1/4);
	float div6=(float)1+(2/div5);
	float div7=(float)(1/div6);
	//float div8=(float)5+(2/div7);
	printf("A) el resultado es : %f \n", div1+div2+div3/div4 );
	printf("B) el resultado es : %f \n", 5+(2/0.467));
	system("Pause");
	return 0;
}
	
