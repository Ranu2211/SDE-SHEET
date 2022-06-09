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
 int getMiddle(Node *head)
    {
        int ans;
        if(head==NULL)
        return -1;
      Node* fast = head;
      Node* slow = head;
      while(  fast&&fast->next){
          slow = slow->next;
          fast = fast->next->next;
      }
      
      return slow->data;
    }
    int main(){
        int n;
        cin>>n;
        int data;
        cin>>data;
        struct Node* head = new Node(data);
        struct Node* tail = head;
        for(int i=0;i<n-1;i++){
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        cout<<getMiddle(head);

        return 0;
    }