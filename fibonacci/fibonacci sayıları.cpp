#include<stdio.h>

int main()
{
    double veri1=1,veri2=1,girilen;
	scanf("%lf",&girilen);
	

	printf("%.0f\n%.0f ",veri1,veri2);
	int	i; 
	for(i=1; i <= girilen; i++)
	{
		veri1=veri1+veri2;
		veri2=veri1+veri2;
		
		printf("\n%.0f\n%.0f",veri1,veri2);
	}
	getchar(); getchar();	
}
