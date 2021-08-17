#include<iostream>
using namespace std;
int m(int a[],int n){
    int s=0;
for(int i=0;i<n;i++){
    s+=a[i];
}

return s;
}
int main(){
int n;
cout<<"enter number"<<endl;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
cout<<m(a,n);





}