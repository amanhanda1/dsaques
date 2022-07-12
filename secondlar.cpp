#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,4,5,6,7};
    int max=0;
    int n=5;
    int secmax=0;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            secmax=max;
            max=arr[i];

            }
            else{
                if(arr[i]>secmax&& arr[i]<max){
                    secmax=arr[i];

                }cout<<secmax;
            }
        }
    
    return 0;
}