#include<stdio.h>
int stack[100],i,j,choice=0,n,top=-1;
void Push();
int Pop();
void Peek();
int main()
{
    printf("Enter the number of element to be entered in the stack:");
    scanf("%d",&n);
    while(choice!=4)
    {
        printf("Choose one from below option:\n");
        printf("1) Push \n 2) Pop \n 3) Peek \n 4) Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            Push();
            break;
        case 2:
            Pop();
            break;
        case 3:
            Peek();
            break;
        case 4:
            printf("Exit\n");
            break;
        default:
            printf("Please enter valid choice!");
        }

    }
    return 0;
}
void Push()
{
    int val;
    if(top==(n-1))
    {
        printf("Overflow");
    }
    else
    {
        printf("Enter the value:");
        scanf("%d",&val);
        top=top+1;
        stack[top]=val;
    }
    for(j=0;j<=(top-1);j++)
    {
        printf("%d\n",stack[j]);
    }
}
int Pop()
{
    if(top==-1)
    {
        printf("Underflow");
    }
    else
    {
        top=top-1;
    }
}
void Peek ()
{
    for(i=top;i>=0;i--)
    {
        printf("%d\n",stack[i]);
    }
    if(top==-1)
    {
        printf("Stack is empty\n");
    }
}
