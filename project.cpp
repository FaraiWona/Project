#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(){
    srand(time(0));
    int daysUntilExpiration = rand() % 11;
    cout<<daysUntilExpiration;
    return 0;
}