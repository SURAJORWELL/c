//Selection sorting

#include<stdio.h>
#include<conio.h>
//#define SIZE 50

void main()
{
	int array[10], i,j,n,min,temp;

	printf("Enter the no. of elements-");
	scanf("%d",&n);
	printf("\nEnter elements-");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	
	//sorting code
	
	for(i=0;i<n-1;i++)
	{
		min=i; 
		for(j=i+1;j<n;j++){
			if(array[j]<array[min])
			{
				min=j;		//hold position only
			}
		}
		
		if(min!=i)
		{
			temp=array[i];		//at last swapped
			array[i]=array[min];
			array[min]=temp;	
		}
					
	}
		for(i=0;i<n;i++)
	{
		printf("%d\n",array[i]);
	}
	
}
