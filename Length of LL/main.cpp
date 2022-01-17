/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

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
int main()
{
    Node *head = Bettertakeinput();
    print(head);
    int c = length(head);
    cout<<"length of LL : "<<c<<endl;

    return 0;
}
