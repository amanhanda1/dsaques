#include<iostream>
using namespace std;
struct listnode{
int val;
listnode *next;
};
void deletion(listnode* node){
    if(node -> next==0){
        delete node;
    }
    else{
        swap(node->val,node->next->val);
        listnode* temp=node->next;
        node->next=temp->next;
        delete temp;
    }
}
void displayll(listnode* node){
    listnode* temp=node;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}

int main(){
    listnode* head=NULL;
    
    listnode* second=NULL;
    listnode* third=NULL;
    listnode* fourth=NULL;

    head=new listnode();
    second=new listnode();
    third=new listnode();
    fourth=new listnode();

    head->val =1;
    head->next =second;
    second->val =79;
    second->next =third;
    third->val =700;
    third->next =fourth;
    fourth->val=34;
    fourth->next=NULL;
    deletion(second);
    displayll(head);
    return 0;
}