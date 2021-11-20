# include <stdio.h>
# include <stdlib.h> /*for calloc*/
# include "partialSums3.h"

/*the function main scans an array of integers, prints it, and then prints its partial sums array*/
int main()
{
	int length, i; /*the array's length, index*/
	int *p; /*pointer to the place where the users' array will be*/
	int *ps; /*pointer to the place where the partial sums array will be*/
	printf("\nHow many numbers are in the array?\n");
	scanf("%d", &length);
	p = (int *) calloc(length, SIZE); /*allocating memory for the array that will be recieved by the user*/
	if (!p) /*if p = NULL*/
	{
		printf("\nmemory allocation failed\n");
		exit(0);
	}
	printf("\nPlease insert the array's integers:\n");
	i = 0; /*index*/
	while (i<length) /*while the index is smaller then the array's length*/
	{
		scanf("%d", &p[i]);
		i++;
	}
	printf("\nThe array you have entered is:\n");
	i = 0; /*index*/
	while (i<length) /*while the index is smaller then the array's length*/
	{
		printf("%d ", p[i]);
		i++;
	}
	ps = partialSums(p, length);
	printf("\nThe partial sums array is:\n");
	i = 0; /*index*/
	while (i<length) /*while the index is smaller then the array's length*/
	{
		printf("%d ", ps[i]);
		i++;
	}
	printf("\n");
	free(p);
	free(ps);
	return 0;
}/*end of main*/
