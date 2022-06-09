#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node* next;
    Node(int x){
        data = x;
        next = NULL;
    }
};
 struct Node* reverseList(struct Node *head)
    {
        struct Node* p;
       struct Node* q;
       struct Node* r;
       p=head;
       q=NULL;
       r=NULL;
       while(p!=NULL){
           r=q;
           q=p;
           p=p->next;
           q->next = r;
       }
       head = q;
    }
    void printlist(struct Node* head){
        struct Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data;
            temp = temp->next;
        }
    }
int main(){
    int n,l,firstdata;
    struct Node* head = NULL, *tail = NULL;
    cin>>n;
    cin>>firstdata;
    head = new Node(firstdata);
    tail = head;
    for(int i=1;i<n;i++){
        cin>>l;
        tail->next = new Node(l);
        tail = tail->next;
    }
    head = reverseList(head);
    printlist(head);
    cout<<endl;
    return 0;
}