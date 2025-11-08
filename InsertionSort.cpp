//Insertion Sort
#include <stdio.h>
#include <conio.h>

void insert(int a[], int n);
int main()
{
	int a[30], i, n;
	printf("Enter the number of elements:");
	scanf("%d", &n);
	
	printf("Enter the element of the array:");
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	insert(a,n);
	printf("\n The stored array is: ");
	for(i=0; i<n; i++)
	{
		printf("%d", a[i]);
	}
	getch();
	return 0;
}

void insert(int a[], int n)
{
	int i, j ,t;
	for(i=1; i<n; i++)
	{
		t=a[i];
		j=i-1;	
	}
	
	 while(j >= 0 && t < a[j])
	{
		a[j+1] = a[j];
		j--;
	}
	a[j+1] = t;
}
