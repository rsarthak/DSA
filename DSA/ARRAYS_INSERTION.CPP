#include<iostream>
using namespace std;

int main(){
int n,a[n],x;
cin>>n;
for(int i=0;i<n;i++){
    cin>>a[i];

}
cin>>x;
int pos;
cin>>pos;
int idx=pos-1;
for(int i=n-1;i>=idx;i--){
a[i+1]=a[i];
a[idx]=x;
}
cout<<sizeof(a)/sizeof(a[0]);



}
