#include <iostream>
#include <string>

using namespace std;

int sendMsg(string msg) {
    cout << msg << endl;
    return 0;
}

int main()
{
    string hr = "------------------------------";
    cout << "/*" << hr << endl;
    cout << "This is a test." << endl;
    cout << hr << "*/" << endl;
    return 0;
}
