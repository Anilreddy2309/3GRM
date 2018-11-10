#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct bstree
{
	int data;
	struct bstree *lchild;
	struct bstree *rchild;
}*root=NULL, *node, *parent, *temp;
int iwant, op, key, ele, found, d;
void search(struct bstree*);
void insert(struct bstree*);
void delnode(struct bstree*);
void preorder(struct bstree*);
void inorder(struct bstree*);
void postorder(struct bstree*);
int main()
{
	do{
		cout<<"\nHi! welcome to the world of binary search trees\n";
		cout<<"\n1.insert\n2.search\n3.preorder traversal\n4.inorder traversal\n5.postordertraversal\n6.delete a node with single child(or)leaf node(except root node)\n7.exit\n";
		cout<<"\nWhat do u want me to do:";
		cin>>iwant;
		switch(iwant)
		{
			case 1:
				cout<<"\nenter an element:";
				cin>>ele;
				if(root==NULL)
				{
					node=new struct bstree;
					node->data=ele;
					node->lchild=NULL;
					node->rchild=NULL;
					root=node;
				}
				else
				{
					insert(root);
					
				}
				break;
				
				case 2:
					if(root==NULL)
					{
						cout<<"\n Binary search tree is empty...\n";
						
					}
					else
					{
						search(root);
					}
					break;
					
					case 3:
					if(root==NULL)
					{
						cout<<"\n binary search tree is empty..\n";
						
					}
					else
					{
						preorder(root);
							
					}
					break;
					case 4:
						if(root==NULL)
						{
							cout<<"\n binary search tree is empty\n:";
						}
						else
						{
							inorder(root);
						}
						break;
					case 5:
						if(root==NULL)
						{
							cout<<"\n binary search tree is empty\n";
						}	
						else
						{
							postorder(root);
						}
					    break;
					case 6:
						if(root==NULL)
						{
							cout<<"\n binary search tree is empty\n:";
							
						}
						else
						{
							delnode(root);
						}
						break;
					case 7:
						exit(0);
					default:
						cout<<"\n enter valid choice\n";
	    	}
			cout<<"\n do u want to do other operation(1/0):";
	     	cin>>op;
        }while(op==1);
     }
	 void insert(struct bstree *temp)
	{
		found=0;
		while(temp!=NULL)
		{
			if(temp->data==ele)
			{
				cout<<"\n entered element is already present in the tree\n",ele;
				found=1;
		   		break;
			}
			else if(ele>temp->data)
			{	
				parent=temp;
				temp=temp->rchild;
			
			}
			else
			{
				parent=temp;
				temp=temp->lchild;
			}
			if(found==0)
        	{	 
           		node=new struct bstree;
           		node->data=ele;
           		node->lchild=NULL;
           		node->rchild=NULL;
           		if(ele>(parent->data))
           		{
          	 	 parent->rchild=node;
		   		}
		   		else
		   		{
		   			parent->lchild=node;
		   	
		   		}
		}	
    }
     void search(struct bstree *temp)
	{
		cout<<"\n enter element to be searched:";
		cin>>key;
		found=0;
		while(temp!=NULL)
		{
		 	if(temp->data==key)
			{
				cout<<"\n entered element is present in the tree\n";
				found=1;
				break;
			}
	    	else if(ele>temp->data)
			{
				temp=temp->rchild;
			}
			else
			{
				temp=temp->lchild;
			}
		}
		if(found==0)
		{	
			cout<<"\n entered element is not present in the tree\n";
		}		
	
	}
	void delnode(struct bstree *temp)
    {
	coout<<"\nenter element to be deleted:";
	cin>>d;
	found=0;
	while(temp!=NULL)
	{
		if(temp->data==d)
		{
			found=1;
			break;
			
		}
		else if(d>temp->data)
		{
			parent=temp;
			temp=temp->rchild;
			
		}
		else
		{
			parent=temp;
			temp=temp->lchild;
		}
		
	}
    }
	if(found==0)
	{
		cout<<"\n"<<"i haven't found "<<d<<"in the tree\n";
	}
	else
	{
		if(temp->lchild==NULL||temp->rchild==NULL)
		{
			if(temp->data<parent->data)
			{
				if(temp->lchild!=NULL)
				{
					parent->lchild=temp->lchild;
					delete temp;
				}
				else
				{
					parent->lchild=temp->rchild;
					delete temp;
				}
			}
			else
			{
				if(temp->lchild!=NULL)
				{
					parent->rchild=temp->lchild;
					delete temp;
					
				}
				else{
					parent ->rchild=temp->rchild;
					delete temp;
					
				}
			}
		}
		else
		{
			cout<<"\n I dont know how to delete this node....\n";
		}
	}
}
void preorder(struct bstree *temp)
{
	if(temp==NULL)
	{
		return;
	}
	else
	{
		cout<<temp->data<<" ";
		preorder(temp->lchild);
		preorder(temp->rchild);
	}
}
void inorder(struct bstree *temp)
{
	if(temp==NULL)
	{
		return;
	}
	else
	{
		inorder(temp->lchild);
		cout<<temp->data<<" ";
		inorder(temp->rchild);
	}
}
void postorder(struct bstree *temp)
{
	if(temp==NULL)
	{
		return;
	}
	else
	{
		postorder(temp->lchild);
		postorder(temp->rchild);
		cout<<temp->data<<" ";
	}
}
		
	



