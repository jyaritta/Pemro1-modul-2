#include <stdio.h>
#include <math.h>

int main(){
int b, c, a;
scanf("%d %d", &b, &c);
a = sqrt(c*c - b*b);
printf("Alas = %d cm\nTinggi = %d cm\nKeliling = %d cm\nLuas = %d cm^2\n", a, b, a+b+c, (a*b)/2);

scanf("%d", &b);
scanf("%d", &c);
a = sqrt(c*c - b*b);
printf("Alas = %d cm\nTinggi = %d cm\nKeliling = %d cm\nLuas = %d cm^2\n", a, b, a+b+c, (a*b)/2);
return 0;
}