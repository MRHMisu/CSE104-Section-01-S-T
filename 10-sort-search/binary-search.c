#include <stdio.h>

// Binary search     
// intput ->given a array [23,43,32,2,21,34,36] 
// input ->search key 34 (int)
// output-> Found or Not Found


// if the array is sorted then we can perform binary search
//  2 45 65 23 76 12 43 13 (unsorted)
//  2 12 13 23 43 45 65 76 (sorted)

// search key 55
//   0 1   2  3  4  5  6  7 
//   2 12 13 23 43 45 65 76 -> mid point index= 4
//   L    M      H

int binary_search(int values[],int size, int search_key){
    int low=0;
    int high=size-1;
    int mid=low+(high-low)/2;

    printf("low: %d, high: %d mid:%d", low, high, mid);

    while (low <= high)
    {
        if(values[mid]== search_key)
            return mid;
        if(values[mid]<search_key){
            low=mid+1;
        }
        else {
            high=mid-1;
        }
    }  
    return -1;
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
    int search_key;
    printf("Give search key: \n");
    scanf("%d", &search_key);

    int location=binary_search(numbers,size,search_key);
    (location==-1)? printf("Not Found\n"):printf("Search key Found at %d index\n", location);
        
    return 0;
        
    return 0;
}   

