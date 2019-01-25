#include "lm.helloworld.pb.h"
#include <iostream>
#include <fstream>

using namespace std;
using namespace lm;

void ListMsg(const lm::helloworld &msg){
    cout<<msg.id()<<endl;
    cout<<msg.str()<<endl;
}

void ListPerson(const lm::Person &person){
    cout<<person.name()<<endl;
    cout<<person.id()<<endl;
    cout<<person.email()<<endl;
}

int main(){
    lm::helloworld msg1;
    lm::Person person;
    {
        fstream input_helloworld("log_helloworld",ios::in | ios::binary);
        fstream input_Person("log_Person",ios::in | ios::binary);        
        if(!msg1.ParseFromIstream(&input_helloworld)){
            cerr<<"Fail to parse address book."<<endl;
            return -1;
        }
        if(!person.ParseFromIstream(&input_Person)){
            cerr<<"Fail to parse address book."<<endl;
            return -1;
        }
    }
    ListMsg(msg1);
    ListPerson(person);
    return 0;
}