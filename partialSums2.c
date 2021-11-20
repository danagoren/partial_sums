# include <stdio.h>
# include <stdlib.h> /*for calloc*/
# include "partialSums3.h"

/*the function partialSums receives an array of integers, and then calculates and returns its partial sums array*/
int * partialSums(int *p, int length)
{
	int *new; /*pointer to the place where the partial sums array will be*/
	int j; /*index*/
	new = (int *) calloc(length, SIZE); /*allocating memory for the partial sums array*/
	if (!new) /*if new = NULL*/
	{
		printf("\nmemory allocation failed\n");
		exit(0);
	}
	new[0] = p[0]; /*copying the first integer of the received array to the partial sums array*/	
	j = 1;/*j is the index. we start from the second number (index 1) because the first number has already beed copied*/
	while (j<length) /*while the index is smaller then the array's length*/
	{
		new[j]=(p[j]+new[j-1]); /*for example, if p = {a,b,c,...}, then a = {a,a+b,(a+b)+c,...}*/
		j++; 
	}
	return new;
}/*end of partialSums*/
