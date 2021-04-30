#include <iostream>
#include <cstring>
using namespace std;

class String
{
private:
    char* string;
    long len;
public:
    String();                       // Default constructor
    String(const char* i_string);   // constructor
    String(String &a_string);       // Copy constructor
    void show_string();
};

void String::show_string()
{
    cout << "string : " << string << "length : " << len << endl;
}

String::String()
{
    cout << "Default constructor is called !" << endl;
}

String::String(const char* i_string) : len(strlen(i_string))
{
    cout << "Constructor is called !" << endl;
    string = new char[len + 1];
    strcpy(string, i_string);
}

String::String(String &a_string) : len(a_string.len)
{
    cout << "Copy constructor is called !" << endl;
    string = new char[len + 1];
    strcpy(string, a_string.string);
}

int main()
{
    String A_string("My string");
    String B_string(A_string);
    String C_string;

    cout << "-----------------------------------" << endl;
    cout << "A_string : " << endl;
    A_string.show_string();

    cout << "B_string : " << endl;
    B_string.show_string();


    return 0;
}