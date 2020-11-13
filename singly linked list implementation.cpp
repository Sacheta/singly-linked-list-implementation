#include<iostream>
using namespace std;


class node{
public:
    node *next;
    int info;
};

node *head=nullptr;
void sel(void);
void create(void);
void infront();
void inmid(void);
void inend(void);
void delfront(void);
void delmid(void);
void delend(void);
void display(void);

void sel(){
    int n;
    cin>>n;
    switch(n){
    case 1:
        create();
        break;
    case 2:
        infront();
        break;
    case 3:
        inmid();
        break;
    case 4:
        inend();
        break;
    case 5:
        delfront();
        break;
    case 6:
        delmid();
        break;
    case 7:
        delend();
        break;
    default:
        display();
        exit(0);
    }
}

void display(void){
    cout<<"\n----------------------------------------"<<endl;
    if(head==nullptr)
        cout<<"Emptyyyyyyyyyyyy!!!!!!!!!!!"<<endl;
    else{
        node *ptr=head;
        while(ptr!=nullptr){
            cout<<ptr->info<<"\t";
            ptr=ptr->next;
        }
        cout<<endl<<"----------------------------------------"<<endl;
    }
}

void create(void){
    if(head!=nullptr){
    cout<<"Already created!"<<endl;
    return;}
    cout<<"Adding first element--"<<endl;
    node *ptr;
    ptr= new node;
    cout<<"Enter data Value: ";
    cin>>ptr->info;
    ptr->next=nullptr;
    head=ptr;
    display();
    sel();
}

void infront(void){
    if(head==nullptr){
        create();
        return;
    }
    node *ptr;
    ptr= new node;
    cout<<"Enter Data part: "<<endl;
    cin>>ptr->info;
    ptr->next=head;
    head=ptr;
    display();
    sel();
    }

void inmid(void){
    if(head==nullptr){
        cout<<"List is empty"<<endl;
        return;
    }
    cout<<"Enter after which value to insert: ";
    int n;
    cin>>n;
    node *ptr=head;
    while(ptr->info!=n){
        ptr=ptr->next;
    }
    node *temp;
    temp=new node;
    cout<<"Enter info part: ";
    cin>>temp->info;
    temp->next=ptr->next;
    ptr->next=temp;
    display();
    sel();
}

void inend(void){
    node *ptr;
    ptr=head;
    while(ptr->next!=nullptr){
        ptr=ptr->next;
    }
    node *temp;
    temp=new node;
    cout<<"Enter the info part: ";
    cin>>temp->info;
    temp->next=nullptr;
    ptr->next=temp;
    display();
    sel();
}

void delfront(){
    if(head==nullptr){
        cout<<"EMptyrerufy alreadyyyyyy!!!!!!!!!!!!!"<<endl;
        return;}
    head=head->next;
    cout<<"Element deleted!"<<endl;
    display();
    sel();

}

void delmid(){
    int n;
    node *ptr;
    cout<<"Enter info of element to be deleted!"<<endl;
    cin>>n;
    while(ptr->info!=n){
            ptr=ptr->next;
    }
    if(ptr==nullptr){
        cout<<"Not found"<<endl;
        return;}
    ptr=ptr->next;
    cout<<"element deleted"<<endl;
    display();
    sel();
}

void delend(){
    node *ptr;
    ptr=head;
    while(ptr->next!=nullptr)
        ptr=ptr->next;
    ptr=nullptr;
    cout<<"element deleted!"<<endl;
    display();
    sel();}

int main(){
    cout<<"HEYAAAAAAAAAAAAAAAAAAAAAAAAA, IS IMPLEMENTATION OF LINKED LIST, SINGLYYYYY"<<endl;
    cout<<"CHOOSE: "<<endl;
    cout<<"1. Create list"<<endl;
    cout<<"2. Insert in front"<<endl;
    cout<<"3. Insert in middle"<<endl;
    cout<<"4. Insert at end"<<endl;
    cout<<"5. Delete from start"<<endl;
    cout<<"6. Delete from middle"<<endl;
    cout<<"7. Delete from end"<<endl;
    sel();

}
