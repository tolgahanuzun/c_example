#include <stdio.h>
#include <math.h>
int	bas(int x); 
int ayir(int z,int y);
int main()
{
	int a;
	printf(">>");
	scanf("%d",&a);
	
	printf("%d'dir\n",bas(a));
	ayir(a,bas(a));
	getchar(); getchar(); //programýn kapanmamasý için yapýyorum bunu.
}

int	bas(int x){
                     
	int sayac = 0;
  
	while(x){
  		x /= 10;
  		sayac++;
 	}
	
	return sayac;

	}     

int ayir(int z,int y)
{
	int c;
	for(c;1<=y;y--){
	
	c=z/pow(10,y-1);
	printf("%d ",c);	
	z=z-(c*pow(10,y-1) );	
	
	}
	
}

