#include <stdio.h>
int main(){
	int matkhau;
	printf(" Vui l�ng nh?p m?t kh?u :");
	scanf("%d", &matkhau);
	int pass=12345;
	if(matkhau == pass){
		printf("M?t kh?u ch�nh x�c : ");
	}else{
		printf("m?t kh?u kh�ng ch�nh x�c : ");
		}
	 return 0;
}
