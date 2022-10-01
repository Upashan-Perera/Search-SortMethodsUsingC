#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "myfile1.h"

//declaring the binarySearch function to search for a key string and retrn the position
int binarySearch(Array arr[] , char key[20] , int low , int high)
{
    int middle ,  i;
    
    while (low <= high) 
    {
        middle = (low + high)/2;
        
        //comparing the string 
        if(strcmp(arr[middle].name ,key) == 0)
        {
            //returning the position of the key
            return middle;
        }
        //comparing the string 
        else if(strcmp(arr[middle].name ,key) > 0)
        {
            high = middle - 1;
        }
        else 
        {
            low = middle + 1;
        }
    }
    
    //returning -1 if there is no match
    return -1;
}