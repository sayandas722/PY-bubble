#include<stdio.h>
#include<stdlib.h>
void quick(int a[], int f, int l)
{
	int t;
	int f1,f2,l1,l2;
	int p=f;
	int x=f+1;
	int y=l;
	int pivot=a[f];
	if(f>=l)
		return;
	else
	{
		
		while(x<=y)
		{
			while(x<=y && a[x]<pivot)
			{
				x++;
			}
			while(y>=x && a[y]>=pivot)
			{
				y--;
			}
			if(x<y)
			{
				t=a[x];
				a[x]=a[y];
				a[y]=t;
			}
		}
		t=a[y];
		a[y]=pivot;
		a[p]=t;
		
		
		quick(a,f,y-1);
		quick(a,y+1,l);
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
  	quick(a,0,n-1);
  	printf("After Sort\n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}
