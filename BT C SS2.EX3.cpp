#include<stdio.h>
#include<math.h>
	int main( ){
	int NumF = 10;
	int NumS = 20;
	int sum, minus,multy;
	float devide;
		minus = NumF-NumS;
		multy = NumF * NumS;
		devide = NumS/NumF;
		sum = NumF+NumS;
	printf("Tong cua hai bien la %d\n", sum);
	printf("Hieu cua hai bien la %d\n", minus);
	printf("Tich cua hai bien la %d\n", multy);
	printf("Thuong cua hai bien la %f\n", devide);
	}
