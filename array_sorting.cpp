#include <iostream>

void sort(int array[], int size);

int main(){

    int array[] = {10, 1, 9, 2, 8, 3, 7, 4, 6, 5};
    int size = sizeof(array) / sizeof(array[0]);

    sort(array, size);
    
    for(int number : array){
        std::cout << number << ' ';
    }

    return 0;
}

void sort(int array[], int size){

    int temp;

    for(int i = 0; i < size - 1; i++){ // size - 1 because we don't need to compare the last element
        for(int j = 0; j < size - i - 1; j++){
            if(array[j] > array[j + 1]){
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}