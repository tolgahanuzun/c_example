#include <stdio.h>

int main()
{
    int sayi;
    printf("sayi gir");
    scanf("%d", &sayi);
    int toplam, i,k,l;
    for(i = 1; i <= sayi; i++)
    {
         for(k = 1; k <= sayi; k++) {
         
         	for(l = 1; l <= sayi; l++) {
         
         
        			 if(  (l*l)==( (i*i)-(k*k) ) ) {
        			 printf("%d  %d  %d\n", k, l, i);
					 
					  }
         }
         
     }
    }
    
    getchar(); getchar();
}
