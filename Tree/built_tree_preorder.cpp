#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node*left;
    Node*right;
    Node(int data){
        this->data=data;
        left=right=NULL;
    }
};
static int idx=-1; //common variable.....
Node*buildtree(vector<int>nodes){
    idx++;
    if(nodes[idx]==-1){
        return NULL;
    }
    Node*currnode=new Node(nodes[idx]);
    currnode->left=buildtree(nodes);
    currnode->right=buildtree(nodes);
    return currnode;
}
void preorder(Node*root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node*root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
void inorder(Node*root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){
    vector<int>node={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node*root=buildtree(node);
    cout<<root->data;
    cout<<endl;
    cout<<"preorder traversal: ";
    preorder(root);
    cout<<endl;
    cout<<"postorder traversal: ";
    postorder(root);
    cout<<endl;
    cout<<"inorder traversal: ";
    inorder(root);
    return 0;
}