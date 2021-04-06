#include<stdio.h>
#include<stdlib.h>
void insertion(int a[], int n)
{
  int t, i, j;
	for(i=1;i<n;i++)
	{
		t=a[i];
		for(j=i-1;j>=0 && t<a[j];j--)
			a[j+1]=a[j];
		a[j+1]=t;
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
  	insertion(a,n);
  	printf("After Sort\n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}
