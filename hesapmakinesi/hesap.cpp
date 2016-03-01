#include<stdio.h>
int main( void )
{
	int sayi1,sayi2,sonuc1,sonuc2,sonuc3,sonuc4;
	char a;
	printf("2 tam sayi ile birlikte 4 islemden bir tanesini belirterek islem yapmaktasiniz. ");
	
	printf("Lutfen islem simgesi giriniz \n| Toplama = '+' \n| Cikarma = '-' \n| Carpma  = '*' \n| Bolme   = '/' \nGiriniz>>>>>");
	scanf("%c",&a);
	printf("Lutfen 1 tam sayi giriniz> ");
	scanf("%d",&sayi1);
	
	printf("Lutfen 1 tam sayi daha giriniz> ");
	scanf("%d",&sayi2);
	
	sonuc1  = sayi1+sayi2;
	sonuc2  = sayi1-sayi2;
	sonuc3  = sayi1*sayi2;
	sonuc4  = sayi1/sayi2;


	switch( a ) {
		case '+': 
			 printf("Ýslemin sonucu %d'dir",sonuc1); break;
		case '-': 
			 printf("Ýslemin sonucu %d'dir",sonuc2); break;
		case '*': 
			 printf("Ýslemin sonucu %d'dir",sonuc3); break;
		case '/': 
			 printf("Ýslemin sonucu %d'dir",sonuc4); break;	
	 			default:
			printf("HATA: Bilinmeyen bir deðer girdiniz!\n");		}
			
			getchar();
			getchar();
	
	
	
	
	
	
}
