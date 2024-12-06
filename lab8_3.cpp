#include <iostream>
using namespace std;
int main(){
    int a,h,b;
    string name;
    cout << "Enter your age: ";
    cin >> a;

    if(a<=25){
        cout << "Enter your height: ";
        cin >> h;
        if(h<100){
            name="Chopper";
        }
        else if(h<180){
            name ="Usopp";
        }
        else{
            cout << "Enter your bounty: ";
            cin >> b;
            if(b<=1100000000){
                name = "Sanji";
            }
            else{
                name = "Zoro";
            }
        }
    }
    else if(a<=60 && a>25){
        cout << "Enter your bounty: ";
            cin >> b;
            if(b<=500000000){
                name = "Franky";
            }
            else{
                name = "Jinbe";
            }
    }
    else{
        name = "Brook";
    }
cout << "Your character = "<< name;

}