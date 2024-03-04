#include <stdio.h>
int main()
{
    char operator;
    double num1;
    double num2;
    double result;
    printf("\n hangi islemi yapmak istiyorsun? (+ - * /): ");
    scanf("%c", &operator);
    printf("\n 1. sayiyi giriniz: ");
    scanf("%lf", &num1);
    printf("\n 2. sayiyi giriniz: ");
    scanf("%lf", &num2);
    switch (operator)
    {
        case '+':
        result=num1+num2;
        printf("\n sonuc = %.2lf",result); //.2lf diyerek noktadan sonra 2 basamak olması saglandı
        break;
        case '-':
        result=num1-num2;
        printf("\n sonuc = %.2lf",result);
        break;
        case '*':
        result=num1*num2;
        printf("\n sonuc = %.2lf",result);
        break;
        case '/':
        result=num1/num2;
        printf("\n sonuc = %.2lf",result);
        break;
        default:
        printf("\n gecerli bir islem degil!",operator);
        break;
    }
}