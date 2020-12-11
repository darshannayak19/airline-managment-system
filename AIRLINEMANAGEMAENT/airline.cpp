#include"airline.h"
#include"user.h"
#include<stdio.h>
airline::airline(){
    this->adminid=adminid;
    this->adminname[0]='\0';
    this->adminpassword[0]='\0';
}
airline::airline(int adminid,char * adminname,char * adminpassword)
{
    this->adminid=adminid;
    strcpy(this->adminname,adminname);
    strcpy(this->adminpassword,adminpassword);

}
void getpassword(char * adminpassword)
{
    int i=0;
	while(i<=9) {
		char t = getch();
		if(t=='\r') {
			adminpassword[i] = '\0';
			if(i<6) {
				cout << endl << "Password should be of minimum 6 characters. !!! Renter :";
				//fflush(stdin);
				i=-1;
			}
			else {
				break;
			}
		}
		else {cout << "*";
			adminpassword[i] = t;
		}
		i++;
	}

}

void airline::flightenterys()
{
    int seats;
    char from[20];
    char to[20];
    int flightno;
    char flightname[30];
    cout<<"FlightNo:-";
    cin>>flightno;cout<<endl;
    cout<<"Flight Name:-";
    cin>>flightname;cout<<endl;
    cout<<"From:-";
    cin>>from;
    cout<<endl;
    cout<<"To:-";
    cin>>to;
    cout<<endl;
    cout<<"Enter no of seat:-"<<endl;
    cin>>seats;
    ofstream out("h:\\airline\\flightenterys.txt",ios::app);
    if(out)
    {
        out<<"FlightNo|"<<"From|To"<<"|Flight Name"<<"|No of seats available"<<endl;
        out<<flightno<<"|"<<from<<"|"<<to<<"|"<<flightname<<"|"<<seats<<endl;
        out.close();
    }
    else{
       cout<<"Unable to open file!";
    }
}
int airline::login()
{
char arr[100]="";
airline air;
ifstream in("h:\\airline\\admin.txt");
if(in){
    while(!in.eof()){
        in.getline(arr,100);
           strcpy(air.adminname,strtok(arr,","));
            strcpy(air.adminpassword,strtok(NULL,","));
            if(strcmp(air.adminname,this->adminname)==0&&strcmp(air.adminpassword,this->adminpassword)==0){
                in.close();
                cout<<"1";
            return 1;

    }

    }
    in.close();
    return 0;
}
else{
    cout<<"                                Unable to open file!                 "<<endl;
    return 0;
}

}
void airline::getadmindetails()
{
    cout<<"                                        Admin Name:-";
    cin.getline(this->adminname,20);
    cout<<"                                        Password:-";
    getpassword(this->adminpassword);
}
int airline::canceledflight()
{

}
