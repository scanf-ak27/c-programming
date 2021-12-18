#include<stdio.h>
#include<stdlib.h>
int a[10],n,i;
void create()
{
    printf("Enter array size :\n");
    scanf("%d",&n);
    printf("Enter array elements :\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
}
void insert()
{
    int pos,ele;
    printf("Enter position where element is to be inserted :\n");
    scanf("%d",&pos);
    printf("Enter element to be inserted :\n");
    scanf("%d",&ele);
    if(pos<=n)
    {
    for(i=n;i>=pos;i--)
    {
        a[i]=a[i-1];
    }
     a[pos-1]=ele;
     n=n+1;
    }
}
void delete()
{
    int pos;
    printf("Enter pos from where you want to del element ");
    scanf("%d",&pos);
    printf("Deleted element is %d \n",a[pos-1]);
    for(i=pos-1;i<n;i++)
    {
        a[i]=a[i+1];
    }
    n--;
}
void display()
{
    printf("Array elements are :\n");
    for(i=0;i<n;i++)
    {
          printf("%d\n",a[i]);
    }
    printf("\n");
}
void main()
{
    int ch;
    printf("----ARRAY OPERATIONS----\n\n");
    printf("1.Create\n2.Insert\n3.Delete\n4.Display\n");
    while(1)
    {
        printf("Enter your choice : \n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            create();
            break;
            case 2:
            insert();
            break;
            case 3:
            delete();
            break;
            case 4:
            display();
            break;
            case 5:
            exit(0);
            default:
            printf("Wrong choice!!!");
        }
    }
}
