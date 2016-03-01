#include <stdio.h>

int main()
{
    double sayi;
    printf("Faktoriyeli alinacak sayiyi giriniz:");
    scanf("%lf", &sayi);
    double toplam = 1, i;
    for(i = 1; i <= sayi; i++)
    {
        toplam *= i;
         printf("%.0f  %.0f \n", i, toplam);
    }
    
    getchar(); getchar();
}
