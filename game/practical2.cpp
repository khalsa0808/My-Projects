#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

class GuessTheNumber{
       private:
       int ComputerGeneratedNumber;
       int userGuessedNumber;
        int attempts;

        public:
        GuessTheNumber(){
            srand(time(0));
            ComputerGeneratedNumber=rand()%100+1;
            // it generate a random number between 1 to 100
            attempts=0;
        }
              void startGame(){
                         int number;
                         cout<<"Welcome to Guess the number game!"<<endl<<endl;
                          cout<<" I Guess the number between 1-100.please try to guess the number!"<<endl<<endl;

                          do{
                            cout<<"Guess the number:"<<endl;
                            cin>>userGuessedNumber;
                            attempts++;

                            if(userGuessedNumber > ComputerGeneratedNumber){
                                cout<<"Guessed number is greater than computer generated number"<<endl;
                            } else if(userGuessedNumber < ComputerGeneratedNumber){
                                cout<<"Guessed number is smaller than computer generated number"<<endl;
                            } else{
                                cout<<"Congratulation you won the game in"<<attempts<<"attempts"<<endl;
                            }
                              cout << "Attempts: " << attempts << endl;

                          } while(userGuessedNumber != ComputerGeneratedNumber);
              }


};



int main(){
    GuessTheNumber game;
    game.startGame();
}