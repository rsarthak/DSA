#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter number"<<endl;
cin>>n;
int s=0,r=0;
while(n>0){
r=n%10;
n=n/10;
if(r%2!=0){
    s+=r;
}



}
cout<<s<<endl;

}