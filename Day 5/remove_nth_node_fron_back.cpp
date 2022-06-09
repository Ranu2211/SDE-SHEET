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
Node* removeNthFromEnd(Node* head, int n) {
       Node *fast = head;
        
        for(int i=0;i<n;i++)
            fast = fast->next;
        
        //cout<<fast->val<<" ";
        
        if(fast==NULL)
            return head->next;
        
       Node *slow = head;
        
        while(fast->next!=NULL)
        {
            slow = slow->next;
            fast = fast->next;
        }
        
        //cout<<fast->val<<" "<<slow->val;
        slow->next = slow->next->next;
        
        return head;
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
    int k;
    cin>>k;
    head = removeNthFromEnd(head,k);
    printlist(head);
    cout<<endl;
    return 0;
}

