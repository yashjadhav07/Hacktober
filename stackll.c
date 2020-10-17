#include<stdio.h>
struct stack{
int info;
struct stack *next;

};struct stack *top,*t;
int main(){

int i,ch;
top=NULL;
while(1){
    printf("\n Enter your choice \n1.Push\n2.Pop\n3.Display\n4.Exit\n");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        t=(struct stack*)malloc(sizeof(struct stack));
        printf("Enter the data to push");
        scanf("%d",&t->info);
        t->next=top;
        top=t;
        break;

    case 2:
        if(top==NULL){
        printf("Stack is empty");
        }
        else{
        t=top;
        printf("element popped is %d",t->info);
        top=t->next;
        free(t);




        }
        break;
    case 3:
        if(top==NULL){
        printf("Stack is empty");
        }
        else
        {
            for(t=top;t!=NULL;t=t->next)
            {
                printf("\n %d",t->info);
            }
        }
        break;
    case 4:
        exit(0);
}


}
}
