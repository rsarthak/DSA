#include<iostream>
using namespace std;
int search(int a[],int n,int x){
for(int i=0;i<n;i++){
    if(a[i]==x)
    return 1;
}
return -1;
}

int main(){
int n,a[n],x;
cin>>n;
for(int i=0;i<n;i++){
    cin>>a[i];
}
cin>>x;
cout<<search(a,n,x);



}