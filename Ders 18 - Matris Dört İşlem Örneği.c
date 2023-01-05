#include <stdio.h>
#include <conio.h>
int main() {

	int dizi1[2][2],dizi2[2][2],sonuc[2][2],a,b,islem; // Değişkenlerimizi Ve Dizilerimizi Oluşturuyoruz.
	
	gonder:
	printf("1) Toplama\n2) Cikarma\n3) Carpma\nYapilmak Istenen Islem : "); // Kullanıcıdan Yapmak İstediği İşlem İsteniyor.
	scanf("%d",&islem);
	
	if (islem<1 || islem>3) {  // Girilen İşlem Geçerlimi Geçersizmi Kontrol Edip geçersizse tekrar girmesini istiyoruz.
		printf("Girilen Deger Gecersizdir..\n");
		goto gonder;
	}
	
	for (a=0; a<2; a++) {

		for (b=0; b<2; b++) {
	
		printf("Birinci Matris Degerlerini Giriniz [%d][%d] :",a, b);
		scanf("%d",&dizi1[a][b]);
	
			}	}
			
			printf ("*************************************************\n");
			
	for (a=0; a<2; a++) {

		for (b=0; b<2; b++) {
	
		printf("Ikinci Matris Degerlerini Giriniz [%d][%d] :",a, b);
		scanf("%d",&dizi2[a][b]);
	
			}	}
			
			
				for (a=0; a<2; a++) {

		for (b=0; b<2; b++) {
	
		if(islem == 1 ) {
			sonuc[a][b] = dizi1[a][b] + dizi2[a][b];
		}
		else if (islem == 2) {
			sonuc[a][b] = dizi1[a][b] - dizi2[a][b];
		}
		else if (islem == 3) {
			sonuc[a][b] = dizi1[a][b] * dizi2[a][b];
		}
		
			}	}
		
					for (a=0; a<2; a++) {

		for (b=0; b<2; b++) {
	
		printf("%d ", sonuc[a][b]);
	
			} printf("\n");	
		}

	
	return 0 ;
	
}

