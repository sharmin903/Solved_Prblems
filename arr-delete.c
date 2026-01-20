#include<stdio.h>
int main()
{
    int arr[100],pos,i,n;
    printf("Enter number of element: ");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the position of the element to be deleted: ");
    scanf("%d", &pos);
    if(pos < 1 || pos > n)
    {
        printf("Invalid position!\n");
        return 1;
    }
    for(i=pos-1;i<n-1;i++)
    {
        arr[i]=arr[i + 1];
    }
    printf("Array after deleting the element: \n");
    for(i=0;i<n-1;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
