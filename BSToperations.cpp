#include <iostream>
using namespace std;

struct Node  
{
   int data;
   int pos;
   Node *left, *right;
};

struct Node *newNode(int new_data,int pos)
{
    struct Node *temp = new Node;
    temp->pos=pos;
    temp->data = new_data;
    temp->left = NULL;
    temp->right = NULL;
    
    return temp; 
}

struct Node *insert(struct Node *node,int new_data,int pos)
{
    if(node==NULL) {
        cout<<pos<<endl;
        return newNode(new_data,pos);
    }
    if(new_data < node->data)
        node->left = insert(node->left,new_data,pos*2);
    else 
        node->right = insert(node->right,new_data,pos*2+1);
    
    return node;
}

int minValueNode(Node *root)
{
    
    
    while(root && root->left!=NULL)
        root = root->left;
    
    return root->data;
}

Node *deleteNode(Node *root,int data)
{       
        if(data == root->data) 
        {
            cout<<root->pos<<endl;
        
            if(root->left==NULL)
                return root->right;
            else if(root->right==NULL)
                return root->left;
            
            root->data = minValueNode(root->right);
            root->right = deleteNode(root->right, root->data);
            
        }   
         else if(data < root->data)
            root->left = deleteNode(root->left,data);
        else 
            root->right = deleteNode(root->right,data);
       
    return root;
}


int main()
{
    int queries; Node *root = NULL; 
    char queryType; int x;
    
    cin>>queries;
    
    for(int i = 0; i < queries; i++)
    {
        cin>>queryType>>x;
        if(queryType=='i')
           root = insert(root,x,1);
       else
           root = deleteNode(root,x);
            
    }
    
    
    
    
    
	return 0;
}
