#include <stdio.h>
int main () {
	
	int Sayi;
	
	printf("Sayi Giriniz : ");
	scanf("%d",&Sayi);
	
	do {
		
		printf("%d - ",Sayi);
		Sayi--;
	}
	
	while (Sayi > 0);
	
	printf("Program Sonlandi...");
	
	return 0;
}
