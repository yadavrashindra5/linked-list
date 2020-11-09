/* This code is for linked list
1.is for insertion at beginning.
2.is for insertion at last.
3.is for after given node.
4.is for before given node.

*/


#include<iostream>
using namespace std;
class Node{
int Data;
Node *Next;
public:
    void insert_at_beginning_of_the_node(int x);//insertion at beginning.
    void insert_at_last_of_the_node(int x);//insertion at last.
    void after_given_node(int x,int y);//insertion after given node.
    void before_given_node(int x,int y);//insertion before given node.
    void view_data();//This is fore view data.

    void delete_first_node();
    void delete_last_node();
    void delete_given_node(int x);

};
Node *Head=NULL;
void Node::insert_at_beginning_of_the_node(int x)
{
    Node *temp=new Node();
    temp->Data=x;
    temp->Next=Head;
    Head=temp;
}
void Node::view_data()
{
    Node *temp;
    temp=Head;
    while(temp!=NULL)
    {
        cout<<"Node Data is : "<<temp->Data<<"\n";
        temp=temp->Next;
    }
}
void Node::insert_at_last_of_the_node(int x)
{   Node *ptr=Head;
    Node *temp=new Node();
    temp->Data=x;
    temp->Next=NULL;
    if(Head==NULL)
    {
        Head=temp;
    }
    else
    {
        while(ptr->Next!=NULL)
        {
            ptr=ptr->Next;
        }
        ptr->Next=temp;
    }
}

void Node::after_given_node(int x,int y)
{
    Node *New_Node=new Node();
    New_Node->Data=x;
    Node *preptr,*ptr;
    ptr=Head;
    preptr=ptr;
    while(preptr->Data!=y)
    {
        preptr=ptr;
        ptr=ptr->Next;
    }
    preptr->Next=New_Node;
    New_Node->Next=ptr;

}


void Node::before_given_node(int x,int y)
{
    Node *New_Node=new Node();
    New_Node->Data=x;
    Node *preptr,*ptr;
    ptr=Head;
    preptr=ptr;
    while(ptr->Data!=y)
    {
        preptr=ptr;
        ptr=ptr->Next;
    }
    preptr->Next=New_Node;
    New_Node->Next=ptr;
}

void Node::delete_first_node()
{
    Node *temp=Head;
    if(Head==NULL)
    {
        cout<<"Under flow\n";
    }
    else{
        Head=temp->Next;
    }
}
void Node::delete_last_node()
{
    Node *temp=Head;
    Node *preptr,*ptr;
    ptr=Head;
    preptr=Head;
    if(Head==NULL)
    {
        cout<<"Under Flow"<<"\n";
    }
    else
        {
        while(ptr->Next!=NULL)
        {
            preptr=ptr;
            ptr=ptr->Next;
        }
        if(Head->Next==NULL)
        {
            Head=NULL;
        }
        else{
        preptr->Next=NULL;}

        }


}

void Node::delete_given_node(int x)
{
    Node *ptr,*preptr;
    ptr=Head;
    preptr=ptr;
    if(Head==NULL)
    {
        cout<<"under flow"<<"\n";
    }
    else if(Head->Data==x)
    {
        Head=Head->Next;
    }
    else{
        while(ptr->Data!=x)
        {
            preptr=ptr;
            ptr=ptr->Next;
        }
        preptr->Next=ptr->Next;
    }
}









int main()
{
    Node n;
    for( ;;){
    cout<<"****************************************"<<"\n";
    cout<<"****************************************"<<"\n";
    cout<<" \n\n";
    cout<<" Enter your choice "<<"\n";
    cout<<" 1 .Insert at beginning\n";
    cout<<" 2 .Insert at end of the node\n";
    cout<<" 3 .Insert after  given node\n";
    cout<<" 4 .Insert before given node\n";
    cout<<" 5 .View your Data\n";
    cout<<" 6 .Delete first Node\n";
    cout<<" 7 .Delete last Node\n";
    cout<<" 8 .Delete given Node\n";
    cout<<" 9 .Exit\n";
    cout<<" \n\n";
    cout<<"****************************************"<<"\n";
    cout<<"****************************************"<<"\n";
    cout<<"\n\n";
    cout<<"Enter your choice Here\t"<<"\n\n";
    int choice;
    cin>>choice;
    if(choice==9)
    {
        break;
    }
    switch(choice)
    {
    case 1:
        cout<<"Insert at beginning"<<"\n";
        int x;
        cout<<"Enter the data you want to store in Node\n";
        cin>>x;
        n.insert_at_beginning_of_the_node(x);
        break;
    case 2:
        cout<<"Insert at end of the node"<<"\n";
        int y;
        cout<<"Enter the data you want to store in Node\n";
        cin>>y;
        n.insert_at_last_of_the_node(y);
        break;
    case 3:
        cout<<"Insert after the given node"<<"\n";
        cout<<"Enter the data you want to store and i.e data where you want to store\n";
        int a,b;
        cin>>a>>b;
        n.after_given_node(a,b);
        break;
    case 4:
        cout<<"Enter the data you want to store and i.e data where you want to store\n";
        int r,t;
        cin>>r>>t;
        n.before_given_node(r,t);
        break;
    case 5:
        cout<<"your Data is \n";
        n.view_data();
        break;
    case 6:
        n.delete_first_node();
        break;
    case 7:
        n.delete_last_node();
        break;
    case 8:

        cout<<"Enter the Node you want to delete\n";
        cin>>x;
        n.delete_given_node(x);
        break;


    }
    }
}
