
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
Node *insertNode(Node *head,int i,int data){
    if(head == NULL){
        return head;
    }
    Node *newnode = new Node(data);
    if(i == 0){
        newnode->next = head;
        head = newnode;
        return head;
    }
    Node *ans = insertNode(head->next,i-1,data);
    head->next = ans;
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
    if(head == NULL){
        return 0;
    }
    int smallout = length(head->next)+1;
    return smallout;
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
Node *deleteNode(Node *head,int i){
    Node *temp = head;
    if(i == 0){
        return head->next;
    }
    if(head == NULL){
        return head;
    }
    int count = 0;
    while(temp!=NULL && count < i -1){
        temp = temp->next;
        count++;
    }
    if(temp == NULL || temp->next == NULL){
        return head;
    }
    temp->next = temp->next->next;
    return head;
}
int main()
{
    Node *head = Bettertakeinput();

    print(head);
    Node *h = insertNode(head,3,99);
    print(h);
    /*
    int c = length(head);
    cout<<"length of LL is : "<<c<<endl;
    */







       /* int i;
    cin>>i;
    int c = length(head);
    cout<<"length of LL : "<<c<<endl;
   printIthNode(head,i);*/
   /*int i,d;
      cout<<"Insert index and data to index in LL : "<<endl;
   cin>>i>>d;

   Node *h = insertNode(head,i,d);
   print(h);
   cout<<"Delete from ith index : "<<endl;
   cin>>i;
   Node *da = deleteNode(h,i);
   print(da);*/
    return 0;
}
