#include<iostream>
using namespace std;
struct node
{ 
   int data;
   struct node *left;
   struct node *right;
   
};
typedef struct node node;
class Tree
{ 
  node *root;
  public:
  Tree()
  { 
    root = nullptr;
  }
 node* createnode(int val)
  { 
     node* newnode=new node;
     newnode->data = val;
     newnode->left = nullptr;
     newnode->right = nullptr;
     return newnode;
  }
  node* createtree(node* Node,int val)
  { 

     if(Node==nullptr)
     {
        Node = createnode(val);
        return Node;
     } 
     else if(val<Node->data)
     { 
         Node->left = createtree(Node->left,val);
     }
    else if(val>Node->data)
     {
      Node->right = createtree(Node->right,val);
     }
    else if(val==Node->data){
     cout<<"duplication of Node try Another value";
     
    }
     
     return Node;
  }
  void insert()
  {  
     char choice;
     int data;
     do{
     cout<<"Enter value to insert in BT:";
     cin>>data;
     root =  createtree(root,data);
     cout<<"Do you want to insert agian?[y/n]:";
     cin>>choice;}
     while(choice=='y'||choice=='Y');
  }
  void display(node* r) {
    if (r != nullptr) {
        display(r->left);
        cout << r->data << " ";
       display(r->right);
    }
}
void inorder()
  { 
   cout<<"Inorder traversal\n";
   cout<<"Root: "<<root->data<<endl;
   display(root);
   cout<<endl;
   }
   
node* deleteNode(node* root, int key)
{

if (root == NULL)
    return root;
if (key < root->data)
    root->left = deleteNode(root->left, key);
else if (key > root->data)
    root->right = deleteNode(root->right, key);
else
{
if (root->left == NULL){
    node *temp = root->right;
  delete root;
  return temp;
}
else if (root->right == NULL)
{
node *temp = root->left;
delete root;
return temp;
}
node* temp = minValueNode(root->right);
root->data = temp->data;
root->right = deleteNode(root->right, temp->data);
}
return root; 

}

node* minValueNode(node* Node)
{

node* current = Node;
while (current && current->left != NULL)
current = current->left;
return current; 

}
void delet()
{
  int i;
 char choice;
 do{
    cout<<"enter the data you want to delete:";
    cin>>i;
    root= deleteNode(root,i);
    inorder();
    cout<<"\nDo you Want to Delete again:[y/n]:";
    cin>>choice;
}while(choice=='Y'||choice=='y');
   
}
};
 
 int main()
 { 
    Tree a;
    int i;
    char choice;
    do{
    cout<<"Enter the code For the opertion You want to perform(1-insertion and 2-Display and 3-Deletion:";
    cin>>i;
    switch(i){
    case 1: a.insert();
    break;
    case 2: a.inorder();
    break;
    case 3:a.delet();
    break;
    default:cout<<"invalid input";
    }
    cout<<"Do you want Do any other Operation(y/n)";
    cin>>choice;
    }while(choice=='Y'||choice=='y'); 
         
 }
     
     
     
  
