#include <stdio.h>
int main()
{

    int a1 = 47;      // �nteger de�er girmek i�in kullan�l�r. (%d)
    char b1 = 'M';    // Char tek bir karakter girmek i�in kullan�l�r (%c)
    char b2 = 66;     // Asc�� kodunda 66 ya denk gelen karakter ekrana yaz�l�r.
    float c1 = 4.2;   // Ondal�kl� say�lar� yazmak i�in kullan�l�r. (%f)
    double d1 = 0.02; // Ondal�kl� say�lar� yazmak i�in kullan�l�r. (%f)

    printf("%d %d %c %.1f %.2f\n", a1, b1, b2, c1, d1); // ekrana yazd�rma komutu.

    printf("%d Byte \n", sizeof(int));    // �nt de�erinin ka� byte yer tuttu�unu ekrana yazd�r�r.
    printf("%d Byte \n", sizeof(double)); // Double de�erinin ka� byte yer tuttu�unu ekrana yazd�r�r.

    return 0;
}
