#include<stdio.h>
int main( void )
{ 
/*Soru Kullanýcýdan sýnýrsýz sayýda, pozitif sayý alacak ve aldýðý sayýlarýn ortalamasýný ekrana bastýracak bir program yazýnýz.
Kullanýcý negatif bir sayý girdiði takdire, bu sayý hesaba alýnmayacak ve program sonlandýrýlýp,
o zamana kadar girilmiþ pozitif sayýlarýn ortalamasýný yazdýracaktýr. */
	int a,b,c,d,e; 
	for(a=0,b=1000;a<b;a++)
	{
			scanf("%d",&c);
			d +=c;
			if(c<0)
			break;
	}
		d=d-c;
		e=d/a;
		printf("%d",e);
}	
