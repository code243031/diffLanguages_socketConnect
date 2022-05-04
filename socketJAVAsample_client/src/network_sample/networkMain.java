package network_sample;

import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.net.InetSocketAddress;
import java.net.Socket;

public class networkMain {

	public static void main(String[] args) {
		Socket sock;
		
		try {
			sock = new Socket();
			
			sock.connect(new InetSocketAddress("localhost", 5400));
			String name = "hello! i'm senduser!";
			
			OutputStream sendName = sock.getOutputStream();
			byte[] data1 = name.getBytes("UTF-8");
			sendName.write(data1);
			sendName.flush();

			byte[] data2 = new byte[50];
			InputStream input = sock.getInputStream();
			int readByte = input.read(data2);
			String msg = new String(data2, 0, readByte, "UTF-8");
			
			System.out.println(msg);
			
			sock.close();
						
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}
}
