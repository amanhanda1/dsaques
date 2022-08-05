#include<iostream>
using namespace std;
struct listnode
{
    int val;
    listnode* node;
};
void displayll(listnode* node){
    listnode* temp=node;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp= temp->node;
    }

}

int main(){
    listnode* head=NULL;
    listnode* second=NULL;
    listnode* third=NULL;

    head=new listnode();
    second=new listnode();
    third=new listnode();

    head->val =1;
    head->node =second;
    second->val =79;
    second->node =third;
    third->val =700;
    third->node =NULL;
    displayll(head);
    return 0;
}