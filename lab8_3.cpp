
#include<iostream>
using namespace std;

int main(){
    int age, height, bty;
    string character;
    cout << "Enter your age: ";
    cin >> age;
    if(age <= 25){
        cout << "Enter your height: ";
        cin >> height;
        if(height < 100){ 
            character = "Chopper";
        } 
        
        else if(height >= 100 && height < 180){
            character = "Usopp";
        }
        else{
            cout << "Enter your bounty: ";
            cin >> bty;
            if(bty <= 1100000000){
                character = "Sanji";
            }
            else{
                character = "Zoro";
            }
        }
    }
    else{
        if(age <= 60){            
            cout << "Enter your bounty: ";
            cin >> bty;
            if(bty <= 500000000){
                character = "Franky";
            }
            else{
                character = "Jinbe";
            }
        }
        else{character = "Brook";}
    }
    cout << "Your character = " << character;
    
    return 0;
}/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/
