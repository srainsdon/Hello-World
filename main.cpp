#include <iostream>
#include <string>

using namespace std;

bool DeBug = false;

int sendMsg(string msg) {
    cout << msg << endl;
    return 0;
}

int TestNow(int x) {
    if(DeBug){cout << x << endl;}
    if(x==1) {
    return 1;
    }else{
        return x+TestNow(x-1);
    }
}

int main()
{
    int startingNumber = 75;
    string hr = "------------------------------";
    cout << hr << endl;
    cout << "Your starting number is: " << startingNumber << endl << "The ending number is: " << TestNow(startingNumber) << endl;
    cout << hr << endl;
    return 0;
}
