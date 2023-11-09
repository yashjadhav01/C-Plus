#include<iostream>
#include<ctime>
using namespace std;

// function to generate CAPTCHA of length n
string generateCaptcha(int n){
    srand((unsigned)time(0));

    char *required_chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    string captcha = "";
    while(n--)
        captcha.push_back(required_chars[rand()%62]);

    return captcha;
}

int main(){
    int n;
    cout<<"Enter the required length of CAPTCHA: ";
    cin>>n;
    string captcha = generateCaptcha(n);
    cout<<"CAPTCHA: "<<captcha<<"\n";
    
    
    return 0;
}