#include<stdio.h>
int main( void )
{ 
/*Soru Kullan�c�dan s�n�rs�z say�da, pozitif say� alacak ve ald��� say�lar�n ortalamas�n� ekrana bast�racak bir program yaz�n�z.
Kullan�c� negatif bir say� girdi�i takdire, bu say� hesaba al�nmayacak ve program sonland�r�l�p,
o zamana kadar girilmi� pozitif say�lar�n ortalamas�n� yazd�racakt�r. */
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
