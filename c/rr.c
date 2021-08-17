#include<stdio.h>
int main(){
int i;
do{
    i=1800;
if(i%400==0 || i%4==0 && i%100!=0){
    printf("%d\n",i);
}
i++;


}while(i<=2000);





}