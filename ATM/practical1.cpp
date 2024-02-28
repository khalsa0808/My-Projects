#include<iostream>
using namespace std;

class ATM{
      private:
      int ID;
      int password;
      double balance;

      void printIntroMenu(){
       char choice;
       cout<<"please select an option from menu below:"<<endl<<endl;
       cout<<"l -> login"<<endl;
       cout<<"c -> Create New Account"<<endl;
       cout<<"q -> Quit"<<endl;
       cin>>choice;

       switch(choice){
        case 'l':
        login();
        break;

        case 'c':
        createAccount();
        break;

        case 'q':
        cout<<"Thanks for stopping by!"<<endl;
         break;

         default:
         cout<<"Invalid choice! Please enter the valid choice."<<endl;
             break;

                exit(0);
             printIntroMenu();

       }
      }


      void deposit(){
        double amount;
        cout<<"Amount of deposit: $";
        cin>>amount;
        balance = balance + amount;
         cout<<"Deposit succesfull :)"<<endl<<endl;
         printMainMenu();

      }

      void Withdraw(){
        double amount;
        cout<<"Amount of withdrawal: $";
        cin>>amount;

           if(balance > amount){
               balance -= amount;
           } else {
            cout<<"limited funds";
           }
          printMainMenu();
      }

      void requestBalance(){
            cout<<"Your balance is $"<<balance<<endl;
            printMainMenu();
      }

      void printMainMenu(){
        char choice;
        cout<<"d -> Deposit Money"<<endl;
        cout<<"w -> Withdraw Money"<<endl;
        cout<<"r -> Request balance"<<endl;
        cout<<"q -> Quit"<<endl;

        cin>>choice;
        switch(choice){
          case 'd':
          deposit();
          break;

          case 'w':
          Withdraw();
          break;

          case 'r':
          requestBalance();
          break;

          case 'q':
            cout<<"Thanks for stopping by!"<<endl;
                 break;

          default:
           cout<<"Invalid choice! Please enter the valid choice."<<endl;
           break;
        }
      }

    void login(){
    int tempID;
    int tempPass;
    cout<<"Please enter your user id:"<<endl;
    cin>>tempID;

    cout<<"Please enter your password:"<<endl;
    cin>>tempPass;

    if(tempID != ID || tempPass != password){
        cout<<endl<<"******** LOGIN FAILED! ********"<<endl<<endl;
        printIntroMenu();
    } else{
        cout<<endl<<"Access Granted!"<<endl<<endl;
        printMainMenu();
    }
}

      void createAccount(){
           cout<<"Please enter your user id:"<<endl;
              cin>>ID;
            cout<<"Please enter your password:"<<endl;
              cin>>password;

            cout<<"Thank You! Your account has been created!"<<endl<<endl;
            printIntroMenu();
            
      }

      public:
       void start(){
        cout<<"Hi! Welcome to KAUR ATM machine"<<endl<<endl;
        printIntroMenu();
       }
};

int main(){
     ATM obj;
     cout<<"Jasleen Kaur 2310997125"<<endl;
     obj.start();
}