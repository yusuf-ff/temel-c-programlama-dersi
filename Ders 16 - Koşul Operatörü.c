#include <stdio.h>
int main () {
	
	int sayi;
	
	printf("Sayi Giriniz : ");
	scanf("%d",&sayi);
	
	(sayi >= 10) ? printf("Sayiniz 10 A Esit Veya Buyuk"): printf("Sayiniz 10 dan Kucuk");
	
	return 0;
}
