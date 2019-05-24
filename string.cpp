#include "string.hpp"
int helper(int x){
    return (x+5)%60;
}
String::String(){
    array = new char[1];
    array[0]= '\0';
}

String::String(const char *str){
    unsigned int length;
    for(length =0;str[length];++length);
    array = new char[length+1];
    for(int i = 0;i <= length;++i)
    array[i]=str[i];
}
String::~String(){
    delete array;
}
unsigned int String::length(){
    return length;
}
void append(const char){
    array = new_array;
}