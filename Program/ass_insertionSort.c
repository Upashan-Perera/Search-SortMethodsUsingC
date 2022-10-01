#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "myfile1.h"

//declaring the ass_insertionSort function to sort the array according to the name
void ass_insertionSort(Array arr[], int SIZE)
{
	int i, j ;
	Array index;
	
	//comparing two elements in the array and if needed swaping the two positions
	for (i = 1 ; i < SIZE ; i++)
	{
		index = arr[i];
		
		for (j = i ; j > 0 && strcmp(arr[j-1].name ,index.name) > 0 ; j--)
		{
			arr[j] = arr[j-1];
		}
		
		arr[j] = index;
	}
	
	printf("\n");
	
	printf("Insertion sorted array: \n");
	
	//printing the sorted array
	for(i = 0 ; i < 10 ; i++)
    {
        printf("\t %s \t %d \t %d \t %f \n",arr[i].name ,arr[i].age , arr[i].bday , arr[i].marks);
    }
    
    printf("\n");
}