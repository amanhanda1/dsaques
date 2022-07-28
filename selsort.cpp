#include<iostream>
using namespace std;
void display(int a[]){
    for(int i=0;i<7;i++){
        cout<<a[i];
    }


}
int main(){
    int arr[7]={7,5,4,3,2,4,1};
    int n=7;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                swap(arr[j],arr[i]);
            }
        }
    }
    
    display(arr);
}