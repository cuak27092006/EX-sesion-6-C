#include <stdio.h>
int main(){
	int matkhau;
	printf(" Vui lòng nh?p m?t kh?u :");
	scanf("%d", &matkhau);
	int pass=12345;
	if(matkhau == pass){
		printf("M?t kh?u chính xác : ");
	}else{
		printf("m?t kh?u không chính xác : ");
		}
	 return 0;
}
