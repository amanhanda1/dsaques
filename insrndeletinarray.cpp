// #include<iostream>
// using namespace std;
// void display(int a[], int  n){
//     for (int i = 0; i < n; i++)
//     {
//         cout<<a[i]<<endl;
//     }
    
// }
// void insertionatend(int a[],int n,int x,int cap){
//     for(int i=0;i<=n+1;i++){
//         a[i]=x;
        

//     }
//     cout<<a[i];

// }
// int main(){
//     int j=4;
//     int cap=10;
//     int ins=7,index=4;
//     int a[10]={2,3,4,5};
  
//     display(a, j);
//     insertionatend(a,j,7,cap);
//     return 0;
// }
#include<iostream>
using namespace std;
int main()
{
    int arr[6], i, elem;
    cout<<"Enter 5 Array Elements: ";
    for(i=0; i<5; i++)
        cin>>arr[i];
    cout<<"\nEnter Element to Insert: ";
    cin>>elem;
    arr[i] = elem;
    cout<<"\nThe New Array is:\n";
    for(i=0; i<6; i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
    return 0;
}