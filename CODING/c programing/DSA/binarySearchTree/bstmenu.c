#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left, *right;
};
struct node *root = NULL;
struct node *insert(struct node *root, int data)
{
    if (root == NULL)
    {
        root = (struct node *)malloc(sizeof(struct node));
        root->data = data;
        root->left = NULL;
        root->right = NULL;
    }
    else if (data < root->data)
    {
        root->left = insert(root->left, data);
    }
    else if (data > root->data)
    {
        root->right = insert(root->right, data);
    }
    else if (root->data == data)
    {
        printf("\nDUPLICATE NUMBER\n");
    }
    return root;
}
void preorder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d\t", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d\t", root->data);
        inorder(root->right);
    }
}
void postorder(struct node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d\t", root->data);
    }
}
void search(struct node *root, int val)
{
    struct node *temp = root;
    if (temp->data == val)
    {
        printf("element found!!\n");
        exit(1);
    }
    // if value is in left side of the root
    else if (temp->data > val)
    {
        temp = temp->left;
        search(temp, val);
    }
    else
    {
        temp = temp->right;
        search(temp, val);
    }
}
struct node* inorderpre(struct node* root){
    root=root->left;
    while(root->right!=NULL){
        root=root->right;
    }
    return root;
}
struct node *delete(struct node *root, int val){
    struct node*  ipre;
    if(root==NULL){
        return NULL;
    }
    if(root->left == NULL && root->right == NULL){
        free(root);
        return NULL;
    }
    if(val<root->data){
        root->left=delete(root->left, val);
    }
    else if(val>root->data){
        root->right=delete(root->right, val);
    }
    else{
        ipre=inorderpre(root);
        root->data=ipre->data;
        root->left=delete(root->left, ipre->data);
    }
    return root;
}
void findMax(struct node *root)
{
    struct node *temp = root;
    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    printf("the largest element is: %d\n", temp->data);
}
void findMin(struct node *root)
{
    struct node *temp = root;
    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    printf("the smallest element is: %d\n", temp->data);
}
int main()
{
    struct node *start = NULL;
    int val, ch;
    while (1)
    {
        printf("1.insert\n2.delete\n3.preorder\n4.inoder\n5.postorder\n6.search\n7.findMin\n8.findMax\n9.exit\n");
        printf("\nENTER THE OPTION YOU WANT:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("enter the value to insert:");
            scanf("%d", &val);
            start = insert(start, val);
            break;
        case 2:
            printf("deleting operation\n");
            printf("enter the element you want to delete:");
            scanf("%d", &val);
            start = delete (start, val);
            break;
        case 3:
            printf("PREORDER PRINT: ");
            preorder(start);
            printf("\n");
            break;
        case 4:
            printf("INORDER PRINT: ");
            inorder(start);
            printf("\n");
            break;
        case 5:
            printf("POST ORDER PRINT: ");
            postorder(start);
            printf("\n");
            break;
        case 6:
            printf("ENTER THE ELEMENT YOU WANT TO SEARCH:");
            scanf("%d", &val);
            search(start, val);
            break;
        case 7:
            findMin(start);
            break;
        case 8:
            findMax(start);
            break;
        case 9:
            exit(1);
        default:
            printf("\nENTER VALID OPTION\n");
        }
    }
    printf("\n");
}