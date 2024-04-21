#include <iostream>
using namespace std;
int main(){
    int value = 0;
    cout<<"Enter an integer  value  between 5 and 10"<<endl;
    while (true){
        cin>>value;
        if(value >=5 && value <= 10){
            break;
        }
        else if (value < 5 || value >10) {
            cout << "sorry you enterd an invalid number, please try again"<<endl;
            cout<< " you enterd "<< value<<". pleace enter a number between 5 and 10."<<endl;
        }
    }
    cout<<"your input value ("<<value<<") has been accepted."<<endl;
    return 0;
}