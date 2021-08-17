#include<iostream>
using namespace std;

int fa(int c){
    if(c==0)
        return 1;
    return c*fa(c-1);
}
int main(){

int n;
cin>>n;
int p=1,c,f=0;
for(int i=0;i<=n;i++){

while(i>0){
p=p*(i%10);
n=n/10;
c++;
}
if(p>=fa(c))
    f++;
 

}

cout<<f;











}