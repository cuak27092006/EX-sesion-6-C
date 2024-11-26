#include <stdio.h>

int main() {
    int so1, so2, so3, so4, so5; 
    int sochan = 0; 
    int sole = 0; 

    printf("Nh?p vào s? nguyên th? 1:");
    scanf("%d", &so1);
    printf("Nh?p vào s? nguyên th? 2:");
    scanf("%d", &so2);
    printf("Nh?p vào s? nguyên th? 3:");
    scanf("%d", &so3);
    printf("Nh?p vào s? nguyên th? 4:");
    scanf("%d", &so4);
    printf("Nh?p vào s? nguyên th? 5:");
    scanf("%d", &so5);
  
     
        if (so1 % 2 == 0) {
            sochan++; 
        } else {
            sole++; 
        }
         if (so2 % 2 == 0) {
            sochan++; 
        } else {
            sole++; 
        }
         if (so3 % 2 == 0) {
            sochan++; 
        } else {
            sole++; 
        }
         if (so4 % 2 == 0) {
            sochan++; 
        } else {
            sole++; 
        }
         if (so5 % 2 == 0) {
            sochan++; 
        } else {
            sole++; 
        }

    printf("S? lu?ng s? ch?n : %d\n", sochan);
    printf("S? lu?ng s? l? : %d\n", sole);

    return 0;
}
