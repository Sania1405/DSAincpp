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
void levelordersum2(Node*root){
    queue<Node*>q;
    int result=0;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node*curr=q.front();
        q.pop();
        if(curr==NULL){
            cout<<result;
            result=0;
            cout<<endl;
            if(q.empty()){
                break;
            }
            q.push(NULL);
        }else{
            result+=curr->data;
            // cout<<curr->data<<" "; 
            if(curr->left!=NULL){
                q.push(curr->left);
            }
            if(curr->right!=NULL){
                q.push(curr->right);
            }
        }
    }
}
int heightoftree(Node*root){
    if(root==NULL){
        return 0;
    }
    int leftheight=heightoftree(root->left);
    int rightheight=heightoftree(root->right);
    int finalheight=max(leftheight,rightheight) + 1;
    return finalheight;
}
int count(Node*root){
    if(root==NULL){
        return 0;
    }
    int leftcount=count(root->left);
    int rightcount=count(root->right);
    return leftcount+rightcount+1;
}
int sumofnodes(Node*root){
    if(root==NULL){
        return 0;
    }
    int leftsum=sumofnodes(root->left);
    int rightsum=sumofnodes(root->right);
    int currsumm=leftsum+rightsum+root->data;
    cout<<"current sum: "<<currsumm<<endl;
    return currsumm;
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
    cout<<endl;
    cout<<"level order sum node wise: ";
    cout<<endl;
    levelordersum2(root);
    cout<<endl;
    cout<<"height of tree: "<<heightoftree(root);
    cout<<endl;
    cout<<"count of nodes: "<<count(root);
    cout<<endl;
    sumofnodes(root);
    return 0;
}