#include <stdio.h>

int main()
{
    int sayi;
   
    printf("Max Celcius degerini belirleyin. 20'ser olarak maximum sayiya\nkadar olan Fahrenheit degerini bulabilirsiniz>> ");
    scanf("%d", &sayi);
    int toplam = 1;
    int c,i;
    for(i=0; i <= sayi; i+=20)  /* i say�s� Celcius de�erini temsil ediyor.   */
    {
        toplam *= i;
        
      	c=(9*i+160)/5; /* Ben bildi�imiz formulu kar��ya ta��d�m. Di�er t�rl� olunca s�k�nt� ��k�yor. S�ralan��tan dolay� galiba.Farkl� yapt���m hi�bir�ey yok,
		  tamamen matematiksel olarak formul� d�zenledim.   */
	    
         printf("%d  %d \n", i, c);  
    }
    
   getchar(); getchar();
} 


