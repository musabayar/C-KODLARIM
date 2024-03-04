#include <stdio.h>
#include <math.h>
int main()
{
    printf("Ucgenin hipotenusunu hesaplama kodu-musa\n");
    double A;
    double B;
    double C;
    printf("\n A kenarini giriniz ");
    scanf("%lf",&A);
    printf("\n B kenarini giriniz ");
    scanf("%lf",&B);
    C = sqrt(A*A + B*B);
    printf("C kenarinin uzunlugu = %.2lf", C);
    return 0;
}