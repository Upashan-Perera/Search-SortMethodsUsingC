#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "myfile1.h"

//declaring linearSearch function to search for a key string and return the position
int linearSearch(Array arr[], int SIZE , char key[20])
{
    int i;
    
    for ( i = 0 ; i < SIZE ; i++ )
    {
        //comparing each string
        if (strcmp(arr[i].name ,key) == 0)
        {
            //returning the position if found
            return i ;
        }
    }
    
    //returning -1 if there is no match found
    return -1 ;
}