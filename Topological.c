#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct stack{
    int data[6];
    int top;
};
void push(struct stack * s1,int data){
    s1->data[++s1->top]=data;
}
void check(int checksum[6],struct stack *s1){
    int i;
    for(i=0;i<6;i++){
        if(checksum[i]==0){
            push(s1,i);
            checksum[i]=-1;
        }
    }
}
void main()
{
    int grid[6][6];
    int checksum[6];
    int i,j,sum=0;
    for(i=0;i<6;i++){
        memset(grid[i],0,sizeof(grid[0]));
    }
    grid[0][2]=1;
    grid[0][3]=1;
    grid[1][3]=1;
    grid[1][4]=1;
    grid[2][3]=1;
    grid[2][5]=1;
    grid[3][5]=1;
    grid[4][5]=1;
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            sum=sum+grid[j][i];
        }
        checksum[i]=sum;
        sum=0;
       // printf("%d",checksum[i]);
    }
    struct stack *s1 = (struct stack *)malloc(sizeof(struct stack));
    s1->top=-1;
    check(checksum,s1);
    while(s1->top!=-1){
        int val=s1->data[s1->top];
        printf("%d ",val);
        s1->top--;

        for(i=0;i<6;i++){
            if(grid[val][i]==1){
                checksum[i]-=1;
            }
        }
        check(checksum,s1);
    }


}
