#/bin/bash
name=$1
echo "name is ${name}"
g++ ${name} *.cc -o ${name%.*} -pthread -lprotobuf
