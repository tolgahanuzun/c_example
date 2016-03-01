#include<stdio.h>
#include<math.h>
int main( void )
{
	int girilen,istenen;
	float a,b,c,u,alan,cevre;
	
 printf("Geometrik cismi belirleyiniz.\n Ucgen icin> 1 \n Dikdortgen icin> 2 \n Daire icin> 3 \n Bir sayi secin>>>");
 scanf("%d",&girilen);
			
			if(girilen == 1){
			
			printf("Ucgen icin alan degerini mi yoksa cevre degerinimi ogrenmek istiyorsunuz? \n Alan> 1 \n Cevre> 2 \n Bir sayi secin>>>");
			scanf("%d",&istenen);
				if(istenen == 1){
					printf("Ucgenin 3 kenarini belirleyin \n");
					scanf("%f",&a);
					scanf("%f",&b);
					scanf("%f",&c);
					if ( b<a+c && b>a-c && a<b+c && a>b-c  && c<b+a && c>b-a  ){
					
					u=(a+b+c)/2;
					alan =u*(u-a)*(u-b)*(u-c);
					alan =sqrt(alan);
					printf("Ucgenin alani %.2f dir ",alan); }
					
					else
					printf("Verilen degerlerde bir ucgen olmasi imkansizdir");
				}
				if(istenen == 2) {
				
					printf("Ucgenin 3 kenarini belirleyin \n");
					scanf("%f",&a);
					scanf("%f",&b);
					scanf("%f",&c);
					if ( b<a+c && b>a-c && a<b+c && a>b-c  && c<b+a && c>b-a  ) {
				
					u=(a+b+c);
						printf("Ucgenin cevresi %.2f dir ",u); }
						else
					printf("Verilen degerlerde bir ucgen olmasi imkansizdir");	
					
				}
	
	
}

			if(girilen == 2){
			
			printf("Dikdortgenin icin alan degerini mi yoksa cevre degerinimi ogrenmek istiyorsunuz?\n Alan> 1 \n Cevre> 2 \n \n Bir sayi secin>>>");
			scanf("%d",&istenen);
				if(istenen == 1){
					printf("Dikdortgen icin 2 kenarini belirleyin \n");
					scanf("%f",&a);
					scanf("%f",&b);
					
					alan=a*b;
			
					printf("Ucgenin alani %.2f dir ",alan); }
					
				if(istenen == 2) {
				
					printf("Dikdortgen icin 2 kenarini belirleyin \n");
					scanf("%f",&a);
					scanf("%f",&b);
						cevre=2*(a+b);
						printf("Ucgenin cevresi %.2f dir ",cevre);
					
				} }
	if(girilen == 3){
			
			printf("Daire icin alan degerini mi yoksa cevre degerinimi ogrenmek istiyorsunuz?\n Alan> 1 \n Cevre> 2 \n \n Bir sayi secin>>>");
			scanf("%d",&istenen);
				if(istenen == 1){
					printf("Daire icin yaricapi belirleyin \n");
					scanf("%f",&a);
					
				 	alan=3.1415*a*a;
			
					printf("Ucgenin alani %.2f dir ",alan); }
					
				if(istenen == 2) {
				
					printf("Daire icin yaricapi belirleyin \n");
					scanf("%f",&a);
					
						cevre=2*3.1415*a;
						printf("Ucgenin cevresi %.2f dir ",cevre);
					
				}
	
}
	
	

if (girilen > 3)
printf("Hata, Lutfen 1-2-3 sayilarindan birini secin");	
getchar(); getchar(); 
}
