#include <stdio.h>
int main() {
	
	int i,sayi;
	gonder:
		printf("Deneme\n");
	for(i=0; i<=10; i++){
		
		printf("Sayi Giriniz : ");
		scanf("%d",&sayi);
		
		if(sayi == -1) {
			
			goto gonder;
		}
		
	}
	
}
