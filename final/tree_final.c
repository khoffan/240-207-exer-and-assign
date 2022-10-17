#include<stdio.h>
#include<stdlib.h>

struct treenode
{   
    struct treenode *leftptr;
    int data;
    struct treenode *rightptr;
};
typedef struct treenode TREENODE;
typedef TREENODE *TREE;

TREE mkempty();
TREE mk_tree(int x,TREE right,TREE left);
void insert_node(TREE *tp,int value);
int root_value(TREE t);
void print_inorder(TREE t);
void print_preorder(TREE t);
void print_leaves(TREE t);
void free_tree(TREE *t);
int sumAllLeaftLeaves(TREE t);
int main(){
    TREE t = NULL;
    insert_node(&t,6);
    insert_node(&t,4);
    insert_node(&t,3);
    insert_node(&t,5);
    insert_node(&t,1);
    insert_node(&t,8);
    insert_node(&t,7);
    insert_node(&t,9);
    

    printf("Enter Root: %d\n",root_value(t));
    print_inorder(t);
    printf("\n");
    print_preorder(t);
    printf("\n");
    print_leaves(t);
    printf("\n %d",sumAllLeaftLeaves(t));

    free_tree(&t);
    return 0;
}

TREE mkempty(){
    return NULL;
}
TREE mk_tree(int x,TREE left,TREE right){
    TREE t = (TREE)malloc(sizeof(TREENODE));
    t->data = x;
    t->leftptr = left;
    t->rightptr = right;
    return t;
}
void insert_node(TREE *tp, int value) {
	/* tp is a pointer to a BST */
	if (*tp == NULL) {
		*tp = malloc(sizeof(TREENODE));
		(*tp)->data = value;
		(*tp)->leftptr = NULL;
		(*tp)->rightptr = NULL;
	}else if (value < (*tp)->data )
		insert_node(&((*tp)->leftptr), value);
	else if (value > (*tp)->data )
		insert_node(&((*tp)->rightptr), value);
	else
		printf("duplicate node\n");
}
int root_value(TREE t){

    if(t != NULL){
        return t->data;
        // printf(" %d",t->data);
    }
}
void print_inorder(TREE t){
    if(t != NULL){
        print_inorder(t->leftptr);
		printf(" %d", t->data);
		print_inorder(t->rightptr);
    }
}
void print_preorder(TREE t){
    if(t != NULL){
		printf(" %d", t->data);
        print_inorder(t->leftptr);
		print_inorder(t->rightptr);
    }
}
void print_leaves(TREE t){
    if(t == NULL){
        return;
    }
    if(t->leftptr == NULL && t->rightptr == NULL){
        printf(" %d",t->data);
    }
    if(t->leftptr){
        print_leaves(t->leftptr);
    }
    if(t->rightptr){
        print_leaves(t->rightptr);
    }
}

void free_tree(TREE *t){
    if((*t) != NULL){
        if((*t)->leftptr == NULL && (*t)->rightptr == NULL && (*t) != NULL){
            free(*t);
            *t = NULL;
        }
        else{
            free_tree(&(*t)->leftptr);
            free_tree(&(*t)->rightptr);
            free_tree(t);
        }
    }
}
int sumAllLeaftLeaves(TREE t){
     if (t == NULL)
        return 0;
    // check whether this t is a leaf t and is left.
    if (t->leftptr == NULL && t->rightptr == NULL)
        return t->data;
 
    // recursive case
    return sumAllLeaftLeaves(t->leftptr)
           + sumAllLeaftLeaves(t->rightptr);
}
