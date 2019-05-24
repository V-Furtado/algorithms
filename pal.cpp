#include<iostream>

bool checkpalindrome(const char*);

int main(){
    const char* str = "abcba";
    std::cout << str << " " <<checkpalindrome(str)<<std::endl;
    return 0;
}

bool checkpalindrome(const char *str){
    //Get length
    int length;
    for(length=0; str[length]; ++length);
    //check is pal
    for(int i = 0; i<length/2;++i){
        if(str[i]!= str[length-i-1])
        return false;
    }
    return true;   
    
}