#include <stdio.h>
#include <conio.h>

void main()
{
	clrscr();
	int i, n= 5, sum, a[] = {1, 2, 3, 5};
	for (i=0; i<n; i++)
     /*  {
		scanf("%d", a[i]);
	}
     */
	sum = (n+1)*(n+2)/2;

	for (i =0; i<n; i++)
	{
		sum -= a[i];
	}
	printf("The missing number is %d", sum);
	getch();
}