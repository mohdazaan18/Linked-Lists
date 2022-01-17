
#include <iostream>

using namespace std;
#include "node.cpp"
Node *Bettertakeinput(){
    int data;
    cin>>data;
    Node *head = NULL;
    Node *tail = NULL;
    while(data!=-1){
        Node *newnode = new Node(data);
        if(head == NULL){
            head = newnode;
            tail = newnode;
        }
        else {
            tail->next = newnode;
            tail = newnode;

        }
        cin>>data;
    }
    return head;
}
void print(Node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}
int length(Node *head){
    int count = 0;
    Node *temp = head;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    return count;
}
void printIthNode(Node *head,int i){
    Node *temp = head;
    int p = length(temp);
    int c = 0;
    if(i>p || i<0){
        cout<<"No element"<<endl;
    }
    while(temp!=NULL){
        if(i == c){
            cout<<temp->data<<endl;
        }
        temp = temp->next;
        c++;
    }
}
int main()
{
    Node *head = Bettertakeinput();

    print(head);
        int i;
    cin>>i;
    int c = length(head);
    cout<<"length of LL : "<<c<<endl;
   printIthNode(head,i);
    return 0;
}
