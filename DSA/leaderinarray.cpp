#include<iostream>
using namespace std;
void leader(int a[],int n){
    int c=a[n-1];
    cout<<c<<" ";
    for(int i=n-2;i>=0;i--)
    {
if(c<a[i]){
    c=a[i];
    cout<<c<<" ";
}

    }
}
int main(){
int a[]={23,4,5,6,9,20,3,2};
int n=sizeof(a)/sizeof(a[0]);
leader(a,n);



}