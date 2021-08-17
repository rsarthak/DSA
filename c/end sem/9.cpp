#include<iostream>
using namespace std;
int main(){
    int n;
    int a[n];
    cout<<"enter number"<<endl;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>a[i];}
        int k;
    
    cout<<"enter key"<<endl;
    cin>>k;
    for(int i=0;i<n;i++){
       if(a[i]==k){
           cout<<"key is found at "<<i<<endl;
       }
    }
    if(a[n]==k)
    cout<<"key not found"<<endl;
}