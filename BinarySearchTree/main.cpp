#include<iostream>
#include<string>

using namespace std;

class Node{

public:
  int value;
  Node *left, *right;

  Node(int value){
    this->value = value;
    left = NULL;
    right = NULL;
  }

};

void addLeft(Node *parent, Node *child){
  parent->left = child;
}

void addRight(Node *parent, Node *child){
  parent->right = child;
}

void preorderTravel(Node *root){
  cout<<root->value<<endl;
  if(root->left!=NULL){
    preorderTravel(root->left);
  }
  if(root->right!=NULL){
    preorderTravel(root->right);
  }
}

void inorderTravel(Node *root){
  if(root->left!=NULL){
    inorderTravel(root->left);
  }
  cout<<root->value<<endl;
  if(root->right!=NULL){
    inorderTravel(root->right);
  }
}

void postorderTravel(Node *root){
  if(root->left!=NULL){
    postorderTravel(root->left);
  }
  if(root->right!=NULL){
    postorderTravel(root->right);
  }
  cout<<root->value<<endl;
}

int getDepth(Node *root){
  if(root==NULL){
    return 0;
  }

  int leftDepth = getDepth(root->left)+1;
  int rightDepth = getDepth(root->right)+1;
  return leftDepth>rightDepth?leftDepth:rightDepth;
}

int binarySearch(Node *root, int value){
  if(value == root->value){
    return 1;
  }else if(value > root->value && root->right!=NULL){
    return binarySearch(root->right, value);
  }else if(value < root->value && root->left!=NULL){
    return binarySearch(root->left, value);
  }
    
  return -1;
}

int findMin(Node *root){
  if(root->left!=NULL){
    return findMin(root->left);
  }else{
    return root->value;
  }
}

int findMax(Node *root){
  if(root->right!=NULL){
    return findMax(root->right);
  }else{
    return root->value;
  }
}

void addNode(Node *root, Node *newNode){
  if(newNode->value == root->value){

  }else if(newNode->value > root->value){
    if(root->right == NULL){
      root->right = newNode;
    }else{
      addNode(root->right, newNode);
    }
  }else if(newNode->value < root->value){
    if(root->left == NULL){
      root->left = newNode;
    }else{
      addNode(root->left, newNode);
    }
  }
}

void deleteNode(Node *root, int value){
  if(value == root->value){
    if(root->left==NULL){
      Node *temp = root;
      root = root->right;
      delete temp;
    }else if(root->right==NULL){
      Node *temp = root;
      root = root->left;
      delete temp;
    }else{
      int minRight = findMin(root->right);
      root->value =minRight;
      deleteNode(root->right, minRight);
      //cout<<"minRight = "<<minRight<<endl;
    }
  }else if(value > root->value){
    deleteNode(root->right, value);
  }else if(value < root->value){
    deleteNode(root->left, value);
  }
}

int main(){

  // initial tree
  Node * root = new Node(100);

  Node * node1 = new Node(37);
  Node * node2 = new Node(121);
  Node * node3 = new Node(3);
  Node * node4 = new Node(40);
  Node * node5 = new Node(999);
    
  addLeft(root, node1);
  addRight(root, node2);
  addLeft(node1, node3);
  addRight(node1, node4);
  addRight(node2, node5);

  // travel
  //preorderTravel(root);
  //inorderTravel(root);
  //postorderTravel(root);
    
  // depth
  //cout<<getDepth(root)<<endl;

  // binary search
  //cout<<binarySearch(root, 121)<<endl;

  // find max or min
  //cout<<findMin(root)<<endl;
  //cout<<findMax(root)<<endl;

  // add new node
  Node * newNode = new Node(120);
  addNode(root, newNode);
  //preorderTravel(root);

  // delete node
  deleteNode(root, 100);
  preorderTravel(root);

}

