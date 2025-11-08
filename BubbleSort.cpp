//Bubble Sort
#include <stdio.h>
#include <conio.h>

int main()
{
	int x[10], i, j, n, t;
	printf("Enter the mumber:");
	scanf("%d", &n);
	
	printf("Enter numbers one by one:");
	for(i=0; i<n; i++)
	{
		scanf("%d", &x[i]);
	}
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n-i-1; j++)
		{
			if(x[j]>x[j+1])
			{
				t = x[j];
				x[j] = x[j+1];
				x[j+1] = t;
			}
		}
	}
	
	printf("Sorted list in ascending order\n");
	for(i=0; i<n; i++)
	printf("%d", x[i]);
	getch();
	return 0;
}
