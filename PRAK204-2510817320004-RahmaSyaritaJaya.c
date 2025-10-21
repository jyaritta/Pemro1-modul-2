#include <stdio.h>
#define M_PI 3.14286

int main(){
    float r, t;
    scanf("%f", &r);
    scanf("%f", &t);
    printf("Volume = %.2f\nLuas = %.2f\nKeliling = %.2f\n", M_PI*r*r*t, (2*M_PI*r)*(r+t), 2*M_PI*r);
    
    scanf("%f %f", &r, &t);
    printf("Volume = %.2f\nLuas = %.2f\nKeliling = %.2f\n", M_PI*r*r*t, (2*M_PI*r)*(r+t), 2*M_PI*r);
    return 0;
}
