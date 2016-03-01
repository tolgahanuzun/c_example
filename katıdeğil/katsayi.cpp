#include<math.h>
#include<stdio.h>
int katiMi(int a, int b);
int main(void)
{
	int i,k,maxi;
	printf("Lutfen iki sayi girin.\n");
	scanf("%d %d",&i,&k);
	
	
	int kati_mi=katiMi(i,k);

    if(kati_mi==0)
 		printf("Katidir.\n");
 	else 
		 printf("Kati degil.\n");
getchar(); getchar();
}

int katiMi(int a, int b)
{
	int sonuc=0;
	
	
	
	if((b>=a) && ((fmod(b,a))==0))
	  sonuc=0;
	else
	    if((a>=b) && ((fmod(a,b))==0))
	    sonuc=0;
    else
	sonuc=1;	
	
	
	return sonuc;
}

