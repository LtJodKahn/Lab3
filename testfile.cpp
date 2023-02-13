#include<bits/stdc++.h>
#include <stdlib.h>
#include <time.h>
#include "Untitled-1.h"
using namespace std;
int main(){
int arr1[] = {1,1,1,1,-1,-1,-1,-1,-1};
// int changedarr1[] = {1, -1, 1, -1, -1, 1, 1, -1, -1};
randomize(arr1, 9);
printArray(arr1, 9);
printArray(balancedlist(arr1, 9), 8);
int arr2[] = {1,1,1,1,1,-1,-1,-1,-1,-1,-1};
randomize(arr2, 11);
printArray(arr2, 11);
printArray(balancedlist(arr2, 11), 10);
int arr3[] = {1,1,1,1,1,1,1,-1,-1,-1,-1,-1,-1,-1,-1};
randomize(arr3, 15);
printArray(arr3, 15);
printArray(balancedlist(arr3, 15), 14);
int arr4[] = {1,-1,-1};
randomize(arr4, 3);
printArray(arr4, 3);
printArray(balancedlist(arr4, 3), 2);
}
