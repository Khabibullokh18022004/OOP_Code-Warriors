#include <iostream>
#include <fstream>
#include <cstring> 
#include <string>
using namespace std;



class USER
{
    private:
    string user_name;
    string user_password;
    public: 
    void Register()
    {
        cout<<"LET'S GET STARTED!\n";
        cout<<"Full Name: ";
        cin>>user_name;
        cout<<"Create a password: ";
        cin>>user_password;
    }
    void Welcome()
    {   
        cout<<"Welcome "<<user_name<<" ! "<<endl;
    }
    void Option(){
        int choice;
        cout <<"Book\n";
        cout<< " Exit\n";
        cin >> choice;
        switch(choice){
            case 1 : {
                Movies_page();
                break;
            }
            case 2: Register();
        } 
    }
   void Movies_page(){
    cout<<"MOVIES PAGE\n";
    cout<<"1.Squid Game  " <<endl;
    cout<<"2.Spider Man  "<<endl;
   }
       
        
 };


class ADMIN
{
    private:
    string admin_id;
    string admin_pass;
    const int SIZE = 7;
    int length;
    public:
    ADMIN()
    {
        admin_id= "2110164";
        admin_pass= "20040218";
    }
    void AdminLogin()
    {   char aid[SIZE];
        cout <<"\t\t\t>> Welcome <<\n\n"<<endl;
        cout <<"Please enter your ID number and password to check in our database:\n\n\n";
        cout<<"Please Enter ID number = U";
        cin>>aid;
        length=strlen(aid);
        while(length!=7){
        cout<<"Unfortunately, ID length must be 7 digits"<<endl;
        cout<<"Please Enter ID number = U";
        cin>>aid;
        length=strlen(aid);
    }
        cout<<"Password: ";
        string apass;
        cin>>apass;
        if(aid==admin_id && apass==admin_pass)
        {
            cout<<"Congratulations you logged succesfully to the system!!!";
            cout<< "Our dear U"<< admin_id<< endl;
        }
        else{
            cout<<"Check ID or password and try again...\n\n"<<endl;
            AdminLogin();
        }
    }
    void CheckBalance()
    {
        cout<<"Balance"<<endl;
    }
};


class MANAGER
{
    private:
    string manager_id;
    string manager_pass;
    const int SIZE = 7;
    int length;
    string mpass;
    public:
    MANAGER()
    {
        manager_id="1234567";
        manager_pass="20040520";
    }
    void ManagerLogin()
    {   char mid[SIZE];
        cout<<"Enter ID = U";
        cin>>mid;
        while(length!=7){
        cout<<"Unfortunately, ID length must be 7 digits"<<endl;
        cout<<"Please Enter ID number = U";
        cin>>mid;
        length=strlen(mid);
    }   
        cout<<"Enter password: ";
        cin>>mpass;
        if(manager_id==mid && manager_pass==mpass)
        {
            cout<<"WELCOME"<<endl;
        }
        else{
            cout<<"Check ID or password"<<endl;
            ManagerLogin();
        }
    }
    void ManagerOptions()
    {
        cout<<"[1] Add movie\n[2] Modify movie\n[3] Delete movie\n";
    }

};


int main (){
    int task;
    system ("clear");
    cout <<" >>>>>>>>>>>>> Welcome to movie ticket booking program <<<<<<<<<<<<<<<\n";
    cout <<" *                Please choose one option below ==>>                *\n";;;;;
    cout <<" *                     [1] Administrator                             *\n";
    cout <<" *                     [2] Manager                                   *\n";
    cout <<" *                     [3] External users                            *\n";
    cout <<" *                     [4] Quit the program                          *\n";
    cout <<" >>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n";                   
    cin >> task;
   if (task == 1){
    ADMIN a;
    a.AdminLogin();
   }
    else if (task == 2){
  MANAGER m;  
  m.ManagerLogin();
  m.ManagerOptions();
  
 }
else if (task == 3){
    USER u;
    u.Register();
    u.Welcome();
    u.Option();
    //u.Movies_page();
}
else if (task == 4)
return 0;
else{main();}
}
