#include<bits/stdc++.h>
#include <stdlib.h>
#include <time.h>
#include "Untitled-1.h"
using namespace std;
 

void swap (int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
 
// A utility function to print an array
void printArray(int arr[], int n)
{
   for (int i = 0; i < n; i++){
        if(i + 1 == n){
            printf("%d", arr[i]);
        }
        else{
            printf("%d, ", arr[i]);
   }
}
printf("\n");
}

// A function to generate a random
// permutation of arr[]
void randomize (int arr[], int n)
{
    // Use a different seed value so that
    // we don't get same result each time
    // we run this program
    srand (time(NULL));
 
    // Start from the last element and swap
    // one by one. We don't need to run for
    // the first element that's why i > 0
    for (int i = n - 1; i > 0; i--)
    {
        // Pick a random index from 0 to i
        int j = rand() % (i + 1);
 
        // Swap arr[i] with the element
        // at random index
        swap(&arr[i], &arr[j]);
    }
}

/// This is where the balance begins
int* balancedlist(int arr[], int n){
    int lowest_depth = 0;
    int lowest_depth_index = 0;
    int last_part_of_p2 = 0;
    int depth = 0;
    int* p2 = (int*)malloc(sizeof(int) * (2 * n));
    
    for(int i = 0; i < n; i++){
        depth += arr[i];
        if(depth < lowest_depth){
            lowest_depth = depth;
            lowest_depth_index = i;
        }
    }
    depth = 0;
    // printf("\n lowest_depth = %d\n", lowest_depth);
    // printf("\n lowest_depth_index = %d\n", lowest_depth_index);

    if(lowest_depth >= 0){
        return arr;
    }
    else{
        //we extract from main list into p1
        int recovery_depth_index = lowest_depth_index + 1;
        for(int i = recovery_depth_index, j = 0;  i < n; i++, j++){
            p2[j] = arr[i];
            // printf("\n p2[j] = %d \n", p2[j]);
            if(i + 1 == n){
                last_part_of_p2 = j + 1;
            }

        }
        // printf("\n last_part_of_p2 = %d \n", last_part_of_p2);
        // printf("this is p2[j] \n");
        for(int j = last_part_of_p2, i = 0; i < lowest_depth_index; i++, j++){
            p2[j] = arr[i];

        }
        return p2;
    }

}





