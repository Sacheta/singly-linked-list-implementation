//linked list implementation 20/10/2020

#include<iostream>
using namespace std;

class node{
public:
    int data;
    node *next;
};

int main(){
    node *head=nullptr;
    node *ptr;
    for(int i=1;i<2;++i){
            node *p;
            p->data=5;
            p->next=nullptr;

            if(head==nullptr){
                head=p;
            } else{
                ptr->next=p;
            }
            ptr=p;
    }
   ptr=head;
   // cout<<head->data;
    while(ptr->next!=nullptr){
       cout<<ptr->data;
        ptr=ptr->next;
    }
}
