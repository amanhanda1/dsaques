#include<iostream>
#include<stack>

using namespace std;
class stk{
    private:

    int A[11];
    int top=-1;
    int total=0;
    public:
    void push(int n){
        top++;
        A[top]=n;
        total++;

    }
    void pop(){
        if(top==-1){
            cout<<"no element in stack";
        }
        else{
            top--;
            total--;
            }
        
    }
    void topelem(){
        cout<<A[top]<<endl;
    }
    void display(){
        for(int i=0;i<=total;i++){
            cout<<A[i]<<" ";


        }


    }



};
int main(){
    stk st;
    st.push(2);
    st.push(5);
    st.push(7);
    st.push(8);
    st.push(9);
    st.pop();
    st.display();
    return 0;
}