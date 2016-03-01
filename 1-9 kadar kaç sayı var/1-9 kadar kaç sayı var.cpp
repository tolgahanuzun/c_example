#include <stdio.h>
#include <conio.h>

int main()
{
	int rakam[10];
	int a,b,i;
    a=-2;

	printf("Sayilari Girip Enter'a basiniz.\n");
		int k;
		
        for (k = 0;k<=10;k++)
		rakam[k]=0;
	

	do
	{
		a = getchar();
		b = a - '0';
		++rakam[b];
	} while (a != '\n');
	for (i = 0;i<10;i++)
		printf("%d sayisi %d tane kullanilmistir. \n", i, rakam[i]);


	getchar(); getchar();
}
