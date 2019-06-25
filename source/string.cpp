#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "string.hpp"

char at(int) const;

bool empty(){
    return true;
}

unsigned int size() const;

unsigned int capacity() const;

void reserve(unsigned int);

void insert(char, int);

void erase(char){

}

void remove(int){

}

void append(char){

}

void prepend(char){

}

bool compare(char*) const;
bool compare(String&) const;


void concatenate(char*){

}
void concatenate(String&){

}

unsigned int find(char*, int start = 0) const;
unsigned int find(char, int start = 0) const;
unsigned int find(String&, int start = 0) const;

void reverse(){

}

void shift(int){

}

int toInt() const;

String substr(int, int) const;