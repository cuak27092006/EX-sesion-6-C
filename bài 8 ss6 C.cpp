#include <stdio.h>

int main() {
	int tiengui, thanggui, phantram, tienlai, tiennhanduoc;
	
	printf("s? ti?n g?i ban dau la : ");
	scanf ("%d", &tiengui);
	printf("s? th�ng g?i la : ");
	scanf ("%d", &thanggui);
	printf("ph?n tr?m l�i h�ng th�ng la : ");
	scanf ("%f", &phantram);
	
	
	tienlai = (phantram * thanggui) * tiengui;
	
	tiennhanduoc = tienlai + tiengui;

	
	printf (" ti�n l�i l� %.f :\n",tienlai);
	printf (" ti�n nh?n ???c l� %.f :\n",tiennhanduoc);
	    return 0;
}
