#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
};

node *root = NULL;

void preorder(node *root)
{
    if(root != NULL){
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
    }

};


void inorder(node *root)
{
    if(root != NULL){
    inorder(root->left);
    cout << root->data << ' ';
    inorder(root->right);
    }

};

void postorder(node *root)
{
    if(root != NULL){
    postorder(root->left);
    postorder(root->right);

    cout << root->data << ' ';
    }
};


int main(){

    node *a ,*b, *c, *d, *e, *f, *g;

    a = new node();
    b = new node();
    c = new node();
    d = new node();
    e = new node();
    f = new node();
    g = new node();


    a->data = 81;
    b->data = 60;
    c->data = 100;
    d->data = 50;
    e->data = 75;
    f->data = 90;
    g->data = 104;


    a->left = b;
    a->right = c;

    b->left = d;
    b->right = e;

    c->left = f;
    c->right = g;

    d->left = NULL;
    d->right = NULL;

    e->left = NULL;
    e->right = NULL;

    f->left = NULL;
    f->right = NULL;

    g->left = NULL;
    g->right = NULL;

    root = a;

    cout << "preorder print " << endl;
    preorder(root);

    cout << endl << "inorder print " << endl;
    inorder(root);

    cout << endl << "post order print " << endl;
    postorder(root);

}
