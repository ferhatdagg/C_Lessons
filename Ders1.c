#include<stdio.h>
#include<locale.h>

int main(void)
{
	setlocale(LC_ALL, "Turkish");
	//float sayi1 = 12 , sayi2 = 5 , sonuc;
	//int sayi1 = 12 , sayi2 = 5 , sonuc;
	int sayi1 , sayi2 , sonuc;
	//sonuc = sayi1 + sayi2; //toplama
	printf("Sayý 1 = ");
	scanf("%d", &sayi1);
	printf("Sayý 2 = ");
	scanf("%d", &sayi2); 
	sonuc = sayi1 + sayi2;
	printf("%d ile %d sayýlarýnýn toplamý = %d olur." , sayi1, sayi2 , sonuc);
	//printf("%.1f ile %.1f sayýlarýnýn bölümü = %.5f olur." , sayi1, sayi2 , sonuc);
	//float floatSayi = 3.1;
	//printf("%.2f bizim sayýmýzdýr.",floatSayi);
	
	//printf("%d bizim sayýmýzdýr.",intSayi);
	//printf("hello world!");
	return 0;
}
