#include<iostream>
int main(){
    std::cout<<"num1: ";
    std::string a;
    std::cin>>a;
    std::cout<<"num2: ";
    std::string b;
    std::cin>>b;
    int v = std::stoi(a) + std::stoi(b);
    std::cout<<v<<std::endl;

    return 0;
}