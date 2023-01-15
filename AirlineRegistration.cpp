#include<iostream>
#include<conio.h>
#include<fstream>
#include<iomanip>

using namespace std;

int mainmenu();
{
 class mangement
 {
    public:
    main();

 }
};
class Details
{
  public: 
  static string name,gender;
  int mobileNo,age;
  string address;
  static int cId;
  char arr[100];

 void information()
 {
    cout<<"\t\n Enter your Id :";
    cin>>cId;
    cout<<"\t\n Enter the contact number":";
    cin>>mobileNo;
    cout<<"\t\n Enter the name :";
    cin>>name;
    cout<<"\t\n Enter your age :";
    cin>>age;
    cout<<"\t\n Enter your Gender :";
    cin>>gender;
    cout<<"\t\n Enter your address :";
    cin>>address;

    cout<<"\n THANKYOU Your Details are saved with us\n :"<<endl;
  }


 };

int Details::name;
string Details::name;
string Details::gender;

class registration
{
    public:
    static int choice;
    int choice1;
    int back;
    static float charges;

  public void flights()
    {
        string flight[]={"Dubai","Canada","Uk","Austalia","Singapur", "Europe"};
        for(int index=0; index<flight.length(); index++)
        {
            cout<<(index + 1)<<" .flight to "<<flight[index]<<endl;
        }

        cout<<" Welcome to the Airline !"<<endl;
        cout<<"press the number of the country of which you want to book the flight :";
        cin>>choice;

        switch(choice)
        {
            case 1:
            {
            cout<<"______________Welcome to Dubai Emirates __________\n"<<endl;
            cout<<" Your Comfort is our priority. Enjoy the journey!"<<endl;

            cout<<"Following are the flights \n"<<endl;

            cout<<"1. DUB - 438"<<endl;
            cout<<"\t08-01-2023 8:00Am 10hrs Rs. 37,000"<<endl;
            cout<<"2. DUB - 338"<<endl;
            cout<<"\t10-01-2023 7:00Am 10hrs Rs. 34,000"<<endl;
            cout<<"3. DUB - 238"<<endl;
            cout<<"\t12-01-2023 7:20Am 10hrs Rs. 34,000"<<endl;

            cout<<"\n Select the flight you want to book :";
            cin>>choice1;
            if(choice1==1)
            {
                charges=35000;
                cout<<"\n You have Successfully booked the flight Dub - 438"<<endl;
                cout<<"You can go back to menu and take the ticket \n";
            }
            else if(choice1==2)
            {
                charges=34000;
                cout<<"\n You have Successfully booked the flight Dub - 338"<<endl;
                cout<<"You can go back to menu and take the ticket \n";
            }
            else if(choice1==3)
            {
                charges=34000;
                cout<<"\n You have Successfully booked the flight Dub - 238"<<endl;
                cout<<"You can go back to menu and take the ticket \n";
            }
            else
            {
                cout<<"Invalid input , swifting to the previous menu "<<endl;
                flight();
            }
           
            cout<<"\n IF WANT TO GO BACK MAIN MANU PRESS ANY KEY :\n";
            cin>>back;
            if(back==1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }
          
         case 2:
          {
            cout<<"________________Welcome to Canadian Airline ______________\n"<<endl;
            cout<<" Your Comfort is our priority. Enjoy the journey With Canadian Airline !"<<endl;

            cout<<"Following are the flights \n"<<endl;

            cout<<"1. Canada - A25"<<endl;
            cout<<"\t09-01-2023 4:00pm  1d 2hrs 20m Rs. 86,000"<<endl;
            cout<<"2. Canada - A28"<<endl;
            cout<<"\t12-01-2023 7:00Am  1d 5hrs Rs. 85,000"<<endl;
            cout<<"3. Canada - A27"<<endl;
            cout<<"\t16-01-2023 10:10Am 1d 5hrs 50m Rs. 85,000"<<endl;

            cout<<"\n Select the flight what you want to book :\n";
            cin>>choice1;
            if(choice1==1)
            {
                charges=86000;
                cout<<"\n You have Successfully booked the flight Montreal Airpot - A25"<<endl;
                cout<<"You can go back to menu and take the ticket \n";
            }
            else if(choice1==2)
            {
                charges=85000;
                cout<<"\n You have Successfully booked the flight Quebec Airpot - A27"<<endl;
                cout<<"You can go back to menu and take the ticket \n";
            }
            else if(choice1==3)
            {
                charges=85000;
                cout<<"\n You have Successfully booked the flight halifax Airpot - A27"<<endl;
                cout<<"You can go back to menu and take the ticket \n";
            }
            else
            {
                cout<<"Invalid input , swifting to the previous menu "<<endl;
                flight();
            }
           
            cout<<"\n IF WANT TO GO BACK MAIN MANU PRESS ANY KEY :\n";
            cin>>back;
            if(back==1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
          }
          case 3:
          {
            cout<<"________________Welcome to UK Airways ______________\n"<<endl;
            cout<<" Your Comfort is our priority. Enjoy the journey With Canadian Airline !"<<endl;

            cout<<"Following are the flights \n"<<endl;

            cout<<"1. UK - UA25"<<endl;
            cout<<"\t08-01-2023 4:00Pm 8hrs Rs. 56,000"<<endl;
            cout<<"2. UK - UA28"<<endl;
            cout<<"\t11-01-2023 7:00Am 7hrs Rs. 55,000"<<endl;
            cout<<"\n Select the flight what you want to book :\n";
            cin>>choice1;
            if(choice1==1)
            {
                charges=56000;
                cout<<"\n You have Successfully booked the flight UK Airways - UA25"<<endl;
                cout<<"You can go back to menu and take the ticket \n";
            }
            else if(choice1==2)
            {
                charges=55000;
                cout<<"\n You have Successfully booked the flight UK Airways - UA28"<<endl;
                cout<<" Would You like to getting a ticket go back to menu check you get your ticket :\n";
            }
            else
            {
                cout<<"Invalid input , Swifting to the previous menu "<<endl;
                flight();
            }
           
            cout<<"\n IF WANT TO GO BACK MAIN MANU PRESS ANY KEY :\n";
            cin>>back;
            if(back==1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
          }
          case 4:
          {
            cout<<"________________Welcome to Austalia Airways ______________\n"<<endl;
            cout<<" Your Comfort is our priority. Enjoy the journey With Canadian Airline !"<<endl;

            cout<<"Following are the flights \n"<<endl;

            cout<<"1. AUS - 2490"<<endl;
            cout<<"\t08-01-2023 4:00Pm 18h 25m Rs. 166,000"<<endl;
            cout<<"2. AUS - 2450"<<endl;
            cout<<"\t11-01-2023 7:00Am 22h 5m Rs. 155,000"<<endl;
            cout<<"\n Select the flight what you want to book :\n";
            cin>>choice1;
            if(choice1==1)
            {
                chargess=166000;
                cout<<"\n You have Successfully booked the flight Sydney Airpot - 2490"<<endl;
                cout<<"You can go back to menu and take the ticket \n";
            }
            else if(choice1==2)
            {
                chargess=155000;
                cout<<"\n You have Successfully booked the flight Canberra - 2450"<<endl;
                cout<<" Would You like to getting a ticket go back to menu check you get your ticket :\n";
            }
            else
            {
                cout<<"Invalid input , Swifting to the previous menu "<<endl;
                flight();
            }
           
            cout<<"\n IF WANT TO GO BACK MAIN MANU PRESS ANY KEY :\n";
            cin>>back;
            if(back==1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
          }

          case 5:
          {
            cout<<"________________Welcome to Singapur Airlines  ______________\n"<<endl;
            cout<<" Your Comfort is our priority. Enjoy the journey With Canadian Airline !"<<endl;

            cout<<"Following are the flights \n"<<endl;

            cout<<"1. SIA11 - B77W"<<endl;
            cout<<"\t08-01-2023 THU 4:40Pm 18h 25m Rs. 70,121"<<endl;
            cout<<"2. SIA21 - A359"<<endl;
            cout<<"\t11-01-2023 Fri 7:39Am 22h 5m Rs. 72,796"<<endl;
            cout<<"\n Select the flight what you want to book :\n";
            cin>>choice1;
            if(choice1==1)
            {
                charges=70121;
                cout<<"\n You have Successfully booked the flight SIA11 - B77W"<<endl;
                cout<<"You can go back to menu and take the ticket \n";
            }
            else if(choice1==2)
            {
                charges=72796;
                cout<<"\n You have Successfully booked the flight SIA21 - A35M"<<endl;
                cout<<" Would You like to getting a ticket go back to menu check you get your ticket :\n";
            }
            else
            {
                cout<<"Invalid input , Swifting to the previous Menu "<<endl;
                flight();
            }
           
            cout<<"\n IF WANT TO GO BACK MAIN MANU PRESS ANY KEY :\n";
            cin>>back;
            if(back==1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
          }
          case 6:
          {
            cout<<"________________Welcome to Europe Airline ______________\n"<<endl;
            cout<<" Your Comfort is our priority. Enjoy the journey With Canadian Airline !"<<endl;

            cout<<"Following are the flights \n"<<endl;

            cout<<"1. EU - E466"<<endl;
            cout<<"\t04-02-2023 THU 6:40Pm 18h 25m Rs. 60,121"<<endl;
            cout<<"2. EU - E459"<<endl;
            cout<<"\t7-02-2023 Fri 5:39Am 18h 5m Rs. 72,796"<<endl;
            cout<<"\n Select the flight what you want to book :\n";
            cin>>choice1;
            if(choice1==1)
            {
                charges=60000;
                cout<<"\n You have Successfully booked the flight  EU - E466"<<endl;
                cout<<"You can go back to menu and take the ticket \n";
            }
            else if(choice1==2)
            {
                charges=72000;
                cout<<"\n You have Successfully booked the flight EU - E459"<<endl;
                cout<<" Would You like to getting a ticket go back to menu check you get your ticket :\n";
            }
            else
            {
                cout<<"Invalid input , Swifting to the previous Menu "<<endl;
                flight();
            }
           
            cout<<"\n IF WANT TO GO BACK MAIN MANU PRESS ANY KEY :\n";
            cin>>back;
            if(back==1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
          }

          default :
           {
            cout<<" Invalid input , sifting you to the main menu";
           } 

        }

    }
};

float registration::chargess;
int registration::choice;
//Ticket class
class Ticket : public registration, Details
{
    public :
     void Bill()
     {
        string destinations"";
        ofstream outf("recodes.txt");
        {
            outf<<"__________XYZ Airlines_____________"<<endl;
            outf<<"____________Ticket_________________"<<endl;
            outf<<"___________________________________"<<endl;
            
            outf<<"Customer ID:"<<Details<<cId<<endl;
            outf<<"Customer Name:"<<Details<<name<<endl;
            outf<<"Customer GENDER:"<<Details<<gender<<endl;
            outf<<"Customer Address:"<<Details<<addressr<<endl;
            outf<<"\nDescription:"<<endl;
          
            if(registration::choice==1)
            {
                destinations="Dubai";
            }
            else if(registration::choice==2)
            {
                destinations="Canada";
            }
            else if(registration::choice==3)
            {
                destinations="Uk";
            }
            else if(registration::choice==4)
            {
                destinations="Singapur";
            }
            else if(registration::choice==5)
            {
                destinations="Europe";
            }
            outf<<"Destinations\t\t"<<destinations<<chargess<<endl;
        }
        outf.close();
     }
     void displayBill()
     {
        ifstream fin("records.txt");
        {
            if(!fin)
            {
                cout<<"File error!"<<endl;
            }
            while (!fin.outf())
            {
                fin.getline(arr,100);
                cout<<arr<<endl;
            }
              
        }
        fin.close();
     }

};

int main()
{

 int choice;
 int back;
  cout <<"\t\t ____________________           Airline                     ________________\n\n\n";
  cout <<"\t\t                      WELCOME TO THE AIRLINR REGISTRATION                 \n\n\n";
  cout << "\t\t                             MENUE :                      \n\n";
  cout << "\t\t                      Press 1 :  Add The Customer Details" << endl;
  cout << "\t\t                      Press 2 :   Flight " << endl;
  cout << "\t\t                      Press 3 :  Check Tickets And charges " << endl;
  cout << "\t\t                      Press 4 :  Exit    \n" << endl;
  cout << "\t\t                      ENTER YOUR CHOICE :   " << endl;
  cin >> choice;
  cout << endl;

  switch (choice)
    {
     case 1:
        {
            cout<<"___________Customers__________\n"<<endl;
            Details d;
             d.information();
             cout<<" press 1 to go back to Main menu ";
             cin>>back;
             if(back==1)
             {
                mainMenu();
             }
             else
             {
                break;
             }
        }
     case 2 :
        {
           cout<<"______book a flight :";
             r.flights();
              break;
     }
     case 3 :
        {
            cout<<"__________GET YOUR TICKET ";
            t.Bill();
            cout<<"Your ticket is printed , you can collect it \n"<<endl;
            cout<<"press 1 to display your ticket : ";
            cin>>back;
            if(back==1)
            {
                t.displayBill();
                cout<<"press any key to go back main menu";
                cin>>back;
                if(back==1)
                {
                    mainMenu();
                }
                else
                {
                    mainMenu();
                }
            }
            else
            {
                mainMenu();
            }
            break;
        }
     case 4 :
             cout<<"\n\t\t\t THANK YOU : ";
              break; 
     case 5:
             login();
              break; 
     default :
             system("cls");
             cout<<"\n\t\t\t PLEASE SELECT FOR THE GIVEN OPTION ABOVE ! ";
               
    
    }
    return 0;

}


