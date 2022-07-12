#include<iostream>
#include<array>
using namespace std;
int main(){
    int n=5;
    int arr[10]={1,2,4,5,7};
    int del;
    int cp;
    cout<<"element to be deleter ";
    cin>>del;
    for (int i = del; i < n; i++)
    {
        
            arr[i]=arr[i+1];
           
            
            
        }
       
    
    
    for(int i=0;i<6;i++){
        cout<<arr[i]<<endl;
    }
    
    
























// int pos;int elem;
    
    
    
    // cout<<"enter the position where you want to enter the value"<<endl;
    // cin>>pos;
    // cout<<"enter the element you want to add"<<endl;
    // cin>>elem;
    // for (int i = 4; i >= pos; i--)
    // {
    //     arr[i]=arr[i-1];
        
    // }
    // arr[pos-1]=elem;
    
    return 0;
}