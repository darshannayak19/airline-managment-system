#include"airline.h"
#include"User.h"
#include<stdio.h>
void usercontrols()
{
    user User;
    airline air;
    int i=0;
    while(i!=4)
    {
        system("cls");
        cout<<"             **********************************##### | #####*************************     "<<endl;
        cout<<"                                              # _ _ #|# _ _ #                         "<<endl;
        cout<<"                                              #      |      #                         "<<endl;
        cout<<"                                     |         ############                           "<<endl;
        cout<<"                                                    # #                               "<<endl;
        cout<<"                                 |                  # #	                             "<<endl;
        cout<<"                                                   #   #                              "<<endl;
        cout<<"                                        |     |    #   #      |        |              "<<endl;
        cout<<"                                 |  |             #     #               |             "<<endl;
        cout<<"                                        | |   |   # .-. #         |                   "<<endl;
        cout<<"                                                  #( O )#    |    |     |             "<<endl;
        cout<<"                                 |  ################. .###############  |             "<<endl;
        cout<<"                                  ##  _ _|____|     ###     |_ __| _  ##              "<<endl;
        cout<<"                                 #  |                                |  #             "<<endl;
        cout<<"                                 #  |    |    |    |   |    |    |   |  #             "<<endl;
        cout<<"                                  ######################################		         "<<endl;
        cout<<"                                                  #     #                             "<<endl;
        cout<<"                                                   #####                              "<<endl;
        cout<<"                                              OOOOOOO|OOOOOOO                         "<<endl;
        cout<<"             ****************************************U********************************      "<<endl;
        cout<<"                                           1. To Book flight.                 "<<endl;
        cout<<"                                           2. To Check flight.                "<<endl;
        cout<<"                                           3. To Cancel Booked flight.        "<<endl;
        cout<<"                                           4. To Exit.                        "<<endl;
        cout<<"                                     Enter the choice you want to make:-";
        cin>>i;
        switch(i){
         case 1:
            cin.ignore(1);
            User.bookflight();
            break;
         case 2:
            User.checkflights();
            break;
         case 3:
            User.cancelflight();
            break;
         case 4:
            cout<<" Thank you( * |  *)"<<endl;
            break;
         default:
            cout<<" Invalid Choice!"<<endl;
            break;

        }

    }
}
void admincontrols()
{
int i=0;
 user User;
    airline air;
    while(i!=3){
            system("cls");
    cout<<"                  ***********************______******************************************     "<<endl;
    cout<<"                                          _\\_~-\\___                                           "<<endl;
    cout<<"                                   =  = ==(____AA___D                                          "<<endl;
    cout<<"                                               \|____\|___________________,-~~~~~~~`-.._        "<<endl;
    cout<<"                                                /     o O o o o o O O o o o o o o O o  |\_      "<<endl;
    cout<<"                                                `~-.__      ___..----..                  )    "<<endl;
    cout<<"                                                      `---~~\___________/------------`````      "<<endl;
    cout<<"                                                        =  ===(_________D                       "<<endl;
    cout<<"                  **************************************************************************    "<<endl;
    cout<<"                                             Welcome To Airlines                                "<<endl;
    cout<<endl;
    cout<<"                                            1.Enter Flight Data.                                "<<endl;
    cout<<"                                            2.Canceled Flights.                                 "<<endl;
    cout<<"                                            3. To Exit.                                         "<<endl;
    cout<<"                        Enter the choice you want to make:-";
    cin>>i;
     switch(i){
         case 1:
            cin.ignore(1);
            air.flightenterys();
            break;
         case 2:
            air.canceledflight();
            break;
         case 3:
             cout<<" Thank you( * |  *)"<<endl;
            break;
        default:
            cout<<" Invalid Choice!"<<endl;
            break;

}
    }
}

int main()
{
    int i=1,j,k=1;
    airline air;
    user User;
    cout<<"                  ***********************______******************************************     "<<endl;
    cout<<"                                          _\\_~-\\___                                           "<<endl;
    cout<<"                                   =  = ==(____AA___D                                          "<<endl;
    cout<<"                                               \|____\|___________________,-~~~~~~~`-.._        "<<endl;
    cout<<"                                                /     o O o o o o O O o o o o o o O o  |\_      "<<endl;
    cout<<"                                                `~-.__      ___..----..                  )    "<<endl;
    cout<<"                                                      `---~~\___________/------------`````      "<<endl;
    cout<<"                                                        =  ===(_________D                       "<<endl;
    cout<<"                  **************************************************************************    "<<endl;
    cout<<"                                             Welcome To Airlines                                "<<endl;
    cout<<endl;
    cout<<"                                             1.Login to continue as admin.                      "<<endl;
    cout<<endl;
    cout<<"                                             2.To continue as user.                             "<<endl;
    cout<<endl;
    cout<<"                                           Enter your choice:-";
    cin>>j;
 switch(j){
     case 1:
         while(k<=3){
         system("cls");
        cin.ignore(1);
    cout<<"                  ***********************______******************************************     "<<endl;
    cout<<"                                          _\\_~-\\___                                           "<<endl;
    cout<<"                                   =  = ==(____AA___D                                          "<<endl;
    cout<<"                                               \|____\|___________________,-~~~~~~~`-.._        "<<endl;
    cout<<"                                                /     o O o o o o O O o o o o o o O o  |\_      "<<endl;
    cout<<"                                                `~-.__      ___..----..                  )    "<<endl;
    cout<<"                                                      `---~~\___________/------------`````      "<<endl;
    cout<<"                                                        =  ===(_________D                       "<<endl;
    cout<<"                  **************************************************************************    "<<endl;
    cout<<"                                             Welcome To Airlines                                "<<endl;
    cout<<endl;
    cout<<"                                             1.Login to continue as admin.                      "<<endl;
    air.getadmindetails();
    if(air.login()){
         admincontrols();
    }
    else{
        cout<<"\nInvalid User Name or Password"<<endl;
        cout<<"\nRetry "<<i<<endl;
        getch();
    }
   break;
    case 2:
         usercontrols();
         break;
     default:
        cout<<"Invalid Input!";
        break;

}}
return 0;
 }







