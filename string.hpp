#ifndef __STRING__
#define __STRING__

class String {
    private:
    // declare data members 
    char *array;
    int length; // maybe usefull
    public:
    // constructors and destructor. 
    String(); //default
    String(const char*);
    ~String();
    //other Function 
    unsigned int length();
    void reverse();
    void append(const char)
}
endif