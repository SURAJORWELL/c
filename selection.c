#include<stdio.h>
void main()
{
    int a[50],i,j,temp,min,n;
    printf("enter how many elements in array");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[min]>a[j])
            {
              min=j;
            }
        }
        if(a[i]!=a[min])
        {
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
        }
    }

    printf("after sorting the array is");
    for(i=0;i<n;i++)
    {
      printf("%3d",a[i]);
    }
    getch();

}
