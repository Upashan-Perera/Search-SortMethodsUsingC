#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "myfile1.h"

//declaring linkedList function to store all the data in the array in a linked list
void linkedList(Array arr[] , int SIZE , ArrayPtr startPtr)
{
    ArrayPtr newPtr , currentPtr , previousPtr;
    int i ;
    
    for(i = 0 ; i < SIZE ; i++)
    {
        //allocating new memory space to store new data
        newPtr = malloc(sizeof(Array));
        
        //storing the data
        strcpy(newPtr->name , arr[i].name );
        newPtr->age = arr[i].age;
        newPtr->bday = arr[i].bday;
        newPtr->marks = arr[i].marks;
        newPtr->next = NULL ;
        
        previousPtr = NULL ;
        currentPtr = startPtr ; 
        
        //using a while loop in order to sort the linked list in alphabetical order of the book names
        while(currentPtr != NULL && strcmp(newPtr->name , currentPtr->name) > 0)
        {
            previousPtr = currentPtr ;
            currentPtr = currentPtr->next ;
        }
        
        if(previousPtr == NULL)
        {
            newPtr->next = startPtr ;
            startPtr = newPtr ;
        }
        else
        {
            previousPtr->next = newPtr ;
            newPtr->next = currentPtr ;
        }
    }
    
    currentPtr = startPtr ;
    
    for(i = 0 ; i < SIZE ; i++)
    {
        //printing all the data in the linked list
        printf("\t%s %d %d %.2lf\n",currentPtr->name ,currentPtr->age ,currentPtr->bday ,currentPtr->marks);
        currentPtr = currentPtr->next ;
    }
}