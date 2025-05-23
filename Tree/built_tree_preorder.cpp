#include<iostream>
#include<vector>
#include<queue>
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
void levelorder1(Node*root){
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node*curr=q.front();
        q.pop();
        if(curr!=NULL){
            cout<<curr->data<<" ";  //it will give output as 1 2 3 4 5 6
            if(curr->left!=NULL){
                q.push(curr->left);
            }
            if(curr->right!=NULL){
                q.push(curr->right);
            }
        }
    }
}
void levelorder2(Node*root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node*curr=q.front();
        q.pop();
        if(curr==NULL){
            cout<<endl;
            if(q.empty()){
                break;
            }
            q.push(NULL);
        }else{
            cout<<curr->data<<" "; 
            if(curr->left!=NULL){
                q.push(curr->left);
            }
            if(curr->right!=NULL){
                q.push(curr->right);
            }
        }
    }
}
int levelordersum(Node*root){
    queue<Node*>q;
    int result=0;
    q.push(root);
    while(!q.empty()){
        Node*curr=q.front();
        q.pop();
        result+=curr->data;
        if(curr->left!=NULL){
            q.push(curr->left);
        }
        if(curr->right!=NULL){
            q.push(curr->right);
        }         //it will give the sum of all nodes ....
    }
    return result;
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
    cout<<endl;
    cout<<"level order traversal: ";
    levelorder1(root);
    cout<<endl;
    cout<<"level order traversal: ";
    levelorder2(root);
    cout<<"level order sum: ";
    cout<<levelordersum(root);
    return 0;
}