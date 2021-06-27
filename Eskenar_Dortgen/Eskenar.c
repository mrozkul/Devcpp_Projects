#include<stdlib.h>
#include<stdio.h>

/* C programlama dilinde eþkenar dörtgen yapýlýþý */

int main()
{
	
	while(1)
	{
		
		int uzunluk,i,j=1,k,a,b;
	printf("Hosgeldin. Uzunluk gir = ");
	scanf("%d",&uzunluk);
	printf("\n\n");
	b=1;
	
	for(i=0;i<uzunluk;i++)
	{
		
		for(k=0;k<uzunluk-b;k++)
		{
			printf(" ");
		}
		b++;
			if(j==1)
			{
				printf("*");
			}
			else
			{
				 for(a=1;a<=j;a++)
			{
				printf("*");	
			}
			}
		printf("\n");
		j+=2;
	}
	k=1;
	j-=4;
	for(i=1;i<uzunluk;i++)
	{
		for(b=0;b<k;b++)
		{
			printf(" ");
		}
		for(a=0;a<j;a++)
		{
			printf("*");
		}	
		j-=2;
		k++;
		printf("\n");
	}
	

printf("\n\n");
}

}
	

/*

       *
      ***
     *****
	*******
   *********
  ***********
 *************
***************
 *************
  ***********
   *********
   	*******
	 *****
	  ***
	   *
	   
*/
