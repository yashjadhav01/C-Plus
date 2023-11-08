#include <iostream>
#include <ctime>
using namespace std;
int main()
{
   int usernum;
   
   srand((unsigned)time(0));
   int random = rand() % 100 + 1;
   //  designing

   while (true)
   {
      cout<<"-----------------------------------------------------------------------------------------------------\n";
      cout<<"    |           *****||*********#WELCOME TO GUESS THE NUMBER GAME#*********||*****             |     \n";
      cout<<"-----------------------------------------------------------------------------------------------------\n";
      cout<<"    |                       ||***********!!Instructions!!***********||                         |     \n";
      cout<<"    |           *****||****You have to Guess a Number Betwwen 1 to 100****||******             |     \n";
      cout<<"    |     ***||**You'll get limited chances based on the difficulty level you choose**||***    |     \n";
      cout<<"-----------------------------------------------------------------------------------------------------\n";
      
      cout <<"\nPlease select the Difficulty Level\n";
      cout<<"1 for Easy Level\n";
      cout<<"2 for Medium Level\n";
      cout<<"3 for Hard Level\n";
      cout<<"0 to End Game\n";
      
      int level;
      cout<<"\nEnter the Difficulty Level Number:";
      cin >> level;
      if (level == 1)
      {
         cout<<"\n!!You have 7 chances for finding the correct number between 1 to 100!!\n";
         int leftchance = 7;
         for (int i = 1; i <= 7; i++)
         {
            cout <<"Guess the Number:";
            cin >> usernum;

            if (random == usernum)
            {
               cout << "!!CONGRATULATIONS YOU HAVE GUESS THE CORRECT NUMBER!!"
                    << "\n";
            }
            else if (random > usernum)
            {
               cout << "You have guess the wrong number"
                    << "\n";
               cout << "HINT:"
                    << "The Number is Greater"
                    << "\n";
            }
            else if (random < usernum)
            {
               cout << "You have guess the wrong number"
                    << "\n";
               cout << "HINT:"
                    << "The Number is Smaller"
                    << "\n";
            }
            leftchance--;
            cout<<leftchance<<" Chances left\n";
            if(leftchance==0){
               cout<<"Chances Over\n";
               cout<<"Random Number:"<<random<<"\n";
            }
         }
      }
      else if (level == 2)
      {
         cout<<"\n!!ou have 5 chances for finding the correct number between 1 to 100!!\n";
         int leftchance = 5;
          for (int i = 1; i <= 5; i++)
         {
            cout << "Guess the Number:";
            cin >> usernum;

            if (random == usernum)
            {
               cout << "!!CONGRATULATIONS YOU HAVE GUESS THE CORRECT NUMBER!!"
                    << "\n";
            }
            else if (random > usernum)
            {
               cout << "You have guess the wrong number"
                    << "\n";
               cout << "HINT:"
                    << "The Number is Greater"
                    << "\n";
            }
            else if (random < usernum)
            {
               cout << "You have guess the wrong number"
                    << "\n";
               cout << "HINT:"
                    << "The Number is Smaller"
                    << "\n";
            }
            leftchance--;
            cout<<leftchance<<" Chances left\n";
            if(leftchance==0){
               cout<<"Chances Over\n";
               cout<<"Random Number:"<<random<<"\n";
            }
         }
      }
      else if (level == 3)
      {
         cout<<"\n!!You have 3 chances for finding the correct number between 1 to 100!!\n";
         int leftchance = 3;
          for (int i = 1; i <= 3; i++)
         {
            cout << "Guess the Number:";
            cin >> usernum;

            if (random == usernum)
            {
               cout << "!!CONGRATULATIONS YOU HAVE GUESS THE CORRECT NUMBER!!"
                    << "\n";
            }
            else if (random > usernum)
            {
               cout << "You have guess the wrong number"
                    << "\n";
               cout << "HINT:"
                    << "The Number is Greater"
                    << "\n";
            }
            else if (random < usernum)
            {
               cout << "You have guess the wrong number"
                    << "\n";
               cout << "HINT:"
                    << "The Number is Smaller"
                    << "\n";
            }
            leftchance--;
            cout<<leftchance<<" Chances left\n";
            if(leftchance==0){
               cout<<"Chances ver\n";
               cout<<"Random Number:"<<random<<"\n";
            }
         }
      }
      else if(level==0){
         exit(0);
      }
      else{
         cout<<"please select number between 0 to 3";
      }
   }
   return 0;
}