#include<iostream>
#include<string>
using namespace std;

int guess,Total;

class question{
    private:
    string Question_Text;
	string Answer_1;
	string Answer_2;
	string Answer_3;
	string Answer_4;
	int Correct_Answer;
	int Question_Score;

    public:
      void setValues(
	string q, string a1,
	string a2, string a3,
	string a4, int ca,int pa)
{
	Question_Text = q;
	Answer_1 = a1;
	Answer_2 = a2;
	Answer_3 = a3;
	Answer_4 = a4;
	Correct_Answer = ca;
	Question_Score= pa;
}

      void askquestion();
    };

int main(){
 cout<<"----------------------------------------------------------------------------------------------------\n";   
 cout<<"          ||************************WELCOME TO THE QUIZ GAME**************************||            \n";
 cout<<"----------------------------------------------------------------------------------------------------\n";
 cout<<"                                !!Press Enter to start the game!!                                    \n";
 cin.get();

 string Name;
	int Age;

	// Input the details
	cout << "What is your name?"
		<< endl;
	cin >> Name;
	cout << endl;

	cout << "How old are you?"
		<< endl;
	cin >> Age;
	cout << endl;

	string Respond;
	cout << "Are you ready to take"
		<< " the quiz " << Name
		<< "? yes/no" << endl;
	cin >> Respond;

	if (Respond == "yes") {
		cout << endl;
		cout << "Good Luck!" << endl;
	}
	else {
		cout << "Okay Good Bye!" << endl;
		return 0;
	}

 
 
 question q1;
 question q2;
 question q3;
 question q4;
 question q5;
 question q6;
 question q7;
 question q8;
 question q9;
 question q10;

 q1.setValues("Question_1 Which is called world population day?","5 March","11 july","17 May","12 June",2,10);
 q2.setValues("Question_2 Which is the smallest country?","Maldivs","Vatican city","Fizi","Tuvalue",2,10);
 q3.setValues("Question_3 Who was the first lady astronaut?","Tomas alva","George King","Valentina Terescova","Nil Armstrong",3,10);
 q4.setValues("Question_4 Who is the father of chemistry?","Thomson","Robert boyel","John Dalton","Demitri Mendelieve",2,10);
 q5.setValues("Question_5 Who is the inventor of Rail Engine?","Jems watt","Michel Farady","Stiphenson","Kohen",3,10);
 q6.setValues("Question_6 Which is the capital of America?","Washington Dc","Moscow","Hawaii","California",1,10);
 q7.setValues("Question_7 Which is not the member of G-8?","France","Italy","Spain","Jarmany",3,10);
 q8.setValues("Question_8 Which is the biggest ocean?","Arctic ocean","Pacific Ocean","Indian ocean","Atlantic",2,10);
 q9.setValues("Question_9 Which is the capital of Argentina?","Buenes aires","Havana","Tokiyo","None of them",1,10);
 q10.setValues("Question_10 Who is the first person to draw the map of earth?","Aristotol","Neuton","Anaximander","Thales",3,10);

 q1.askquestion();
 q2.askquestion();
 q3.askquestion();
 q4.askquestion();
 q5.askquestion();
 q6.askquestion();
 q7.askquestion();
 q8.askquestion();
 q9.askquestion();
 q10.askquestion();

 if(Total>70){
	cout<<"CONGRATULATIONS YOU PASSED THE QUIZ\n";
 }
 else{
	cout<<"YOU FAIL THE QUIZ\n";
	cout<<"!!BETTER LUCK NEXT TIME!!\n";
 }

    return 0;
}
 void question::askquestion(){
	cout<<"-----------------------------------------------------------------------------"<<"\n";
    cout<<Question_Text<<"\n";
	cout<<"1."<<Answer_1<<"\n";
	cout<<"2."<<Answer_2<<"\n";
	cout<<"3."<<Answer_3<<"\n";
	cout<<"4."<<Answer_4<<"\n";

	cout<<"What is your answer(in number)"<<"\n";
	cin>>guess;
	cout<<"---------------------------------------------------------------------------------\n";

	if(Correct_Answer==guess){
		cout<<"CORRECT!\n";
		Total = Total + Question_Score;
	}
	else{
		cout<<"WRONG\n";
		cout<<"Correct answer is:"<<Correct_Answer<<"\n";
	}
 }