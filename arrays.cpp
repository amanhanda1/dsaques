#include<iostream>
using namespace std;
int main(){
 
    
int A[10]={2,4,6,8,12,3,5,7,9};
int key;
 cout<<"Enter a Key element ";
 cin>>key;
for(int i=0;i<10;i++)
 {
 if(key==A[i])
 {
 cout<<"The Key element is found at "<<i<<endl;
 exit(0);
 }
 }
 cout<<"Key element not found"<<endl;
    // int A[6]={5,7,8,9,16,20};
    // int key=16;int n;
    // for (int i = 0; i < n; i++){
    //     cout<<"ask for a element";
    //     cin>>A[i];
    // }
   
    
    // for (int i = 0; i < n; i++)
    // {
    //     if(A[i]==key){
    //         cout<<"element is found at index "<<i;
    //     }
    // }
    
    // for(int i=0;i<n;i++){
    //     sum=sum+A[i];
    // }
    // cout<<"sum of the arrays is "<<sum;
    // int max=A[0];int n=7;
    // for(int i = 1;i<n;i++){
    //     if(A[i]>max){
    //         max = A[i];
    //     }
    // }
    // cout<<"maximum number is "<<max;

    return 0;
}