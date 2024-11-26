#include <stdio.h>

int main() {
	int tiengui, thanggui, phantram, tienlai, tiennhanduoc;
	
	printf("s? ti?n g?i ban dau la : ");
	scanf ("%d", &tiengui);
	printf("s? tháng g?i la : ");
	scanf ("%d", &thanggui);
	printf("ph?n tr?m lãi hàng tháng la : ");
	scanf ("%f", &phantram);
	
	
	tienlai = (phantram * thanggui) * tiengui;
	
	tiennhanduoc = tienlai + tiengui;

	
	printf (" tiên lãi là %.f :\n",tienlai);
	printf (" tiên nh?n ???c là %.f :\n",tiennhanduoc);
	    return 0;
}
