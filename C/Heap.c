#include<stdio.h>
#include<stdlib.h>
void heap(int a[], int n)
{
	int root;
	int i;
	int child1;
	int child2;
	int max,p;
	int flag=1;
	int t;
	if(n==1)
	{
		return;
	}
	else
	{
		while(flag==1)
		{
			flag=0;
			for(i=(n/2);i>0;i--)
			{
				root=a[i];
				child1=2*i;
				child2=2*i +1;
				if(child2<=n && a[child1]>a[child2])
				{
					max=a[child1];
					p=child1;	
				}
				else if(child2<=n && a[child2]>a[child1])
				{
					max=a[child2];
					p=child2;
				}
				else
				{
					max=a[child1];
					p=child1;
				}	
				if(max>root)
				{
					a[i]=a[p];
					a[p]=root;
					flag=1;
				}
			}
		}
		t=a[n];
		a[n]=a[1];
		a[1]=t;
		heap(a,n-1);
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
  	b=(int*)malloc(sizeof(int)*(n+1));
	for(i=0;i<n;i++)
		b[i+1]=a[i];
	heap(b,n);
	for(i=1;i<n+1;i++)
		a[i-1]=b[i];
  	printf("After Sort\n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}
