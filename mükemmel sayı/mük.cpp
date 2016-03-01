#include <stdio.h>
#include <math.h>
 int	perfect(int x); //protatip 
int main()
{
	int d,i; 
	printf("sayi gir>>");
	scanf("%d",&d);

	for(i=1;i<d;++i)  //verilen sayýya kadar kontrol ediyor ve if deðeri doðruysa ekrana yazdýrýyor.
	{
		if(perfect(i)==1) //sayýyý fonksiyona gönderiyor ve deðerlendiriyor. Doðruysa alt satýr iþlem görüyor.
		printf("%d\n",i);
	}	
	getchar();getchar();
}

int	perfect(int x){
                     
	int b,i,geri,toplam=0;
	b=floor(x/2);  // sayýnýn yarýsýný alýyor. 100 yarýsý 50'dir. 99 yarýsý 49.5'tur ama floor ile 49 kabul ederek sýkýntýsýz çarpanlarý bulabiliriz.
	for(i=1;i<b+1;i++)
	{
		if( x%i==0 )
	     toplam+=i;  //çarpanlarý mod=0 ile bulduk ve toplam deðiþkeninde sakladýk. 10 sayýsý için 1+2+5 = 8 = toplam gibi.
		
		
	}
	if(toplam==x)
	geri=1;
	else
	geri=0;
	
	return geri;

	}     

