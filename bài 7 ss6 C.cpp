#include <stdio.h>

int main() {
    int songuyen;

    printf("Nh?p m?t s? nguyên d??ng b?t kì : ");
    scanf("%d", &songuyen);


    printf("U?c c?a s? dã nh?p là: ");
    
    for (int i = 1; i <= songuyen; i++) {
        if (songuyen % i == 0) { 
            printf("%d ", i);
        }
    }

    printf("\songuyen");
    return 0;
}

