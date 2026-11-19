#include<stdio.h>
int main(){
    int n,i,c=0,sum=0;
    float avg=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    if (arr[i]%3==0 && arr[i]%2==0){
        sum = sum+arr[i];
        c++;}
    }
    avg=(float)(sum/c);
    printf("average of no. divisible by 3= %.2f",avg);
}