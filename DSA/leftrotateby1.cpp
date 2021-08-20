#include<iostream>
using namespace std;
void rotate(int a[],int n){
int t=a[0];
for(int i=1;i<n;i++){
    a[i-1]=a[i];
    a[n-1]=t;
}

}
int main(){
int a[]={98,87,67,3,8};
int n=sizeof(a)/sizeof(a[0]);
rotate(a,n);
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}


}