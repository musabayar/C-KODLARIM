#include<stdio.h>

int carpmaYap(int a,int b){
    int c;
    c = a*b;
    return c;
}
int main(int argc,const char * argv[]){
    int sayi1, sayi2, sonuc;
    printf("Carpma islemi icin iki sayi giriniz: ");
    scanf("%d %d",&sayi1, &sayi2);
    sonuc = carpmaYap(sayi1, sayi2);
    printf("Carpma islemi sonucu:%d\n", sonuc);
    return 0;
}