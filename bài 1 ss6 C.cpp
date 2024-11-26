#include <stdio.h>

int main() {
    int so1, so2, so3, so4, so5;
    int tongcacsole = 0; 

    printf("Nh?p vào s? nguyên th? nh?t :");
    scanf ("%d", &so1);
    printf("Nh?p vào s? nguyên th? hai :");
    scanf ("%d", &so2);
    printf("Nh?p vào s? nguyên th? ba :");
    scanf ("%d", &so3);
    printf("Nh?p vào s? nguyên th? tu :");
    scanf ("%d", &so4);
    printf("Nh?p vào s? nguyên th? nam :");
    scanf ("%d", &so5);

        if (so1 % 2 != 0) {
            tongcacsole += so1;
        }
        if (so2 % 2 != 0) {
            tongcacsole += so2;
        }
        if (so3 % 2 != 0) {
            tongcacsole += so3;
        }
        if (so4 % 2 != 0) {
            tongcacsole += so4;
        }
		if (so5 % 2 != 0) {
            tongcacsole += so5;
        }
    
    printf("T?ng s? l? trong 5 s? dã nh?p là: %d\n", tongcacsole);

    return 0;
}
