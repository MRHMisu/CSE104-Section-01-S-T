#include <stdio.h>

// Liner search           ->                 <-
// intput ->given a array [23,43,32,2,21,34,36] 
// input ->search key 34 (int)
// output-> location (int) -> 5 / -1


int liner_search(int values[],int size, int search_key){
    int index=-1;
    for(int i=0;i<size; i++){
        if(values[i]==search_key)
        return i;
    }
    return index;
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

    int location=liner_search(numbers,size,search_key);
    (location==-1)? printf("Not Found\n"):printf("Search key Found at %d index\n", location);
        
    return 0;
}   
