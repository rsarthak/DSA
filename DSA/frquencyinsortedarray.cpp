#include<iostream>
#include<unordered_map>
using namespace std;
void f(int a[],int n){
    unordered_map<int,int>m;
    for(int i=0;i<n;i++){
        m[a[i]]++;
    }
    for(auto x:m){
cout<<x.first<<" "<<x.second<<endl;
    }
}
int main(){
    int a[]={10,10,10,23,10,4};
    int n=sizeof(a)/sizeof(a[0]);
f(a,n);
}