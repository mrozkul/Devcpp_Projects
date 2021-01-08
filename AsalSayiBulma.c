#include <stdio.h>
#include <conio.h>
			
/* 
* Emre ÖZKUL - Asal sayi bulma programi
*
* Girilen sayi asalsa ekrana yazilir.Degilse en yakin asal sayi bulunur. 
*
* Eger asal sayilarin farklari birbirine esitse buyuk olan asal sayi alinir.
*/
			
			int main()
			{
			int sonucx,sonucy,sayi,i,j,num;
			
			sonucx = sonucy = 0;
			
			while(1)
			{
			printf("---------10'dan Buyuk Asal Sayilari Bulma Programi---------\n\n");
			printf("---Girilen deger asal degilse oncelik buyuk asal sayidadir---\n\n");
			printf("0-Ekrani Temizle\n1-Programi Calistir\n2-Programi Sonlandir\n\n");		
			printf("Seciminiz = ");
			scanf("%d",&j);
			
			
			switch(j)
			{
			case 1:
				printf("\nSayi giriniz = ");
			    scanf("%d", &sayi);
			    printf("---------------------\n\n");
			
			if((sayi%2 == 0) || (sayi%3 == 0) || (sayi%5 == 0) || (sayi%7 == 0))
			{
				printf("Sayiniz asal degil.\nEn yakin asal sayiyi bulalim.\n\n");
				printf("---------------------\n\n");
				i = sayi;
				num = sayi;
			while(sayi--)
			{   	
				if((sayi%2 == 0) || (sayi%3 == 0) || (sayi%5 == 0) || (sayi%7 == 0))
				{}
			
				else
				{
				sonucx = sayi;
				break;
				}			
			}
			
			while(i++)
			{
				if((i%2 == 0) || (i%3 == 0) || (i%5 == 0) || (i%7 == 0))		
				{}
			else
				{
				sonucy = i;
				break;
				}	
			}
			
			if((num-sonucx) == (-(num-sonucy)))
			{
				printf("2 Asal Sayida Birbirine Esit.\n\n");
			}
			else if((num-sonucx)>=(-(num-sonucy)))
			{
				i = sonucy;
			}
			
			else
				{
					i = sonucx;
				}
				
				
				printf("Girilen sayidan kucuk asal sayi %d",sonucx);
				printf(" , Buyuk asal sayi ise %d\n\n",sonucy);
				printf("En yakin asal sayi degeri = %d\n\n",i);		
		
			}
			
			else
			{
			printf("Tebrikler! Asal sayi girdiniz..\n\n");
			}
			
			break;
			
			case 2:
			return 0;
			break;
			
			case 0:
			system("cls");
			break;
			default:
			printf("Yanlis bir deger girdiniz...\n\n");
			break;
			}
			}
}
