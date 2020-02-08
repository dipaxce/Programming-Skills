#include <stdio.h>
#include <conio.h>

void main()
{
	int i,j,n=4, a[] = {3,14,5,7}, t=8;
	clrscr();

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		     if (a[i]+a[j] == t)
		     {
			printf("The index is %d and %d", a[i], a[j]);
		     }
		}
	}

	getch();
}