/* Q1. Given an array and a value, find if there is a triplet in array whose sum is equal to the given value. If there is such a triplet present in array, then print the triplet and .

Examples:

Input: array = {12, 3, 4, 1, 6, 9}, sum = 24;
Output: 12, 3, 9
Explanation: There is a triplet (12, 3 and 9) present
in the array whose sum is 24.
Input: array = {1, 2, 3, 4, 5}, sum = 9
Output: 5, 3, 1
Explanation: There is a triplet (5, 3 and 1) present
in the array whose sum is 9.    */


// Solution : Time Complexity = O(n) & Space Complexity = O(1)

#include<iostream>
using namespace std;

void find3Numbers(int A[], int arr_size, int sum)
{   // step 1 : Sorting of a given array 
    
    int i, j ,k , swap ;
    
    for( i = 0 ; i < arr_size-1 ; i++)
    {
        for(j = i+1 ; j < arr_size ; j++)
        {
            if(A[i] > A[j])
            {
                swap = A[i] ;
                A[i] = A[j] ;
                A[j] = swap ;
            }
        }
    }
    
    // step 2 : finding the Triplet in O(n) Time Coplexiy
    
    for(i = 0 ; i < arr_size-2 ; i++)
    {
        for(j = i+1 , k = arr_size-1 ; j < arr_size-1 , k > j ; )
        {
            if( A[i] + A[j] + A[k] == sum )
            {
                cout << A[i] << "," << A[j] << "," << A[k] ;
                break ;
            }
            else if(A[i] + A[j] + A[k] < sum)
            {
                j++ ;
            }  
            else if(A[i] + A[j] + A[k] > sum)
            {
                k-- ;
            } 
        }
    }
}

// Driver Code

int main()
{
    int A[] = { 1, 4, 45, 6, 10, 8 };
    int sum = 22;
    int arr_size = sizeof(A) / sizeof(A[0]);

    find3Numbers(A, arr_size, sum);

    return 0;
}