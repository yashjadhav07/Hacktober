#include<stdio.h>

int main(){
int size,i;
printf("enter the size of array");
scanf("%d",&size);
int disp[size];
for(i=0;i<size;i++)
scanf("%d",&disp[i]);
display(disp,size);

}
int display(int a[],int s)
{
int i=0;
for(i=0;i<s;i++)
{
printf("%d\n",a[i]);
}


}
