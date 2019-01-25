#include "wanjun.package.pb.h"
#include <iostream>
#include <fstream>

using namespace std;
using namespace wanjun;
using namespace common;

int write(){
    header *head=new header();
    head->set_identity("WJ");
    head->set_length(12);
    WjPackage pkg;
    // head 传入，　pkg 析构时自动删除　head
    pkg.set_allocated_head(head);
    pkg.set_privatedata("private data");
    fstream output("log",ios::out | ios::trunc | ios::binary);

    if(!pkg.SerializePartialToOstream(&output)){
        std::cerr<<"Failed to write msg."<<std::endl;
        return -1;
    }
    output.close();
    return 1;
}

int read(){
    fstream input("log",ios::in | ios::binary);
    WjPackage temp;
    header *head_tmp = new header();
    temp.set_allocated_head(head_tmp);
    if(!temp.ParseFromIstream(&input)){
        cerr<<"Fail to parse address book."<<endl;
        return -1;
    }
    input.close();
    return 1;
}

int main(){
    write();
    read();
    return 0;
}