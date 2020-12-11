#include <iostream>
#include<fstream>
#include<iomanip>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
using namespace std;

class user{
    char username[20];
    long int userphonenumber;
    int userage;
public:
    user();
    user(char * username,long int userphonenumber,int userage);
    void bookflight();
    void getuser();
    void checkflights();
    int cancelflight();
    };
