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
bool isPalindrome(Node* head) {
    vector<int>arr;
    while(head!=NULL){
        arr.push_back(head->data);
        head = head->next;
    }
    for(int i=0;i<arr.size()/2;i++){
        if(arr[i]!= arr[arr.size()-i-1])
            return false;     
    }
    return true;
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
    isPalindrome(head)? cout<<"True" : cout<<"False";
    return 0;
}