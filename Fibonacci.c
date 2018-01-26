#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

void iterative(int n)
{
    int a=1;
    int b=1;
    int i;
    int sum=a+b;
    printf("\nFib Sum from iterative method : \n");
    int temp;
    for(i=0;i<n-3;i++){
        temp = sum+b;
        b=sum;
        sum=temp;
    }
        printf("%d ",sum);
}
int recursive(int n)
{
    if(n<=1){
        return n;
    }
    return recursive(n-1)+recursive(n-2);

}
void main()
{
    int n;
    printf("\nEnter a number\n");
    scanf("%d",&n);
    iterative(n);
    int sum = recursive(n);
    printf("\nFib Sum from recursive method : \n%d ",sum);

}
