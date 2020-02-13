#include<stdio.h>
#include<conio.h>
int main()
{
  int arr[50],n,key,i,flag=0;
  printf("enter how many elements in array");
  scanf("%d",&n);
  printf("enter the elements in array");
  for(i=0;i<n;i++)
  scanf("%d",&arr[i]);
  printf("enter the searching element");
  scanf("%d",&key);
  
  for(i=0;i<n;i++)
  {
    if(arr[i]==key)
    {
      printf("the location is %d",i+1);
      flag=1;
      break;
    }
  }
  
  if(flag==0)
  {
   printf("searching element not found");
  }
  return 0;
}
