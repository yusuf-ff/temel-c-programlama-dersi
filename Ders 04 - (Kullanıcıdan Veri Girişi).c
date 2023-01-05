#include <stdio.h>
#define PI 3.14
int main (){
	
	int yaricap;
    float hacim ;
	
	printf("Kurenin Yaricapini Giriniz : ");
	scanf("%d",&yaricap); // Kullanıcıdan veri girişi almak için scanf kullanılır.
	
	hacim = (4/3.0)*PI*(yaricap*yaricap*yaricap);
	printf ("Kurenin Hacmi : %f" ,hacim);
	
	return 0;

	

	
}

