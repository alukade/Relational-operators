#include<stdio.h>
int main()
{
	int a = 5, b = 3;

	printf("%d\n", 1 < 2);//T
	printf("%d\n", a > b);//T
	printf("%d\n", a <= b + 1);//F
	printf("%d\n", 'a' + 'b' <= 'c');//61,62,63  F
	printf("%d\n", (a = 3) > (b = 5));//F

	return 0;
}