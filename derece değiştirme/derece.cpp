#include <stdio.h>

int main()
{
    int sayi;
   
    printf("Max Celcius degerini belirleyin. 20'ser olarak maximum sayiya\nkadar olan Fahrenheit degerini bulabilirsiniz>> ");
    scanf("%d", &sayi);
    int toplam = 1;
    int c,i;
    for(i=0; i <= sayi; i+=20)  /* i sayýsý Celcius deðerini temsil ediyor.   */
    {
        toplam *= i;
        
      	c=(9*i+160)/5; /* Ben bildiðimiz formulu karþýya taþýdým. Diðer türlü olunca sýkýntý çýkýyor. Sýralanýþtan dolayý galiba.Farklý yaptýðým hiçbirþey yok,
		  tamamen matematiksel olarak formulü düzenledim.   */
	    
         printf("%d  %d \n", i, c);  
    }
    
   getchar(); getchar();
} 


