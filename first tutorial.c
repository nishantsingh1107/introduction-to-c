#include<stdio.h>
/*int main(){
	int a=5;
	int b=6;
	int c=a;
	a=b;
	b=c;
	printf("a=%d \n",a);
	printf("b=%d \n",b);
	return 0;
	
}*/

int main(){
	int a;
	int b=sizeof(a);
	float c=12.5;
	int d=(int)c;
	printf("%d \n",b);
	printf("%d",d);
}

