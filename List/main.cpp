#include<iostream>
#include<string>

using namespace std;

class Node{

public:
  int value;
  Node *next;

  Node(int value){
    this->value = value;
  }

};

class List{

public:
    
};

int main(){

  int i, j;
  Node * head = NULL;
    
  //create list
  Node *s, *p;
  for(i=0; i<3; ++i){
    s = new Node(1992);
    if(head == NULL){
      head = s;
    }else{
      p->next = s;    
        
    }

    p = s;
  }

  // insert head node
  Node * newHead = new Node(1991);
  newHead->next = head;
  head = newHead;

  // insert after *p at index 1
  p = head->next;
  Node * newNode = new Node(22);
  newNode->next = p->next;
  p->next = newNode;

  // search 22 and insert before it
  Node * q;
  Node * newNode2 = new Node(1);
  for(p=head, q=head->next; q!=NULL; p=p->next, q=q->next){
    if(q->value==22){
      newNode2->next = p->next;
      p->next = newNode2;

    }
  }

  // delete head node
  Node * preHead = head;
  head = head->next;
  delete preHead;

  //delete node q at index 3
  p = head->next->next;
  q = p->next;
  p->next = q->next;
  delete q;

  // show list 
  Node *tempHead = head;
  while(tempHead!=NULL){
    cout<<tempHead->value<<endl;
    tempHead = tempHead->next;
  }

}
