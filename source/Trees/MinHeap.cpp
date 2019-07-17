#include "MinHeap.hpp"

Minheap(unsigned int cap);
~minheap();

void swap(int *a, int *b){
    int t;
    t =*a;
    *a =*b;
    *b =t
}


  void MinHeap::swim(){
     
  }


 void  MinHeap::sink(int i){
   
  }

 
bool MinHeap::search(int i, int data){
    if(arr[i]==data){
        return true;
    }
    if (i< arr[2*i] && i < arr[(2*i)+1]){
        return false;
    }
    return (search(i+1));
}


void MinHeap::erase(int i, int data){
    if(arr[i]==data){
        return erase->data;
    }
    if (i< arr[2*i] && i < arr[(2*i)+1]){
        throw "bad";
    }
    return (erase(i+1));
}

void MinHeap::push(int data);

 
int MinHeap::count();

int MinHeap::pop();

int  MinHeap::peek();

 
  MinHeap::bool search(int data);


  MinHeap::int remove(int i);


  MinHeap::void erase(int data);

 
  MinHeap::void print(std::ostream& oss = std::cout);
};
