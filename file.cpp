#include<iostream>
#include<fstream>
using namespace std;

int main(){
    fstream myfile("file.txt");
    myfile<<"inserting some data in file.txt";
    myfile.open("file.txt"); 
    myfile.close();

    return 0;
}
