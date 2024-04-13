#include<stdio.h>
int main(){
    int n, i, space ,symbol,row;
    printf("enter the number of rows:\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        for(space=1; space<=(n-i); space++){
            printf(" ");
        }
        for(symbol=1; symbol<=(2*i-1); symbol++){
            printf("2 ");
        }
        printf("\n");
    }
    return 0;
} 
