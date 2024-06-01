#include "http_server.h"
#include <sstream>
#include <unistd.h>
#include <iostream>

namespace {
    const int BUFFER_SIZE = 30720;

}

namespace http{
    TcpServer::TcpServer(std::string ip_address, int port): 
    serverSocket(), 
    newSocket(), 
    incomingMessage(), 
    socketAddress(), 
    socketAddress_length(sizeof(socketAddress)), \
    serverMessage()
    {
        this->ip_address = ip_address;
        this->port = port;
        this->socketAddress.sin_addr.s_addr =  inet_addr(ip_address.c_str());
        this->socketAddress.sin_family = AF_INET;
        this->socketAddress.sin_port = port;
        startServer();
    }

    TcpServer::~TcpServer(){
        closeServer();
    }

    int TcpServer::startServer(){
        serverSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_IP);
        if(serverSocket < 0){
            // throw error;
            return -1;
        }

        int bindSuccess = bind(serverSocket, (sockaddr *)&socketAddress, socketAddress_length);
        if(bindSuccess < 0){
            // throw error
            return -1;
        }
        return 0; 
    }

    bool TcpServer::acceptConnection(int &newSocket){
        newSocket = accept(serverSocket, (sockaddr *)&socketAddress, &socketAddress_length);
        if(newSocket < 0){
            // throw error
            return false;
        }
        return true;
    }

    bool TcpServer::closeServer(){
        close(serverSocket);
        close(newSocket);
        // handling errors remains here.
        return true;
    }

    bool TcpServer::startListen(){
        std::cout << "TRIAL\n";
        int listenSuccess = listen(serverSocket, 20);
        if(listenSuccess < 0){
            // throw an error
            return false;
        }
        
        // log the server has startted listening stuff around here.
        int bytesReceived;
        
        

        return true;
    }

}


