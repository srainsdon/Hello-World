#include <iostream>
#include <string>

using namespace std;

bool DeBug = false;
class Message {
private:
    int type = 0;
    string data = "";
public:
    Message(string receved){ // this data will be along the lines of the messaging systems wiki
        std::string tmpType = receved.substr (0,3);
        type = tmpType; // this needs to be converted to an int
        data = receved;
    }
    int getType(){
    return type;
    }
    string getData(){
    return data;
    }
};
int sendMsg(string msg) {
    string hr = std::string(35, '-');
    cout << hr << endl;
    cout << msg << endl;
    cout << hr << endl;
    return 0;
}

int main(){
    sendMsg("Server Starting..."); // Not useful
    Message msg("250Testing message passing"); // test message
    cout << "Received message:" << endl << "Type: " << msg.getType() << endl << "Data: " << msg.getData() << endl; // message print out
    return 0;
}
