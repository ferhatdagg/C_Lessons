#include<stdio.h>
#include<locale.h>

int main(void)
{
	setlocale(LC_ALL, "Turkish");
	//float sayi1 = 12 , sayi2 = 5 , sonuc;
	//int sayi1 = 12 , sayi2 = 5 , sonuc;
	int sayi1 , sayi2 , sonuc;
	//sonuc = sayi1 + sayi2; //toplama
	printf("Say� 1 = ");
	scanf("%d", &sayi1);
	printf("Say� 2 = ");
	scanf("%d", &sayi2); 
	sonuc = sayi1 + sayi2;
	printf("%d ile %d say�lar�n�n toplam� = %d olur." , sayi1, sayi2 , sonuc);
	//printf("%.1f ile %.1f say�lar�n�n b�l�m� = %.5f olur." , sayi1, sayi2 , sonuc);
	//float floatSayi = 3.1;
	//printf("%.2f bizim say�m�zd�r.",floatSayi);
	
	//printf("%d bizim say�m�zd�r.",intSayi);
	//printf("hello world!");
	return 0;
}
