#include <iostream>
#include <string.h>
#include <time.h>
#include <WinSock2.h>

#pragma comment(lib, "ws2_32")
#pragma warning(disable : 4996)


#define PORT 5400
#define PACKET_SIZE 1024
#define SERVER_IP ""

using namespace std;

int main(void) {
	SOCKET hListen;
	WSADATA wsaData;
	SOCKADDR_IN tListenAddr = {};

	char cMsg[PACKET_SIZE];
	int res = 0;

	res = WSAStartup(MAKEWORD(2, 2), &wsaData);

	cout << res << "\n";

	hListen = socket(PF_INET, SOCK_STREAM, IPPROTO_TCP);
	tListenAddr.sin_family = AF_INET;
	tListenAddr.sin_port = htons(PORT);
	tListenAddr.sin_addr.s_addr = htonl(INADDR_ANY);

	// bind
	bind(hListen, (SOCKADDR*)&tListenAddr, sizeof(tListenAddr));

	listen(hListen, SOMAXCONN);										// listen

	SOCKADDR_IN tClntAddr = {};										// accept
	int iClntSize = sizeof(tClntAddr);
	SOCKET hClient = accept(hListen, (SOCKADDR*)&tClntAddr, &iClntSize);

	recv(hClient, cMsg, PACKET_SIZE, 0);

	cout << cMsg << "\n";
}