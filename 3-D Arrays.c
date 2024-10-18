//3D -Arrays
/*
Name : Owaya E Augustine
REG  : CT101/G/23524/24
*/
#include <stdio.h>
int main(){
	int i,j,k;
	int marks [2][2][3]={{{10,20,30},{40,50,60}},{{90,80,70},{60,50,40}}};
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			for(k=0;k<3;k++){
				printf("marks[%d][%d][%d]= %d\n",i,j,k,marks[i][j][k]);
			}
		}
	}
	return 0;
}