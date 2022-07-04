#include<iostream>
// #include<array>
#include<vector>
using namespace std;
int main(){
    // arrays
    // int basic[3]={1,2,3};
    // array<int,4> a ={1,2,3,4};
    // int size= a.size();

    // for(int i=0;i<size;i++){
    //     cout<<a[i]<<endl;
    // }
    // cout<<"element at a specific pos"<<a.at(3) <<endl;
    // cout<<"element at first pos"<<a.front()<<endl;
    // cout<<"element at last pos"<<a.back()<<endl;
    // cout<<"whether element is empty"<<a.empty()<<endl;
    // vectors
    vector<int> v;
    v.push_back(1);
    // its capacity always gets double whenever it is full
    cout<<v.size()    <<endl;
    cout<<v.capacity()<<endl;
    cout<<"before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();
    cout<<"after pop";
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    return 0;
}