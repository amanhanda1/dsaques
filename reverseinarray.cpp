#include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[5]={1,2,3,4,7};
    int s=0;
    int e=n-1;
    for(s=0;s<e;s++,e--){
       swap(arr[s],arr[e]);
    }
    for(int i=0;i<n;i++){
        std::cout<<arr[i];
        }
    return 0;
}