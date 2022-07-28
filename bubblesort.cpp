#include<iostream>
using namespace std;

void display(int A[]){
    for(int i=0;i<7;i++){
        cout<<A[i]<<" ";
    }

}
int main(){
    int A[7]={5,4,7,3,8,2,1};
    int n=7;
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(A[j]>A[j+1]){
                swap(A[j],A[j+1]);
            }
        }
    }
display(A);


}