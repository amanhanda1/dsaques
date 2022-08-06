#include<iostream>
using namespace std;
struct listnode
{
    int val;
    listnode* node;
};
// METHOD1
// void mid(listnode* node){
//     int n=0;
//     listnode* temp=node;
//     while(temp!=NULL){
//         n++;
//         temp= temp->node;
//     }
//     int half=n/2;
//     temp=node;
//     while(half--){
//         temp=temp->node;//node=next
        
//     }
//     cout<<temp->val;

// }
// method2
void mid(listnode* node){
    listnode *slow=node,*fast=node;
    while(fast!=NULL&&fast->node!=NULL){
        slow=slow->node;
        fast=fast->node->node;
    }
    cout<<slow;

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
    head->node =second;
    second->val =79;
    second->node =third;
    third->val =700;
    third->node =fourth;
    fourth->val=34;
    fourth->node=NULL;
    // mid(head);
    
    return 0;
}