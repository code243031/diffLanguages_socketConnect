package network_sample;

import java.io.IOException;
import java.io.OutputStream;
import java.net.InetSocketAddress;
import java.net.Socket;

public class networkMain {

	public static void main(String[] args) {
		Socket sock;
		
		try {
			sock = new Socket();
			
			sock.connect(new InetSocketAddress("localhost", 5400));
			String name = "Tlqkf";
			
			OutputStream sendName = sock.getOutputStream();
			byte[] data = name.getBytes("UTF-8");
			sendName.write(data);
			sendName.flush();

			sock.close();
						
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}
}
