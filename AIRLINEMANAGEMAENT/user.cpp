#include"user.h"
#include"airline.h"

user::user(){
this->userage=userage;
this->userphonenumber=userphonenumber;
this->username[0]='\0';
}
user::user(char * username,long int userphonenumber,int userage){
this->userage=userage;
this->userphonenumber=userphonenumber;
strcpy(this->username,username);
}
 void user::getuser(){
 cout<<"Enter name:-";
 cin.getline(this->username,20);
 cout<<"Enter age:-";
 cin>>this->userage;
 cout<<"Enter Active Phone Number:-";
 cin>>this->userphonenumber;
 }
void user::checkflights()
{
    int seats;
    char arr[200]="";
    char from[20];
    char to[20];
    char flightno[10];
    char fromcp[20];
    char tocp[20];
    char flightname[30];
    cout<<"                                                    From:- ";
    cin>>from;
    cout<<"                                                    To:- ";
    cin>>to;
    ifstream in("h:\\airline\\flightenterys.txt");
    if(in){
        cout<<"                                             Flight Available On This Root"<<endl;
        cout<<endl;
        cout<<"                                          FlightNo|"<<"Flight Name|"<<"No of seats"<<endl;
        cout<<endl;
        while(!in.eof()){
            in.getline(arr,200);
              if(!in.eof()){
                strcpy(flightno,strtok(arr,"|"));
                strcpy(fromcp,strtok(NULL,"|"));
                strcpy(tocp,strtok(NULL,"|"));
                strcpy(flightname,strtok(NULL,"|"));
                seats=atoi(strtok(NULL,"|"));
                if(strcmpi(from,fromcp)==0&&strcmpi(to,tocp)==0){
                    cout<<flightno<<"|"<<flightname<<"|"<<seats<<endl;
                }
              }
        }
        in.close();
        getch();
    }
    else{
        cout<<"Unable to open file"<<endl;
        getch();
    }

}
void user::bookflight()
{
    int seats;
    char arr[150]="";
    char flightnocp[10];
    char flightno[10];
    char fromcp[20];
    char tocp[20];
    char flightname[30];
    user User;
    cout<<"Enter Flight no:-";
    cin.getline(flightnocp,10);
    cout<<"\n";
    ifstream in("g:\\airline project\\flightenterys.txt");
    if(in){
        while(!in.eof()){
            in.getline(arr,150);
              if(!in.eof()){
                strcpy(flightno,strtok(arr,"|"));
                strcpy(fromcp,strtok(NULL,"|"));
                strcpy(tocp,strtok(NULL,"|"));
                strcpy(flightname,strtok(NULL,"|"));
                seats=atoi(strtok(NULL,"|"));
                if(strcmpi(flightnocp,flightno)==0){

                        User.getuser();
    ofstream out("g:\\airline project\\bookings.txt",ios::app);
                   if(out)
    {
        out<<"FlightNo|"<<"User Name|"<<"User phoneNumber|"<<"User Age"<<endl;
        out<<flightno<<"|"<<this->username<<"|"<<this->userphonenumber<<"|"<<this->userage<<endl;
        seats--;
        out.close();
    }
    else{
       cout<<"Unable to Book flight!";
    }
in.close();
        getch();
              }
        }}
        in.close();
        getch();
    }
    else{
        cout<<"Unable to open file"<<endl;
        getch();
    }

}
int user::cancelflight()
{

}



