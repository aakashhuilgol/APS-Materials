//Insertion Sort
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

void bubble(int * arr, int n)
{
    int * ar = arr;
    int i,j;
    for(i=0;i<=n-2;i++)
    {
        for(j=0;j<=n-2-i;j++){
            if(ar[j+1]<ar[j])
            {
                int temp = ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
            }
        }
    }
    printf("\nThe sorted array from Bubble is : ");
    for(i=0;i<n;i++){
        printf("%d ",ar[i]);
    }
}

void selection(int *arr,int n)
{
   int * ar = arr;
   int i,j;
   for(i=0;i<=n-2;i++){
        int min=i;
        for(j=i+1;j<=n-1;j++){
            if(ar[j]<ar[min]){
                min=j;
            }
        }
        int temp = ar[i];
        ar[i]=ar[min];
        ar[min]=temp;
   }
   printf("\nThe sorted array from Selection is : ");
    for(i=0;i<n;i++){
        printf("%d ",ar[i]);
    }
}

void insertion(int *arr,int n)
{
   int * ar = arr;
   int i,j;
   for(i=1;i<=n-1;i++){
    int v = ar[i];
    j=i-1;
    while(j>=0&&ar[j]>v){
        ar[j+1] = ar[j];
        j=j-1;
    }
    ar[j+1]=v;
   }
   printf("\nThe sorted array from Insertion is : ");
    for(i=0;i<n;i++){
        printf("%d ",ar[i]);
    }
}

void main()
{
    int n,i;
    int * arr;
    printf("\nEnter the number of elements : ");
    scanf("%d",&n);
    arr = (int *)malloc(n*sizeof(int));
    printf("\nEnter the elements of the array\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bubble(arr,n);
    insertion(arr,n);
    selection(arr,n);
}
