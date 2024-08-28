#include<stdio.h>
void pyramid(int num){
	int i,j;
	for(i=0;i<num;i++)
	{
		for(j=0;j<num-i;j++)
		{
		
		printf(" ");
	}
	for(j=0;j<i;j++){
		printf("*");
	}
	for(j=0;j<i+1;j++){
	
	printf("*");
}
printf("\n");
}
}
void main(){
	int num;
	printf("Enter the no");
	scanf("%d",&num);
	pyramid(num);
}
