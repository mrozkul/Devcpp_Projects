#include<stdlib.h>
#include<stdio.h>

/*C dili ile T.C. kimlik numaramýzýn son 2 hanesini bulmak*/
int a,b,c,d,e,f,g,h,j,sonuc0,sonuc1,sonuc3;
int main()
{
	printf("Tc kimlik numaranizin ilk 9 hanesini giriniz..\n\n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	scanf("%d",&d);
	scanf("%d",&e);
	scanf("%d",&f);
	scanf("%d",&g);
	scanf("%d",&h);
	scanf("%d",&j);
	
	printf("Tc numaranizin ilk 9 hanesini girdiniz.\n\n");
	
	sonuc0 = (a+c+e+g+j)*7;
	sonuc0 = sonuc0%10;
	sonuc1 = (b+d+f+h)*9;
	sonuc1 = sonuc1%10;
	sonuc3 = (sonuc0+sonuc1);
	sonuc3 = sonuc3%10;
	
	sonuc0 = (a+b+c+d+e+f+g+h+j+sonuc3);
	sonuc0 = sonuc0%10;
	
	printf("Tc kimlik numaranizin tamami = ");
	
		printf("%d",a);
		printf("%d",b);
		printf("%d",c);
		printf("%d",d);
		printf("%d",e);
		printf("%d",f);
		printf("%d",g);
		printf("%d",h);
		printf("%d",j);
		printf("%d",sonuc3);
		printf("%d",sonuc0);
		
	
	
	return 0;
}
