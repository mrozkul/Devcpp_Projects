#include <stdio.h>
#include <stdlib.h>

/* C programlama dilinde void kullanarak a üzeri b iþlemi yapmak
(void kullanarak üs almak)*/

void us_alma(int a, int b);
	int a,b,c,sonuc;
	
int main() {

	
	while(1)
	{
		printf("Hosgeldin..\n\nTaban sayiyi gir = ");
		scanf("%d",&a);
		printf("\nUs sayisini gir = ");
		scanf("%d",&b);
		printf("\n");
		us_alma(a,b);
		
		printf("Sonucunuz = %d\n--------------------------\n",sonuc);
		
	}
	
	return 0;
}

void us_alma(int a , int b)
{
	int i;
	c=1;
	for(i=1;i<=b;i++)
	{
		c = a*c;
		sonuc = c;	
	}
}



