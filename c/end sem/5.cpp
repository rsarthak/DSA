#include<iostream>
using namespace std;
int main(){
int m,n;
cout<<"enter the numbers"<<endl;
cin>>m>>n;
int f;
for(int i=m;i<n;i++){
    f=0;
    for(int j=2;j<i;j++){
        if(i%j==0)
        {
            f=1;
            break;
        }
    }
    if(f==0)
    cout<<i<<" ";
}






}