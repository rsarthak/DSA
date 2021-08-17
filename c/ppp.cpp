#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
vector<int>v;
cout<<"enter"<<endl;
for(int i=0;i<5;i++){
    int n;
    cin>>n;
    v.push_back(n);
}
vector<int>::iterator it=v.begin();
v.sort();
for(int i=0;i<v.size();i++){
cout<<v[i]<<" ";
}




}