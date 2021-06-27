#include <stdio.h>

// given array 
// [5,2,3,7,4,8,1,9,6]
//    [2,5,3,7,4,8,1,9,6]
//       [2,3,5,7,4,8,1,9,6]
//          [2,3,5,4,7,8,1,9,6]
//             [2,3,4,5,7,8,1,9,6]
//                [2,3,4,5,7,1,8,9,6]
//                   [2,3,4,5,1,7,8,9,6]
//                      [2,3,4,1,5,7,8,9,6]
//                         [2,3,1,4,5,7,8,9,6]
//                            [2,1,3,4,5,7,8,9,6]
//                               [1,2,3,4,5,7,8,9,6]
//                                  [1,2,3,4,5,7,8,6,9]
//                                     [1,2,3,4,5,7,6,8,9]
//                                        [1,2,3,4,5,6,7,8,9]

// sort this array [1,2,3,4,5,6,7,8,9]

//[5,2,3,7,4,8,1,9,6]
void bubble_sort(int values[], int size){
    for(int i=0; i<size-1; i++){
         // i->5
        for(int j=0; j<size-1; j++){
            if(values[j] < values[j+1]){
                    int temp;
                    temp=values[j];
                    values[j]=values[j+1];
                    values[j+1]=temp;
            }
        }
    }
}


int main()
{
    int size;
    printf("Give array size: \n");
    scanf("%d", &size);
    int numbers[size];
    printf("Give array : \n");
    for(int i=0; i<size; i++){
        scanf("%d", &numbers[i]);

    }
    printf("Sorted Array\n");
    bubble_sort(numbers, size);
    for(int i=0; i<size; i++){
        printf("%d ", numbers[i]);

    }

    return 0;

}