#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,7,7};
    int n=4;
    int dup=0;
    
    for(int i=0;i<n+1;i++,dup++){
        if(dup==arr[i]){
            cout<<"duplicate number is found at "<<i;
        }

        

    }
    return 0;
}