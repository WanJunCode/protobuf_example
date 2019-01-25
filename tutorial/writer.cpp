#include "lm.helloworld.pb.h"
#include <iostream>
#include <fstream>

using namespace lm;
using namespace std;

int main(){
    lm::helloworld msg1;
    msg1.set_id(101);
    msg1.set_str("hello");
    
    lm::Person person;
    person.set_name("wanjun");
    person.set_id(112);
    person.set_email("wanjuncode＠163.com");
    std::fstream output_helloworld("log_helloworld",std::ios::out | std::ios::trunc | std::ios::binary);
    std::fstream output_Person("log_Person",std::ios::out | std::ios::trunc | std::ios::binary);

    if(!msg1.SerializePartialToOstream(&output_helloworld)){
        std::cerr<<"Failed to write msg."<<std::endl;
        return -1;
    }
    if(!person.SerializePartialToOstream(&output_Person)){
        std::cerr<<"Failed to write msg."<<std::endl;
        return -1;
    }
    return 0;
}