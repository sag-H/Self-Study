// Section 12
// Challenge

/* Write a C++ function named apply_all that expects two arrays of integers and their sizes and
  dynamically allocates a new array of integers whose size is the product of the 2 array sizes
  
  The function should loop through the second array and multiplies each element across each element of array 1 and store the
  product in the newly created array.
  
  The function should return a pointer to the newly allocated array.
  
  You can also write a print function that expects a pointer to an array of integers and its size and display the
  elements in the array.
    
  For example,
  
  Below is the output from the following code which would be in main:
  
    int array1[] {1,2,3,4,5};
    int array2[] {10,20,30};
    
    cout << "Array 1: " ;
    print(array1,5);
    
    cout << "Array 2: " ;
    print(array2,3);
    
    int *results = apply_all(array1, 5, array2, 3);
    cout << "Result: " ;
    print(results,15);
   
   Output
   ---------------------
   Array 1: [ 1 2 3 4 5 ]
   Array 2: [ 10 20 30 ]
   Result: [ 10 20 30 40 50 20 40 60 80 100 30 60 90 120 150 ]
*/
  
#include <iostream>

using namespace std;

void print(const int *arr, int arr_len);
int* apply_all(int *arr1, size_t arr1_len, int *arr2, size_t arr2_len);


int main() {
    const size_t array1_size {5};
    const size_t array2_size {3};
    
    int array1[] {1,2,3,4,5};
    int array2[] {10,20,30};
    
    cout << "Array 1: " ;
    print(array1,array1_size);
    
    cout << "Array 2: " ;
    print(array2,array2_size);
    
    int *results = apply_all(array1, array1_size, array2, array2_size);
    constexpr size_t results_size {array1_size * array2_size};

    cout << "Result: " ;
    print(results, results_size);

    delete [] results; // Don't forget to free the memory

    cout << endl;

    return 0;
}

int* apply_all(int *arr1, size_t arr1_len, int *arr2, size_t arr2_len){

    int *combined_arr {nullptr};
    combined_arr = new int[arr1_len * arr2_len];
    size_t combined_idx{0};

    for(size_t i{0}; i < arr2_len; i++){
        for(size_t j{0}; j < arr1_len; j++){
            combined_arr[combined_idx] = arr2[i] * arr1[j];
            combined_idx++;
        }
    }
    return combined_arr;
}

void print(const int *arr, int arr_len){

    cout << "[ ";
    for(size_t i {}; i < arr_len; i++){
        cout << arr[i] << " ";
    }
    cout << "]\n";
}