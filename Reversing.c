#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
void main()
{
    int a;
    printf("Enter a number to reverse : \n");
    scanf("%d",&a);
    int b,c=0;
    while(a!=0){
        b=a%10;
        c=c*10+b;
        a=a/10;
    }
    printf("\nThe reversed number is : %d",c);
}
