#include<iostream>
#include<array>
using namespace std;
int main(){
    int n=5;
    int arr[10]={1,2,4,5,7};
    // int del;
    
    // cout<<"element to be deleter ";
    // cin>>del;
    // for (int i = del; i < n; i++)
    // {
        
    //         arr[i]=arr[i+1];
           
            
            
    //     }
       
    
    
    
    
























int pos;int elem;
    
    
    
    cout<<"enter the position where you want to enter the value"<<endl;
    cin>>pos;
    cout<<"enter the element you want to add"<<endl;
    cin>>elem;
    for (int i = n; i >= pos; i--)
    {
        arr[i]=arr[i-1];
        
    }
    arr[pos]=elem;
    for(int i=0;i<=5;i++){
        cout<<arr[i]<<endl;
    }
    
    return 0;
}