#ifndef INCLUDED_HTTP_SERVER
#define INCLUDED_HTTP_SERVER

#include <string>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <stdlib.h>


namespace http{
    class TcpServer{
        public:
        TcpServer(std::string ip_address, int port);
        ~TcpServer();
        bool startListen();


        private:
        std::string ip_address;
        int port;
        long incomingMessage;
        struct sockaddr_in socketAddress;
        unsigned int socketAddress_length;
        std::string serverMessage;
        int serverSocket;
        int newSocket;
        int startServer();
        bool closeServer();
        bool acceptConnection(int &);
        std::string buildResponse();
        bool sendResponse();
    };
}


#endif