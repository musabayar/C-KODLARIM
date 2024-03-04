#include <stdio.h>

int main(){
    const double PI = 3.14159;
    double radius;
    double circumference;
    double area;
    printf("\n Dairenin yaricapini giriniz: ");
    scanf("%lf",&radius);
    circumference = 2 * PI * radius;
    area = PI * radius * radius;
    printf("\n Dairenin cevresi = %lf", circumference);
    printf("\n Dairenin alani = %lf", area);
    return 0;
}