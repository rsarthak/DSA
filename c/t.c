#include<stdio.h>
int main(){
int n;
int c=0;

printf("enter the numbers\n");
while(n*n<1000){
scanf("%d",&n);

printf("%d\n",n*n);

if(n*n>1000)
printf("you have enter a big number\n");

}







}