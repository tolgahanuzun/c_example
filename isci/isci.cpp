#include<stdio.h>
int main( void )
{
	int gunluk,saat,toplam;

	printf("G�nluk 1 iscinin kac saat calistigini belirleyiniz >>");
	scanf("%d",&gunluk);
	printf("�scinin saatlik ucretini belirleyiniz >>");
	scanf("%d",&saat);

		toplam = saat*gunluk;
		toplam = toplam*30;
		
	printf("�scinin 1 aylik ucreti %d'dir>>",toplam);
	return 0;
	
	
	
	
	
	
	
}
