import socket
from _thread import *

client_sockets = [] # 서버에 접속한 클라이언트 목록

# 서버 IP 및 열어줄 포트
HOST = '127.0.0.1'
PORT = 5400

# 서버 소켓 생성
print('>> Server Start')
server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
server_socket.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
server_socket.bind((HOST, PORT))
server_socket.listen()

print('>> Wait')

client_socket, addr = server_socket.accept()
print('Connected by', addr)

data = client_socket.recv(1024)
print('recv : ', )

msg = data.decode() + " 잘 받았어!";

client_socket.sendall(msg.encode());