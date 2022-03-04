#include<stdio.h>
#include<stdlib.h>
struct node
{
        int data;
        struct node* right;
        struct node* left;
};
struct node* create(int x)
{
        struct node* root;
        root=malloc(sizeof(struct node));
        root->data=x;
        root->left=NULL;
        root->right=NULL;
        return root;
}
struct node* insert(struct node* root,int x)
{
        if(root==NULL)
                return create(x);
        else if(x>root->data)
                root->right=insert(root->right,x);
        else
                root->left=insert(root->left,x);
        return root;
}

void inorder(struct node* root)
{
        if(root!=NULL)
        {
                inorder(root->left);
                printf("%d\t",root->data);
                inorder(root->right);
        }
}
void postorder(struct node* root)
{
        if(root!=NULL)
        {
                postorder(root->left);
                postorder(root->right);
                printf("%d\t",root->data);
        }
}
void preorder(struct node* root)
{
        if(root!=NULL)
        {
                printf("%d\t",root->data);
                preorder(root->left);
                preorder(root->right);
        }
}
void main()
{
        struct node* root;
        int n;
        printf("enter number of nodes you want to insert in the tree:\n");
        scanf("%d",&n);
        int a[n],i;
        printf("enter root node of the tree:\n");
        scanf("%d",&a[0]);
        printf("enter the other elements of your tree:\n");
        for(i=1;i<n;i++)
                scanf("%d",&a[i]);
        root=create(a[0]);
        for(i=1;i<n;i++)
                insert(root,a[i]);
        printf("preorder of the given tree is:\n");
        preorder(root);
        printf("\n");
        printf("inorder of the given tree is:\n");
        inorder(root);
        printf("\n");
        printf("postorder of the given tree is:\n");
        postorder(root);
        printf("\n");
}
#include<stdio.h>
#include<stdlib.h>
struct node
{
        int data;
        struct node* right;
        struct node* left;
};
struct node* create(int x)
{
        struct node* root;
        root=malloc(sizeof(struct node));
        root->data=x;
        root->left=NULL;
        root->right=NULL;
        return root;
}
struct node* insert(struct node* root,int x)
{
        if(root==NULL)
                return create(x);
        else if(x>root->data)
                root->right=insert(root->right,x);
        else
                root->left=insert(root->left,x);
        return root;
}

void inorder(struct node* root)
{
        if(root!=NULL)
        {
                inorder(root->left);
                printf("%d\t",root->data);
                inorder(root->right);
        }
}
void postorder(struct node* root)
{
        if(root!=NULL)
        {
                postorder(root->left);
                postorder(root->right);
                printf("%d\t",root->data);
        }
}
void preorder(struct node* root)
{
        if(root!=NULL)
        {
                printf("%d\t",root->data);
                preorder(root->left);
                preorder(root->right);
        }
}
int search(struct node* root,int x)
{
    if(root->data==x)
        return 1;
    else if(x>root->data)
        search(root->right,x);
    else 
    search(root->left,x);
}
void main()
{
        struct node* root;
        int n,c;
        printf("enter number of nodes you want to insert in the tree:\n");
        scanf("%d",&n);
        int a[n],i;
        printf("enter root node of the tree:\n");
        scanf("%d",&a[0]);
        printf("enter the other elements of your tree:\n");
        for(i=1;i<n;i++)
                scanf("%d",&a[i]);
        root=create(a[0]);
        for(i=1;i<n;i++)
                insert(root,a[i]);
        printf("preorder of the given tree is:\n");
        preorder(root);
        printf("\n");
        printf("inorder of the given tree is:\n");
        inorder(root);
        printf("\n");
        printf("postorder of the given tree is:\n");
        postorder(root);
        printf("\n");
        printf("1-to search for an element.\n2-to insert an element.\n3-to delete an element.\n")
        c=search(root,2);
}
