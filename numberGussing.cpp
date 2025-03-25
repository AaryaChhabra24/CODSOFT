#include <iostream>
#include <cstdlib>   
#include <ctime>
using namespace std;
//rand();
//int random = offset + (rand() % range);
//int random = 1+(rand() % 100);
int main()
{
    
   cout<<"\n\t\t NUMBER GUESSING GAME"<<endl;
   cout<<"\n\n You have to guess a number between 1 and 100. You'll have Limited choices based on the level you choose. GOOD LUCK!!"<<endl;
   while(true){
    cout<<"\n Enter the difficulty level : \n";
    cout<<" 1 for EASY \n";
    cout<<" 2 for MEDIUM \n";
    cout<<" 3 for DIFFICULT \n";
    cout<<" 0 for ENDING THE GAME \n"<<endl;

    int dc;
    cout<<"Enter your choice : ";
    cin>>dc;

    srand(time(0));
    int secretNumber = 1 + (rand() % 100);
    int playerChoice;

    if(dc==1){
        cout<<"\n You have 10 choices to guess the correct number. ";
        int choicesLeft=10;
        for(int i=0;i<=10;i++){
            cout<<"\n\n Enter the number : ";
            cin>>playerChoice;
            if(playerChoice==secretNumber){
                cout<<"Well played! You won, "<<playerChoice<<" is the secret number"<<endl;
                cout<<"THANKS FOR PLAYING"<<endl;
                cout<<"Play the game again with us! \n"<<endl;
                break;
            }else{
                cout<<playerChoice<<" is not the correct number.\n";
                if(playerChoice>secretNumber){
                    cout<<"The secret number is too low"<<endl;
                }
                else{
                    cout<<"The secret number is too high"<<endl;
                }
                choicesLeft--;
                cout<<choicesLeft<<" choices left. "<<endl;
                if(choicesLeft==0){
                    cout<<" You couldn't guess the correct number, it was "<<secretNumber<<", You lose!\n\n";
                    cout<<"PLAY AGAIN TO WIN!\n\n";
                }
            }
        }
    }
    else if (dc==2){
        cout<<"\n You have 7 choices to guess the correct number. ";
        int choicesLeft=7;
        for(int i=0;i<=7;i++){
            cout<<"\n\n Enter the number : ";
            cin>>playerChoice;
            if(playerChoice==secretNumber){
                cout<<"Well played! You won, "<<playerChoice<<" is the secret number"<<endl;
                cout<<"THANKS FOR PLAYING"<<endl;
                cout<<"Play the game again with us! \n"<<endl;
                break;
            }else{
                cout<<playerChoice<<" is not the correct number.\n";
                if(playerChoice>secretNumber){
                    cout<<"The secret number is too low"<<endl;
                }
                else{
                    cout<<"The secret number is too high"<<endl;
                }
                choicesLeft--;
                cout<<choicesLeft<<" choices left. "<<endl;
                if(choicesLeft==0){
                    cout<<" You couldn't guess the correct number, it was "<<secretNumber<<", You lose!\n\n";
                    cout<<"PLAY AGAIN TO WIN!\n\n";
                }
            }
        }
    }
    else if (dc==3){
        cout<<"\n You have 5 choices to guess the correct number. ";
        int choicesLeft=5;
        for(int i=0;i<=5;i++){
            cout<<"\n\n Enter the number : ";
            cin>>playerChoice;
            if(playerChoice==secretNumber){
                cout<<"Well played! You won, "<<playerChoice<<" is the secret number"<<endl;
                cout<<"THANKS FOR PLAYING"<<endl;
                cout<<"Play the game again with us! \n"<<endl;
                break;
            }else{
                cout<<playerChoice<<" is not the correct number.\n";
                if(playerChoice>secretNumber){
                    cout<<"The secret number is too low"<<endl;
                }
                else{
                    cout<<"The secret number is too high"<<endl;
                }
                choicesLeft--;
                cout<<choicesLeft<<" choices left. "<<endl;
                if(choicesLeft==0){
                    cout<<" You couldn't guess the correct number, it was "<<secretNumber<<", You lose!\n\n";
                    cout<<"PLAY AGAIN TO WIN!\n\n";
                }
            }
        }
    }
    else if (dc==0){
               exit(0);
    }else{
        cout<<"Please enter VALID CHOICE (0,1,2,3)"<<endl;
    }
    
    
   }

   return 0;
}
