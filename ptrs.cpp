#include<iostream>
using namespace std;
int main(){
    int a =8;

    int *ptr=&a;
    int &ref=a;
    cout<<a<<endl;
    cout<<ptr<<endl;
    cout<<ref<<endl;
    cout<<&ref<<endl;
    cout<<&a;


    return 0;
}