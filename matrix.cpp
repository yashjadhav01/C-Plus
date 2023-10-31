#include<iostream>
using namespace std;

int main(){
    int a[2][3],b[2][3],c[2][3],i,j;

    cout<<"enter 6 digit for 1 matrix:"<<"\n";

    for(i=0;i<=1;i++){
        for(j=0;j<=2;j++){
            cin>>a[i][j];
            
        }
    }

    cout<<"enter 6 digit for 2 matrix:"<<"\n";

        for(i=0;i<=1;i++){
            for(j=0;j<=2;j++){
                 cin>>b[i][j];
            
        }
    }

    cout<<"the addition of two matrix is c:";
     for(i=0;i<=1;i++){
            for(j=0;j<=2;j++){
                 c[i][j]=a[i][j]+b[i][j];
            cout<<"\n"<<c[i][j];
        }
        
    }
     

    


    




    return 0;
}

