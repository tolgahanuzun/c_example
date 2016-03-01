#include<stdio.h>
int main( void )
{
	int gunluk,saat,toplam;

	printf("Günluk 1 iscinin kac saat calistigini belirleyiniz >>");
	scanf("%d",&gunluk);
	printf("Ýscinin saatlik ucretini belirleyiniz >>");
	scanf("%d",&saat);

		toplam = saat*gunluk;
		toplam = toplam*30;
		
	printf("Ýscinin 1 aylik ucreti %d'dir>>",toplam);
	return 0;
	
	
	
	
	
	
	
}
