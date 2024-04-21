#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(){
    srand(time(0));
    int daysUntilExpiration = rand() % 12;

    if (daysUntilExpiration <= 0){
        cout<<"your subscription has expired ";
    }
     else if (daysUntilExpiration <= 1){
        cout<<"Your subscription expires within a day!"<<endl;
        cout<<"Renew now and save 20%";
    }
    else if (daysUntilExpiration <= 5){
        cout<<"your subscription expires in "<< daysUntilExpiration<<endl;
        cout<<"Renew now and save 10%";
    }
    else if (daysUntilExpiration <= 10){
       cout<<"your subscription will expire soon. Renew now!";
    }
    else {
        cout<<"you have an active subscription";
    }

    return 0;
}
