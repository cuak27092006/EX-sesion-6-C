#include <stdio.h>

int main() {
    int songuyen;

    printf("Nh?p m?t s? nguy�n d??ng b?t k� : ");
    scanf("%d", &songuyen);


    printf("U?c c?a s? d� nh?p l�: ");
    
    for (int i = 1; i <= songuyen; i++) {
        if (songuyen % i == 0) { 
            printf("%d ", i);
        }
    }

    printf("\songuyen");
    return 0;
}

