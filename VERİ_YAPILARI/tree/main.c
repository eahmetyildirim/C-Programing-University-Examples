#include <stdio.h>
#include <stdlib.h>
struct Node{
int key;
struct Node *left;
struct Node *right;
int    height;
};
struct Node *newNode(int key){
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->key = key;
    node->left = NULL;
    node->right = NULL;
    node->height = 1; // Yeni düðüm ilk olarak yaprakta eklenir
    return(node);
}
int height(struct Node *N)
{
if (N == NULL)
return 0;
return N->height;
}
struct Node *rightRotate(struct Node *y){
struct Node *x = y->left;
struct Node *T2 = x->right;
// Döndürme
x->right = y;
y->left = T2;
// Yükseklikler güncelleniyor
y->height = max(height(y->left), height(y->right))+1;
x->height = max(height(x->left), height(x->right))+1;
// yeni kok
return x;
}
struct Node *leftRotate(struct Node *x){
struct Node *y = x->right;
struct Node *T2 = y->left;
// döndürme
y->left = x;
x->right = T2;
// Yükseklikler güncelleniyor
x->height = max(height(x->left), height(x->right))+1;
y->height = max(height(y->left), height(y->right))+1;
// yeni kok
return y;
}
int getBalance(struct Node *N){
if (N == NULL)
return 0;
return height(N->left) - height(N->right);
}
int max(int a,int b){
        return (a>b)? a:b;
}
struct Node *insert(struct Node *node,int key){
    /*BTS aðacýna ekleme*/
    if(node==NULL){
        return(newNode(key));
    }
        if (key < node->key) {
            node->left = insert(node->left, key);
        }else if(key > node->key){
            node->right = insert(node->right, key);
        }else{
            return node;
            }
        /* 2. Yükseklikler güncelleniyor */
        node->height = 1 + max(height(node->left), height(node->right));
        /* 3. Yeni ekleme iþlemi ile denge hesaplanýyor */
    int balance = getBalance(node);
    // Eklenen düðüm dengesiz ise 4 durum vardýr
    // Solun solu
    if (balance > 1 && key < node->left->key)
        return rightRotate(node);
    // Saðýn saðý
    if (balance < -1 && key > node->right->key)
        return leftRotate(node);
    // Solun saðý
    if (balance > 1 && key > node->left->key){
    node->left = leftRotate(node->left);
    return rightRotate(node);
    }
    // Saðýn solu
    if (balance < -1 && key < node->right->key) {
    node->right = rightRotate(node->right);
    return leftRotate(node);
    }
    return node;
}
void preOrder(struct Node *root)
{
if(root != NULL){
printf("%d ", root->key);
preOrder(root->left);
preOrder(root->right);
}
}
int main()
{
    struct Node *root =NULL;
    root= insert(root,10);
    root= insert(root,20);
    root= insert(root,30);
    root= insert(root,40);
    root= insert(root,50);
    root= insert(root,25);
    preOrder(root);
    return 0;
}
