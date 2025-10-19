#include <stdio.h>

int main(){
    float a, b;
    printf("Masukkan Nilai Pertama : ");
    scanf("%f", &a);
    printf("Masukkan Nilai Kedua : ");
    scanf("%f", &b);
    printf("Hasil dari penjumlahan  nilai pertama \"%g\" dan nilai kedua \"%g\" adalah \"%.2f\"", a, b, a+b);
    return 0;
}