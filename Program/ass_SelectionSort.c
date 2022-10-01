#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "myfile1.h"

//declaring the ass_SelectionSort function to sort the array according to the name
void ass_SelectionSort(Array arr[], int SIZE)
{
	int i;
	int j , min;
	
	//comparing two elements in the array and if needed swaping the two positions	
	for (i = 0; i < SIZE - 1 ; i++)
	{
		Array temp;
		
		min = i;
		
		for (j = i+1 ; j < SIZE ; j++)
		{
			if( strcmp(arr[j].name ,arr[min].name) < 0)
			{
				min = j;
			}
		}
		
		temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;
	}
	
	printf("\n");
	
	printf("selection sorted array: \n");
	
	for(i = 0 ; i < 10 ; i++)
    {
        //printing the sorted array
        printf("\t %s \t %d \t %d \t %f \n",arr[i].name ,arr[i].age , arr[i].bday , arr[i].marks);
    }
    
    printf("\n");
}