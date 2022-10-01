//structure prototype
struct array {
    char name[20];
    int age;
    int bday;
    double marks;
    struct array *next ;
};

typedef struct array Array ;
typedef Array * ArrayPtr ;

 
 //function prototypes
 int display(Array arr[] , int SIZE);
 void ass_BubbleSort(Array arr[], int SIZE);
 void ass_SelectionSort(Array arr[], int SIZE);
 void ass_insertionSort(Array arr[], int SIZE);
 void desc_BubbleSort(Array arr[], int SIZE);
 void desc_SelectionSort(Array arr[], int SIZE);
 void desc_insertionSort(Array arr[], int SIZE);
 int linearSearch(Array arr[], int SIZE , char key[20]);
 int binarySearch(Array arr[] , char key[20] , int low , int high);
 void linkedList(Array arr[] , int SIZE , ArrayPtr startPtr);
 
 
 