#include <iostream>
#include <string>

using namespace std;

bool DeBug = true;

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
    string hr = "------------------------------";
    cout << "/*" << hr << endl;
    cout << "This is a test. " << TestNow(50) << endl;
    cout << hr << "*/" << endl;
    return 0;
}
