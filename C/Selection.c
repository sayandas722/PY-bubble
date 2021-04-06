#include<stdio.h>
#include<stdlib.h>
void selection(int a[], int n)
{
	int p; int min;
	int i, j, t;
	for(i=0;i<(n-1);i++)
	{
		p=i;
		min=a[p];
		for(j=i+1;j<n;j++)
		{
			if(min>a[j])
			{
				min=a[j];
				p=j;
			}
		}
		t=a[i];
		a[i]=a[p];
		a[p]=t;
	}
}
void main()
{
	int n; int *a; int *b;
	int i; int ch;
	printf("Enter the size of the array=> ");
	scanf("%d",&n);
	fflush(stdin);
	
	a=(int*)malloc(sizeof(int)*n);
	printf("Enter the Values in the Array\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Menu\n1) Bubble Sort\n2) Selection\n3) Insertion\n4) Quick\n5) Merge\n6) Heap\nEnter the choice=> ");
	scanf("%d",&ch);
	fflush(stdin);
  selection(a,n);
  printf("After Sort\n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}
