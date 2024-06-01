#include <iostream>
#include "http_server.h"
int main(){
    using namespace http;
    std::cout << "Hello world" << std::endl;
    TcpServer server("0.0.0.0", 8080);
    server.startListen();
}