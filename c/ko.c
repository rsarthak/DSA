#include<stdio.h>
int main(){
int n;
int i;
printf("enter the number\n");
scanf("%d",&n);
for( i=2;i<n;i++){
    if(n%i==0)
    printf("Not prime");
    break;
}
if(i==n)
printf("prime");




}