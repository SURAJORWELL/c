#include<stdio.h>
#include<conio.h>
void main()
{
    int a[50],i,n,j,temp,key,mid,last,first=0,flag=0;
    printf("enter how many elements in array");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    //for sorting
for(i=0;i<n-1;i++)
{
    for(j=0;j<n-i-1;j++)
    {
      if(a[j]>a[j+1])
      {
	temp=a[j];
	a[j]=a[j+1];
	a[j+1]=temp;
      }
    }
}
    
    printf("enter the searching element");
    scanf("%d",&key);
    
    last=n-1;

    while(first<=last)
    {
        mid=(first+last)/2;
        if(a[mid]==key)
        {	
        	printf("Element found");
            printf("locatin is %d",mid+1);
            flag=1;
            break;
        }
        else if(a[mid]>key)
        {
            last=mid-1;
        }
        else
        {
            first=mid+1;
        }
    }
    if(flag==0)
      {
          printf("searching element not found");
      }
    getch();
}
