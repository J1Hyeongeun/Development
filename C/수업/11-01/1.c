#include<stdio.h>
int main(){
	int aa[3][4];
	int i, k;

	int val = 1;
	
	for(i=0; i<3; i++){
		for(k=0; k<4; k++){
			aa[i][k] = val;
			val++;
		}
	}
	printf("aa[0][0]부터 aa[2][3]까지 출력\n");
	return 0;
}
