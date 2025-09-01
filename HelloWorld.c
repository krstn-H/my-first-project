#include <stdio.h>
int main () {
    float panjang;
    float lebar;
    float luas;
    printf("Tuliskan panjang persegi: ");
    scanf("%f", &panjang);
    printf("Tuliskan lebar persegi: ");
    scanf("%f", &lebar);
    luas = panjang * lebar;
    printf("Luas persegi panjang adalah: %.2f", luas);
    return(0);
} 