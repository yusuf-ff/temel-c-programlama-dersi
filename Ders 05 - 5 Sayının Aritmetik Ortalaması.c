# include <stdio.h>
int main () {
	
	int a,b,c,d,e;
	
	float aritmetik;
	
	printf("5 Sayi Giriniz :"); // 5 Sayının ortalamasını hesaplayan program.Sayılar arasında her boşluk farklı sayıyı temsil eder.
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	
	aritmetik = (a+b+c+d+e)/5;
	
	printf("Aritmetik Ortalama : %.2f" , aritmetik);
	
	return 0;	
	
	
}
