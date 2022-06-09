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
 void deleteNode(Node* node) {
        node->data = node->next->data;
        node->next = node->next->next;
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
   
  deleteNode(head);
    printlist(head);
    cout<<endl;
    return 0;
}
    