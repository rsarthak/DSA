#include<stdio.h>
int vo(char a[5],char ch){
for(int i=0;i<5;i++){
    if(ch==a[i])
return 1;
}
return 0;


}
int main(){
char a[5]={'a','e','i','o','u'};
int c[100]={0};
char ch;
do{
printf("enter characters\n");
scanf("%c",&ch);
for(int i=0;i<5;i++){
    if(ch==a[i])
c[i]++;
}
 int s;
 s=sizeof(c[100])/sizeof(c[0]);
 printf("%d",s);
}   
while(vo(a,ch));





}