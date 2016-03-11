/*
OVERVIEW: Given a sorted array, insert a given number into the array at appropriate position.
			E.g.: Arr = [2, 4, 6], num = 5 final Arr = [2, 4, 5, 6]. 5 is inserted at 2nd index.

INPUTS: Integer	Array pointer, length of the array, number to be inserted.

OUTPUT: Array pointer after inserting number.

ERROR CASES: Return NULL for invalid inputs.

NOTES: Use realloc to allocate memory.
*/

#include <stdio.h>
#include <malloc.h>

int * sortedArrayInsertNumber(int *Arr, int len, int num)
{
	int i = 0,j;
	
	if (Arr == NULL || len < 1){ return NULL;}
	j = len+1;
	if (Arr[len - 1] > num){
		while (i < len)
		{
			if (Arr[i] > num)
			{
				j = j - 1;
				while (j >= i + 1)
				{
					Arr[j] = Arr[j - 1];
					j--;
				}
				Arr[i] = num;
				return Arr;
			}

			i++;
		}
	}
	if (Arr[len-1] < num){ 
	Arr[j - 1] = num;
	return Arr;
	}
}
