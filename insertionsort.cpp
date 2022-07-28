#include<iostream>
using namespace std;

void display(int A[]){
    for(int i=0;i<7;i++){
        cout<<A[i]<<" ";
    }

}


int main(){
    int A[7]={3,7,5,9,8,2,6};
    int n=7;
    for(int i=1;i<=n;i++){
        int temp=A[i];
        int j;
        for(j=i-1;j>=0;j--){
            if(A[j]>temp){
                A[j+1]=A[j];
            }
            else{
                break;
            }

        }
        A[j+1]=temp;
        
    }
display(A);
    
}