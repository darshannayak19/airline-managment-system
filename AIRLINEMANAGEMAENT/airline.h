#include <iostream>
#include <fstream>
#include<iomanip>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
using namespace std;

class airline{
public:
    int adminid;
    char adminname[20];
    char adminpassword[11];

public:
    airline();
    airline(int adminid,char * adminname,char * adminpassword);
    void getadmindetails();
    int login();
    void flightenterys();
    int canceledflight();
    void updateadminname();
    void updateadminpassword();
    };
