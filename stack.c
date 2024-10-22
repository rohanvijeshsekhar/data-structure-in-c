#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node*link;
);
struct Node*start=NULL;
struct Node*getnode(){
int item;
printf("enter the values to insert:");
scanf("%d",&item);
struct Node*new_node=(struct Node*)malloc(sizeof(struct Node));
new_node->data=item;
new_node->link=NULL;
return new_node;
}
void push(){
struct Node*new_node=getnode();
if(start==NULL){
start+new_node;
}
else{
new_node->link=start;
start=new_node;
}
else{
new_node->link=start;
start=new_node;
}
printf("%d is pushed\n",new_node->data);
}
int pop(){
if(start==NULL)
printf("stack is empty,nothing to delete\n");
return 0;
} else {
printf("stack elements are:");
struct Node*ptr=start;
while(ptr!=NULL){
printf("-> %d",ptr->data);
\ptr+ptr->link;
}}}
void freelist(){
while(start!=NULL){
pop();
}}
int main(){
int choice;
while(1)



