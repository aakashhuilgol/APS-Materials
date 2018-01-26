#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
void normal(int a)
{
    int i;
    int flag = 0;
    printf("\nNormal Method\n");
    for(i=2;i<a/2;i++){
        if(a%i==0){
            printf("\nThe number is not prime\n");
            flag=1;
        }
    }
    if(flag==0){
        printf("\nThe number is prime\n");
    }
}
void sieve(int a)
{
    int i,j;
    int flag=0;
    printf("\nSieve Method\n");
    int* b =(int *)malloc(a*sizeof(int));
    memset(b, 0, a*sizeof(int));
    for(i=2;i<a/2;i++){
        if(b[i]!=0)
            continue;
        if(a%i!=0){
            for(j=i;j<a;j+=i){
                b[j]=1;
            }
        }
        else{
            printf("\nThis is not a prime number\n");
            flag=1;
        }
    }
    if(flag==0){
        printf("\nThis is a prime number\n");
    }

}
void main()
{
    int a;
    printf("\nEnter number to check if it is prime or not\n");
    scanf("%d",&a);
    normal(a);
    sieve(a);

}
