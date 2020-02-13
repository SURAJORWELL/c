#include<stdio.h>
#include<conio.h>
int main()
{
  int array[50],i,j,temp,n;
  printf("How many elements do you want to sort?-");
  scanf("%d",&n);
  printf("enter the elements-");
  for(i=0;i<n;i++)
  scanf("%d",&array[i]);
  for(i=0;i<n-1;i++)
  {
    for(j=0;j<n-i-1;j++)
    {
      if(array[j]>array[j+1])
      {
	temp=array[j];				// through swapping
	array[j]=array[j+1];
	array[j+1]=temp;
      }
    }
  }
  printf("Sorting array is-");
  for(i=0;i<n;i++)
  printf(" %d",array[i]);
  return 0;
}
