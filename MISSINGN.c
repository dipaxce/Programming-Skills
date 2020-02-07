#include <stdio.h>
#include <conio.h>

void main()
{
	int i, n, sum, a[] = {2,3,4,5};
	clrscr();
	printf("Enter the size of array:");
	scanf("%d", &n);

	printf("Enter the values in array:");
	for (i=0; i<n; i++)
	{
		scanf("%d", a[i]);
	}

	sum = (n+1)*(n+2)/2;

	for (i =0; i<n; i++)
	{
		sum -= a[i];
	}
	printf("The missing number is %d", sum);
	getch();
}