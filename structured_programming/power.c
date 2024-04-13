#include<stdio.h>
#include<math.h>
int main(){
	int x,y;
	printf("enter the values of x and y\n");
	scanf("%d %d",&x,&y);
	if(y<0){
	return -1;
	}
	printf("%f",pow(x,y));
	return 0;
	
}
