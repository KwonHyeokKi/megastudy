#include <stdio.h>




int main(void)
{

	int a = 10;

	printf("%d\n", a++);
	printf("%d\n", ++a);

	//a++; // ���� ���� a = a+1 (11) +=
	//++a; // ���� ���� a = a+1 (12) +=
	//--a; // a = a-1 (11) -=
	//a--; // a = a-1 (10) -=

	

	return 0;
}