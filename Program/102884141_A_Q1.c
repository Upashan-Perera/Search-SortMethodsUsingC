#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "myfile1.h"
#include "menu.h"

int main()
{
    //declaring variables
    FILE *fptr;
    FILE *fpt;
    ArrayPtr startPtr = NULL ;
    Array arr[10];
    int i , choice1 , choice2 , choice3 , choice4 , answer ;
    char key[20];
    
    //opening the new.txt file to store the data in an array
    fptr = fopen("new.txt","r");
    
    //checking whether the file is empty
    if(fptr == NULL)
    {
        printf("Sorry the file is not found");
        exit(0);
    }
    
    //storing the data in an array
    for(i = 0 ; i < 10 ; i++)
    {
        fscanf(fptr,"%s %d %d %lf", arr[i].name ,&arr[i].age , &arr[i].bday , &arr[i].marks);
    }
    
    //closing the file
    fclose(fptr);
    
    //creating an infinity loop
    while(1)
    {
        //calling the menu function to print the insturctions
        menu();
        
        printf("\n");
    
        //getting the user input
        printf("Select the option: \n");
        scanf("%d",&choice1);
        
        printf("\n");
        
        //creating a switch statement with the parameter choice1
        switch(choice1)
        {
            case 1 :
                    //calling the display function to display the stored array
                    display(arr , 10);
                    break;
                    
            case 2 :
                    //getting the user input about whether to sort in ascending or descending order
                    printf("Do you want to sort the array in \n");
                    printf("\t1.ascending \n");
                    printf("\t2.descending order? \n");
                    scanf("%d",&choice2);
                    
                    printf("\n");
                    
                    if ( choice2 == 1)
                    {
                        //getting the user input about the technoque used for sorting the array
                        printf("In which technique do you want to sort the array? \n");
                        printf("\t1. Bubble sort \n");
                        printf("\t2. Selection sort \n");
                        printf("\t3. Insertion sort \n");
                        scanf("%d",&choice3);
                        
                        switch(choice3)
                        {
                            case 1 :
                                    //calling the ass_BubbleSort function to sort the array in bubble method in ascending order
                                    ass_BubbleSort(arr , 10);
                                    break;
                                    
                            case 2 :
                                    //calling the ass_SelectionSort function to sort the array in bubble method in ascending order
                                    ass_SelectionSort(arr , 10);
                                    break;
                                    
                            case 3 : 
                                    //calling the ass_insertionSort function to sort the array in bubble method in ascending order
                                    ass_insertionSort(arr , 10);
                                    break;
                                    
                            default :
                                    //giving the message to the user to insert a valid choice
                                    printf("Invalid choice \n");
                                    break;
                        }
                    }
                    else if( choice2 == 2 )
                    {
                        //getting the user input about the technoque used for sorting the array
                        printf("In which technique do you want to sort the array? \n");
                        printf("\t1. Bubble sort \n");
                        printf("\t2. Selection sort \n");
                        printf("\t3. Insertion sort \n");
                        scanf("%d",&choice3);
                        
                        switch(choice3)
                        {
                            case 1 :
                                    //calling the ass_BubbleSort function to sort the array in bubble method in descending order
                                    desc_BubbleSort(arr , 10);
                                    break;
                                    
                            case 2 :
                                    //calling the ass_SelectionSort function to sort the array in bubble method in descending order
                                    desc_SelectionSort(arr , 10);
                                    break;
                                    
                            case 3 :
                                    //calling the ass_insertionSort function to sort the array in bubble method in descending order
                                    desc_insertionSort(arr , 10);
                                    break;
                                    
                            default :
                                    //giving the message to the user to insert a valid choice
                                    printf("Invalid choice \n");
                                    break;
                        }
                    }
                    else
                    {
                        //giving the message to the user to insert a valid choice
                        printf("Invalid choice \n");
                    }
                    
                    //opening another file to insert the sorted array
                    fpt = fopen("updatedtext.txt","w");
                    
                    //checking whether if the file is found
                    if(fpt == NULL)
                    {
                        printf("File is not found \n");
                        exit(0);
                    }
                    
                    //printing the data in the file
                    for(i = 0 ; i < 10 ; i++)
                    {
                        fprintf(fpt,"%s\t",arr[i].name);
                        fprintf(fpt,"%d\t",arr[i].age);
                        fprintf(fpt,"%d\t",arr[i].bday);
                        fprintf(fpt,"%.2lf\n",arr[i].marks);
                    }
                    
                    //closing the file
                    fclose(fpt);
                    
                    break;
                    
            case 3 :
                    //getting the user input about the searching technique to be used
                    printf("Which searching technique do you like? \n");
                    printf("\t1.linear search \n");
                    printf("\t2.binary search \n");
                    scanf("%d",&choice4);
                    
                    printf("\n");
                    
                    //getting the search key string from the user
                    printf("Enter string search key : \n");
                    scanf("%s",key);
                    
                    switch(choice4)
                    {
                        case 1 :
                                //calling the linearSearch function to search for the position
                                answer = linearSearch(arr , 10 , key);
                                
                                if(answer < 0 )
                                {
                                    printf("Value not found \n");
                                }
                                else
                                {
                                    //printing all the data in that position
                                    printf("\t %s \t %d \t %d \t %f \n",arr[answer].name ,arr[answer].age , arr[answer].bday , arr[answer].marks);
                                }
                                
                                break;
                                
                        case 2 : 
                                //first dorting the array beofre binary searching
                                ass_BubbleSort(arr , 10);
                                
                                //calling the binarySearch function to search for the position
                                answer = binarySearch(arr , key , 0 , 9);
                                
                                if(answer < 0 )
                                {
                                    printf("Value not found \n");
                                }
                                else
                                {
                                    //printing all the data in that position
                                    printf("\t %s \t %d \t %d \t %f \n",arr[answer].name ,arr[answer].age , arr[answer].bday , arr[answer].marks);
                                }
                                
                                break ;
                                
                        default :
                                //giving the message to the user to insert a valid choice
                                printf("Invalid choice \n");
                                break ;
                    }
                    
                    break;
                    
            case 4 :
                    //calling the linkedList function to store the data in the array into a linked list
                    linkedList(arr , 10 ,  startPtr);
                    break;
                    
            case 5 :
                    //end of the program
                    exit(0);
                    
            default : 
                    //giving the message to the user to insert a valid choice
                    printf("Invalid choice \n");
                    break;
        }
    }

    return 0;
}