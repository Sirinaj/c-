#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#define true 1
#define false 0
typedef int boolean;
struct TreeNode *root;
struct TreeNode *newNode;
struct TreeNode *parent;
struct TreeNode *NodeDelete;
char child;
int countLevel,a,b,choice=0;

menu()
{
      printf("\n\t\t+-------------------------------+\n");
      printf("\t\t|      PROGRAM Binary Tree      |\n");
      printf("\t\t+-------------------------------+\n");
      printf("\t 1.Add data \t 2.Del data \t 3.Show data \n");
      printf("\t 4.Quit\n");
      printf("\t\tPlease Enter your choice(1,2,3,4):=");
      return 0;
}
struct TreeNode{
  int item;
  struct TreeNode *lChild;
  struct TreeNode *rChild;
};
struct TreeNode *insertNode(int newItem){
  struct TreeNode *newNode;
  newNode =(struct TreeNode *) malloc(sizeof(struct TreeNode));
  newNode->item = newItem;
  newNode->lChild = NULL;
  newNode->rChild = NULL;
  return(newNode);
}
struct TreeNode *insertNode(int newItem,struct TreeNode *newlChild,struct TreeNode *newrChild){
  struct TreeNode *newNode;
  newNode =(struct TreeNode *)malloc(sizeof(struct TreeNode));
  newNode->item = newItem;
  newNode->lChild = newlChild;
  newNode->rChild = newrChild;
  return(newNode);
}

// 
boolean isEmpty(){
  if(root == NULL)
    return true;
  else 
    return false;
}
// 
void insertItem(struct TreeNode *bst, int newItem){
  if(newItem < bst->item){
    if(bst->lChild == NULL){
       newNode = insertNode(newItem);
       bst->lChild = newNode;
    }else 
       insertItem(bst->lChild,newItem);
  }else{
    if(bst->rChild == NULL){
       newNode = insertNode(newItem);
       bst->rChild = newNode;
    }else 
       insertItem(bst->rChild,newItem);
  }
}
//
struct TreeNode *insert(int newItem){
  if(isEmpty() == true){
     newNode = insertNode(newItem);
     root = newNode;
  }else{
     insertItem(root, newItem);
  }
  return root;
}
// 
void search(struct TreeNode *bst, int searchKey){
  if(searchKey == bst->item){
    NodeDelete = bst;
  }else if(searchKey < bst->item){
    parent = bst;
    child = 'l';
    search(bst->lChild,searchKey);
  }else{
    parent = bst;
    child = 'r';
    search(bst->rChild,searchKey);
  }
}
// inordersuccessor
void inordersuccessor(struct TreeNode *bst){
  if(bst->lChild != NULL){
     parent = bst;
     ++countLevel;
     inordersuccessor(bst->lChild);
  }else{
     NodeDelete->item = bst->item;
     if(countLevel == 0){
        NodeDelete->rChild = NULL;
     }else{
        parent->lChild = NULL;
     }
  }
}
// 
void deleteTree(int deleteItem){
  if(isEmpty()== true){
     printf("Tree Empty");
  }else{
     parent = root;
     NodeDelete = NULL;
     search(root, deleteItem);
     struct TreeNode *lChild = NodeDelete->lChild;
     struct TreeNode *rChild = NodeDelete->rChild;
    if((lChild==NULL)&&(rChild==NULL)){
       //leaf Node
       if(child == 'l')
          parent->lChild = NULL;
       else 
          parent->rChild = NULL;
    }if(rChild!=NULL){
       //treeNode have two Children
       countLevel = 0;
       inordersuccessor(NodeDelete->rChild);
	}
    else if(lChild!=NULL){
    	countLevel = 1;
    	inordersuccessor(NodeDelete->lChild);
	}
    else{//treeNode has one Children
       if(NodeDelete->lChild != NULL){
         if(child == 'l')
           parent->lChild = NodeDelete->lChild;
         else 
           parent->rChild = NodeDelete->lChild;
       }else{ 
         if(child == 'l')
            parent->lChild = NodeDelete->rChild;
         else 
            parent->rChild = NodeDelete->rChild;
       }
    }
  }
}

void preshow(struct TreeNode *rootNode){
  if(rootNode != NULL){
printf("[L:%p][ %d:%p ] [R:%p] \n",rootNode->lChild, rootNode->item,rootNode,rootNode->rChild);
     preshow(rootNode->lChild);
     preshow(rootNode->rChild);
  }
}

void preOrder(struct TreeNode *rootNode){
  if(rootNode != NULL){
     printf("%d\t",rootNode->item);
     preOrder(rootNode->lChild);
     preOrder(rootNode->rChild);
  }
}

void inOrder(struct TreeNode *rootNode){
  if(rootNode != NULL){
     inOrder(rootNode->lChild);
     printf("%d\t",rootNode->item);
     inOrder(rootNode->rChild);
  }
}

void postOrder(struct TreeNode *rootNode){
  if(rootNode != NULL){
     postOrder(rootNode->lChild);
     postOrder(rootNode->rChild);
     printf("%d\t",rootNode->item);
  }
}
showpre(){
	printf("\nPreorder:= ");
    preOrder(root);
}
showpost(){
	printf("\nPostorder:= ");
    postOrder(root);
}
showin(){
	printf("\nInorder:= ");
    inOrder(root);
}

show(){
	struct TreeNode *rootNode;
	printf("\n    L-child      Data:Address   R-child  \n");
  rootNode=root;
  if(rootNode != NULL){
     printf("[L:%p][ %d:%p ] [R:%p] \n",rootNode->lChild, rootNode->item,rootNode,rootNode->rChild);
     preshow(rootNode->lChild);
     preshow(rootNode->rChild);
  }
showpre();
showin();
showpost();
}

add(){
	printf("Enter add data:=");
	scanf("%d",&a);
	insert(a);
}
del(){
	printf("Enter Delete data:=");
	scanf("%d",&a);
	 deleteTree(a);
}



int main(){
   struct TreeNode *root;
   printf("Enter root:="); scanf("%d",&a);
   root=insert(a);
   while(choice!=4)
  {menu();
  
       scanf("%d",&choice);
           switch(choice){          
                case 1:add(); break;
                case 2:del(); break;
                case 3:show(); break;
                case 4: return 0; break;
           }
        }

   return 0;
}

