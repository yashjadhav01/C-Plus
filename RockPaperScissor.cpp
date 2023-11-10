#include <iostream>
#include<ctime>
using namespace std;

int main()
{ 
    cout<<"--------------------------------------------------------------------------------------------\n";
    cout<<"|                     !!WELCOME TO THE GAME OF ROCK, PAPER & SCISSOR!!                     |\n";
    cout<<"--------------------------------------------------------------------------------------------\n";
    cout<<"|                                *****[INSTRUCTION]*****                                   |\n";
    cout<<"|                              1=ROCK    2=PAPER    3=SCISSOR                              |\n";
    cout<<"|                        #PLEASE SELECT THE NUMBER BETWEEN 1,2 & 3#                        |\n";
    cout<<"--------------------------------------------------------------------------------------------\n";
    cout<<"|       @@@@@@@@@@@@@@@@@@@@@@@@@@@@@  !!ALL THE BEST!!  @@@@@@@@@@@@@@@@@@@@@@@@@@        |\n";
    cout<<"--------------------------------------------------------------------------------------------\n";
    cout<<"                                                                                            \n";

    // 1-Rock 2-paper 3-scissor
    srand(time(NULL));
    int computerturn =rand()%3+1;
    // cout<<computerturn<<"\n";
    int userturn;
    
    cout<<"ENTER YOUR MOVE:";
    cin>>userturn;
    if(userturn==1){
        cout<<"Your Move:Rock\n";
    }
    else if(userturn==2){
        cout<<"Your Move:Paper\n";
    }
    else if(userturn==3){
        cout<<"Your Move:Scissor\n";
    }
if(userturn==1 || userturn==2 ||userturn==3){

    if(computerturn==1){
        cout<<"Computer Move:Rock\n";
    }
    else if(computerturn==2){
        cout<<"Computer Move:Paper\n";
    }
    else if(computerturn==3){
        cout<<"Computer Move:Scissor\n";
    }

}
    if (computerturn == userturn)
    {
        cout<<"ohh!! The Match Draw\n";
    }
    else if (computerturn == 1 && userturn ==2 )
    {
        cout << "CONGRATULATIONS!! YOU WIN\n";
    }
    else if (computerturn == 1 && userturn == 3)
    {
        cout << "COMPUTER WIN\n";
        cout<<"BETTER LUCK NEXT TIME!\n";
    }
    else if (computerturn == 2 && userturn == 1)
    {
        cout << "COMPUTER WIN\n";
        cout<<"BETTER LUCK NEXT TIME!\n";
    }
    else if (computerturn == 2 && userturn == 3)
    {
        cout << "CONGRATULATIONS!! YOU WIN\n";
    }
    else if (computerturn == 3 && userturn == 1)
    {
        cout << "CONGRATULATIONS!! YOU WIN\n";
    }
    else if (computerturn == 3 && userturn == 2)
    {
        cout << "COMPUTER WIN\n";
        cout<<"BETTER LUCK NEXT TIME!\n";
    }
    else{ 
        cout<<"!!INVALID INPUT!!\n";
        cout<<"Please select the number between 1 to 3\n";
    }
   
    return 0;
}
