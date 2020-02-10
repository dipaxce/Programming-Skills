#include <stdio.h>
#include <conio.h>


void main()
{

	int i, j, t, n, number[30];
	clrscr();
	printf("Enter the value of N: \n");
	scanf("%d", &n);

	printf("Enter the numbers: \n");
	for (i = 0; i < n; ++i)
	    scanf("%d", &number[i]);

	for (i = 0; i < n; i++)
	{

	    for (j = i + 1; j < n; j++)
	    {

		if (number[i] > number[j])
		{

		    t =  number[i];
		    number[i] = number[j];
		    number[j] = t;

		}

	    }

	}

	printf("The numbers arranged in ascending order are given below \n");
	for (i = 0; i < n; i++)
	    printf("%d\n", number[i]);
       getch();

}