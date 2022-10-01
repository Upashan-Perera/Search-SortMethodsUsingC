#include <stdio.h>
#include "myfile1.h"

//calling the display function to print all the data in the array
int display(Array arr[] , int SIZE)
{
    int i ;
    
    for(i = 0 ; i < 10 ; i++)
    {
        //printing all the data in the array
        printf("\t %s \t %d \t %d \t %f \n",arr[i].name ,arr[i].age , arr[i].bday , arr[i].marks);
    }
    
    printf("\n");
}