#include<iostream>

void arr_inc(int*, int);


int main(){
    // allocation an arr
    int* arr;
    arr = new int[10];
    //fill data
    for(int i =0; i<10; i++) arr[i] =i;
    //print before arr_inc
    for(int i=0;i<10;++i) std::cout<<arr[i]<<", ";
    std::cout<<std::endl;

    arr_inc(arr, 10);

    for (int i = 0; i < 10; ++i) std::cout << arr[i]<<", ";
    std::cout<<std::endl;
    //free memory
    delete[] arr;
    return 0;
}

void arr_inc(int *arr, int n){
    for (int i = 0; i < n; ++i)
        arr[i] +=1;
    return;
} 