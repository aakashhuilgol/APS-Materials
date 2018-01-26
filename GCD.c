#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
    int a,b;
    printf("\nEnter two numbers\n");
    scanf("%d%d",&a,&b);
    int i,max;
    if(a>b){
        for(i=1;i<=b;i++){
            if(a%i==0 && b%i==0){
                    max=i;
            }
        }
    }
    else{
        for(i=1;i<=a;i++){
            if(a%i==0 && b%i==0){
                    max=i;
            }
        }
    }
    printf("\nGCD : %d",max);
}
