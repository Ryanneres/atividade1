#include<stdio.h>
#include<stdlib.h>


int main(){

	int A=10,B=20;
	
	int aux=0;

	printf("A: %d B: %d\n", A, B);
	
	aux=A;
	A=B;
	
	printf("A: %d B: %d\n", A, B);
	
	return 0;
}

