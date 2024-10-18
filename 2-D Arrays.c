//2-D Arrays
/*
Name : Owaya E Augustine
REG  : CT101/G/23524/24
*/
#include <stdio.h>
int main(){
	int i,j;
	int marks [2][3] ={{10,20,30},{90,80,70}};
	for (i=0;i<2;i++){
		for (j=0;j<3;j++){
			printf("marks[%d][%d]=%d\n",i,j,marks[i][j]);
		}
	}
	return 0;
}