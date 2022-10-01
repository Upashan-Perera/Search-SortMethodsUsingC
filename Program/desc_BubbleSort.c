#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "myfile1.h"

//declaring the desc_BubbleSort function to sort the array in descending order according to the name
void desc_BubbleSort(Array arr[], int SIZE)
{
	int i, j ;
	Array temp;
	
	//comparing two elements in the array and if needed swaping the two positions
	for (i = 0 ; i < (SIZE - 1) ; i++)
	{
		for (j = 0 ; j < SIZE - 1 - i ; j++)
		{
			if( strcmp(arr[j].name ,arr[j+1].name) < 0)
			{
				temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	printf("\n");
	
	printf("bubble sorted array: \n");
	
	for(i = 0 ; i < 10 ; i++)
    {
        //printing the sorted array
        printf("\t %s \t %d \t %d \t %f \n",arr[i].name ,arr[i].age , arr[i].bday , arr[i].marks);
    }
    
    printf("\n");
}