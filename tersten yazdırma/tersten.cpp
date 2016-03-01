#include <stdio.h>

int ters(int b);
int main()
{
	int a;
	printf(">>");
	scanf("%d",&a);
	

	ters(a);
}

int ters(int b)
{
	int birler;
	while(b>0)
	{
		birler=b%10;
		printf("%d \n",birler);
		b=b/10;
	}
	getchar(); getchar();
}
