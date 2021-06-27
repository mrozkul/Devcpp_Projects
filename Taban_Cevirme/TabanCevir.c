#include<stdio.h>
#include<stdlib.h>

/*Disaridan girilen 10luk tabandaki bir sayiyi
2lik sayi sistemine ceviren program */
char binary[];
int main()
{
	int i,sayi,bolum;
	printf("Sayi giriniz = ");
	scanf("%d",&sayi);
	for(i=0;i<16;i++)
	{
		binary[i] = sayi%2;
		sayi/=2;
	}
	
	for(i=15;i>=0;i--)
	{
		printf("%d",binary[i]);
	}
	return 0;
}
