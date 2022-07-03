#include<iostream>
using namespace std;
int main(){
    int  n=10;int l=0;int h=9;int mid;
    // for binary search elements in arrays must be sorted
    int A[10]={2,3,4,5,6,7,8,9,10,16};
    int key=10;
    while (l<=h)
    {
        mid=(l+h)/2;
        if(A[mid]==key){
            cout<<"key is found at "<<mid;
            return 0;
        }
        else if (A[mid]>key)
        {
            h=mid-1;
        }
        else
        {
            l=mid +1;
        }
        
        
    }
    cout<<"not found";
    

    return 0;}
