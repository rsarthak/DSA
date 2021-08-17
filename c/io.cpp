#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter "<<endl;
cin>>n;
int s=0;
while(n>0){
s+=(n%10);
n=n/10;




}int l=0;
if(s>10){
    while(s>0){
l+=s%10;
s/=10;
 }
 cout<<l;
}
else
cout<<s;
}