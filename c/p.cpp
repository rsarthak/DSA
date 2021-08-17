#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int a[5];
for(auto i=0;i<5;i++){
cin>>a[i];
}
sort(a,a+5);
int k;
cout<<"enter key"<<endl;
cin>>k;
bool c=binary_search(a,a+3,k);
if(c){
    cout<<"found";
}
else{
    cout<<"not found";
}


}