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
Node*insert(Node*root,int val){
    if(root==NULL){
        root=new Node(val);
        return root;
    }
    if(val<root->data){
        root->left=insert(root->left,val);
    }else{
        root->right=insert(root->right,val);
    }
    return root;
}
void inorder(Node*root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
Node*buildbst(int arr[],int n){
    Node*root=NULL;
    for(int i=0;i<n;i++){
        root=insert(root,arr[i]);
    }
    return root;
}
bool search(Node*root,int key){
    if(root==NULL){
        return false;
    }
    if(root->data==key){
        return true;
    }else if(key<root->data){
        return search(root->left,key);
    }else{
        return search(root->right,key);
    }
}
Node*inordersucessor(Node*root){
    while(root->left!=NULL){
        root=root->left;
    }
    return root;
}
Node*deletenode(Node*root,int val){
    if(root==NULL){
        return NULL;
    }else if(val<root->data){
        root->left=deletenode(root->left,val);
    }else if(val>root->data){
        root->right=deletenode(root->right,val);
    }else{
        //case 1 leaf node
    if(root->left==NULL && root->right==NULL){
        delete root;
        return NULL;
    }
    //case 2 one child only
    if(root->left==NULL||root->right==NULL){
        return root->left==NULL?root->right : root->left;
    }
    Node*IS=inordersucessor(root->right);
    root->data=IS->data;
    root->right=deletenode(root->right,IS->data);
    return root;
    }
}
int main(){
    int arr[6]={5,1,3,4,2,7};
    Node*root=buildbst(arr,6);
    inorder(root);
    cout<<endl;
    cout<<search(root,4)<<endl;
    cout<<endl;
    deletenode(root,1);
    inorder(root);
    return 0;
}