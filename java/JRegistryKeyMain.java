import java.util.Iterator;

import ca.beq.util.win32.registry.RegistryKey;
import ca.beq.util.win32.registry.RootKey;

public class JRegistryKeyMain {

	public static void main(String args[]){
		
		
		
		/*System.out.println(System.getProperty("java.class.path"));*/
		System.out.println(System.getProperty("java.library.path"));



 RegistryKey.initialize();
    
    RegistryKey r = new RegistryKey(RootKey.HKEY_LOCAL_MACHINE, "HARDWARE");
    //assertEquals("Valid key \"HKLM\\HARDWARE\" must report true (exists)!", true, r.exists());

System.out.println(r);


		
		//System.loadLibrary("jRegistryKey.dll");
		
		
		/*RegistryKey r = new RegistryKey(RootKey.HKEY_CURRENT_USER, "Software");  
		if(r.hasSubkeys()) {  
		   Iterator i = r.subkeys();  
		   while(i.hasNext()) {  
		      RegistryKey x = (RegistryKey)i.next();  
		      System.out.println(x.toString());  
		   }   
		} */
		
		
		
	}
}
