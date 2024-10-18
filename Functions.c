// C functions
/*
Name : Owaya E Augustine
REG  : CT101/G/23524/24
Date : 15/10/24
*/
#include <stdio.h>
#include <math.h>

int sum(int x,int y,int z);
int multiplication(int a,int b);

int main(int argc, char** argv)
{
	int x,y,z,a,b,c;
	printf("Enter 3 values: ");
	scanf("%d%d%d",&a,&b,&c);
	x = sum(a,b,c);
	y = sum(100,200,300);
	z = multiplication(a,c);
	
	printf("The sum is %d\n",x);
	printf("The 2nd sum is %d\n",z);
	printf("The multi is %d\n",y);
	
	return 0;
}

int sum(int x,int y,int z){
	int result;
	result = x + y + z;
	return result;
}
int multiplication(int a,int b ){
	int result;
	result = a * b;
	return result;
}