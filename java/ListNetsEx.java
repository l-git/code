import java.io.*;
import java.net.*;
import java.util.*;

public class ListNetsEx
{
    public static void main(String args[]) 
      throws SocketException 
    {
        Enumeration nets = 
            NetworkInterface.getNetworkInterfaces();
        for (NetworkInterface netint : Collections.list(nets))
            displayInterfaceInformation(netint);
    }

    static void displayInterfaceInformation(NetworkInterface netint) 
      throws SocketException 
    {
        System.out.println("Display name: " 
           + netint.getDisplayName());
        System.out.println("Hardware address: " 
           + Arrays.toString(netint.getHardwareAddress()));
    }
}  