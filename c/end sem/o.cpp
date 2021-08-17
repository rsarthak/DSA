#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
int main(){
//vector
vector<int>v={1,2,3,4};
v.push_back(6);
v.push_back(5);
print(v);
v.erase(v.begin()+2);
cout<<endl;
print(v);




}