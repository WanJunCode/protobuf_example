#include <iostream>
#include <string>
#include <google/protobuf/compiler/importer.h>
#include <google/protobuf/dynamic_message.h>

#include <google/protobuf/descriptor.h> // Desctriptor FiledDescriptor ... all descriptor
#include <google/protobuf/message.h> // Message Reflection MessageFactory


class MyErrorCollector: public google::protobuf::compiler::MultiFileErrorCollector
{
    virtual void AddError(const std::string & filename, int line, int column, const std::string & message){
        // define import error collector
        printf("%s, %d, %d, %s\n", filename.c_str(), line, column, message.c_str());
    }
};

int main(){
    
    GOOGLE_PROTOBUF_VERIFY_VERSION;
    google::protobuf::compiler::DiskSourceTree sourceTree; // source tree
    sourceTree.MapPath("", "."); // initialize source tree
    MyErrorCollector errorCollector; // dynamic import error collector
    google::protobuf::compiler::Importer importer(&sourceTree, &errorCollector); // importer
    
    importer.Import("test.proto");
    
    // find a message descriptor from message descriptor pool
    const google::protobuf::Descriptor * descriptor = importer.pool()->FindMessageTypeByName("test.User");
    if (!descriptor){
        perror("Message is not found!");
        exit(-1);
    }else{
        printf("descriptor found\n");
    }

    // create a dynamic message factory
    google::protobuf::DynamicMessageFactory * factory = new google::protobuf::DynamicMessageFactory(importer.pool());
    // create a const message ptr by factory method and message descriptor 
    const  google::protobuf::Message * tmp = factory->GetPrototype(descriptor);
    
    // create a non-const message object by const message ptr
    // define import error collector
    google::protobuf::Message * msg = tmp->New();
    // msg.set_name("wanjun");
    return 0;
}


int test2(){

    google::protobuf::compiler::DiskSourceTree sourceTree; // source tree
    sourceTree.MapPath("", "./"); // initialize source tree
    MyErrorCollector errorCollector; // dynamic import error collector
    google::protobuf::compiler::Importer importer(&sourceTree, &errorCollector); // importer
    
    importer.Import("test1.proto");
    importer.Import("test2.proto");
    
    // find a message descriptor from message descriptor pool
    const google::protobuf::Descriptor *descriptor = importer.pool()->FindMessageTypeByName("lm.Game");
    if (!descriptor){
        perror("Message is not found!");
        exit(-1);
    }

    // create a dynamic message factory
    google::protobuf::DynamicMessageFactory * factory = new google::protobuf::DynamicMessageFactory(importer.pool());
    // create a const message ptr by factory method and message descriptor 
    const google::protobuf::Message * tmp = factory->GetPrototype(descriptor);
    
    // create a non-const message ptr object by const message ptr
    // define import error collector
    google::protobuf::Message * msg = tmp->New();
    
    // get a reflection by msg
    const google::protobuf::Reflection * reflection = msg->GetReflection();
    
    // travel the message by message_descriptor
    for (int i=0; i<descriptor->field_count(); ++i){
        const google::protobuf::FieldDescriptor * fieldDescriptor = descriptor->field(i);
        if (fieldDescriptor->is_repeated()){
            switch (fieldDescriptor->cpp_type()){
                case google::protobuf::FieldDescriptor::CPPTYPE_INT32:
                {
                    reflection->AddInt32(msg, fieldDescriptor, 10);
                    break;
                }
                case google::protobuf::FieldDescriptor::CPPTYPE_STRING:
                {
                    reflection->AddString(msg, fieldDescriptor, "abc");
                }
                case google::protobuf::FieldDescriptor::CPPTYPE_MESSAGE:
                {
                    printf("Here is a repeadted message: %s\n", fieldDescriptor->full_name().c_str());
                }
                case google::protobuf::FieldDescriptor::CPPTYPE_BOOL:
                {
                    break;
                }
                case google::protobuf::FieldDescriptor::CPPTYPE_ENUM:
                {
                    break;
                }
                case google::protobuf::FieldDescriptor::CPPTYPE_FLOAT:
                {
                    break;
                }
                case google::protobuf::FieldDescriptor::CPPTYPE_INT64:
                {
                    break;
                }
                case google::protobuf::FieldDescriptor::CPPTYPE_DOUBLE:
                {
                    break;
                }
                case google::protobuf::FieldDescriptor::CPPTYPE_UINT32:
                {
                    break;
                }
                case google::protobuf::FieldDescriptor::CPPTYPE_UINT64:
                {
                    break;
                }
                
            }
        }else{
            switch (fieldDescriptor->cpp_type()){
                case google::protobuf::FieldDescriptor::CPPTYPE_INT32:
                {
                    reflection->SetInt32(msg, fieldDescriptor, 10);
                    break;
                }
                case google::protobuf::FieldDescriptor::CPPTYPE_STRING:
                {
                    reflection->SetString(msg, fieldDescriptor, "abc");
                }
                case google::protobuf::FieldDescriptor::CPPTYPE_MESSAGE:
                {
                    printf("Here is a message: %s\n", fieldDescriptor->full_name().c_str());
                }
                case google::protobuf::FieldDescriptor::CPPTYPE_BOOL:
                {
                    break;
                }
                case google::protobuf::FieldDescriptor::CPPTYPE_ENUM:
                {
                    break;
                }
                case google::protobuf::FieldDescriptor::CPPTYPE_FLOAT:
                {
                    break;
                }
                case google::protobuf::FieldDescriptor::CPPTYPE_INT64:
                {
                    break;
                }
                case google::protobuf::FieldDescriptor::CPPTYPE_DOUBLE:
                {
                    break;
                }
                case google::protobuf::FieldDescriptor::CPPTYPE_UINT32:
                {
                    break;
                }
                case google::protobuf::FieldDescriptor::CPPTYPE_UINT64:
                {
                    break;
                }
            }
        }
    }

    printf("\nmsg\n");
    msg->PrintDebugString();
    return 0;
}