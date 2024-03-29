/*Monk watching fight 
Once Monk was watching a fight between an array and a tree, of being better. Tree
got frustrated and converted that array into a Binary Search Tree by inserting the
elements as nodes in BST, processing elements in the given order in the array. Now
Monk wants to know the height of the created Binary Search Tree.
Help Monk for the same.
Note:
1) In Binary Search Tree, the left sub-tree contains only nodes with values less than
or equal to the parent node; the right sub-tree contains only nodes with values
greater than the parent node.
2) Binary Search Tree with one node, has height equal to 1.
Input Format
The first line will consist of 1 integer N, denoting the number of elements in the array.
In next line, there will be N space separated integers, A[i], where 1 ≤ I ≤ N, denoting
the elements of array.
Output Format
Print the height of the created Binary Search Tree.*/
#include<stdio.h>
#include<stdlib.h>
struct tree {
long int data;
struct tree *left;
struct tree *right;
};
struct tree * maketree(long int info)
{
struct tree *ps;
ps=(struct tree *)malloc(sizeof(struct tree ));
ps->data=info;
ps->right=NULL;
ps->left=NULL;
return ps;
}
void setleft(struct tree *ps1 ,long int info)
{
if(ps1->left!=NULL)
{
printf("Invalisd insertiion");
}
else
{
ps1->left=maketree(info);
}
}
void setright(struct tree *ps1 ,long int info)
{struct tree *ps;
if(ps1->right!=NULL)
{
printf("Invalisd insertiion");
}
else
{
ps1->right=maketree(info);
}
}
void intrav(struct tree *ps)
{
if(ps!=NULL)
{
printf("%ld",ps->data);
intrav(ps->left);
intrav(ps->right);
}
}
void main()
{
struct tree *ps,*q,*p;
long int A[1000],info;
int n,i,h;
i=0;
scanf("%d",&n);
while(i<n)
{
scanf("%ld ",&info);
A[i]=info;
i++;
}
i=0;
ps=maketree(A[0]);
i++;
while(i<n)
{
p=q=ps;
while(q!=NULL)
{
p=q;
if(p->data<A[i])
{
q=p->left;
}
else
{
q=p->right;
}
}
if(q->data<A[i])
{
setleft(p,A[i]);
}
else
{
setright(p,A[i]);
}
}
h=height(ps);
printf("%d",h);
}

int height (struct tree *ps)
{ int l,r;
l=1,r=1;

while(ps!=NULL)
{
if(ps->left!=NULL)
{

l+=1;
}
if(ps->right!=NULL){

r+=1;
}
if(l>=r)
{
ps=ps->left;

}
else
{
ps=ps->right;
}
};
return ((l>r)?l:r);
}