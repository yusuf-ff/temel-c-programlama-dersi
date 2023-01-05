#include <stdio.h>
int main() {
	
	int ilksayi=0,ikincisayi=1,i,son;
	
	printf("0 - 1 -");
	
	for(i=0; i<=15; i++){
		
	   son = ilksayi+ikincisayi;

		ilksayi = ikincisayi; 
		
		ikincisayi = son ;
		
		printf("%d - ",son);

}
	
	return 0;


}

