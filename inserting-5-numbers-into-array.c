#include<stdio.h>
void main()
{ int arr[5];
printf("Enter 5 numbers: ");
for(int i=0;i<5;i++){
    scanf("%d",&arr[i]);
}
printf("5 numbers array are: ");
for(int j=0;j<5;j++){
    printf("%d ",arr[j]);
}
}