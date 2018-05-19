package com.student;


import java.net.URL;  
import javax.xml.namespace.QName;  
import javax.xml.ws.Service; 
import java.net.MalformedURLException;

public class Main{

public static void main(String args[]) throws MalformedURLException{
	
	URL url = new URL("http://localhost:8080/CXFTutorial/ChangeStudent?wsdl");  
   
        //1st argument service URI, refer to wsdl document above  
    //2nd argument is service name, refer to wsdl document above  
        QName qname = new QName("http://student.com/", "ChangeStudentDetailsImplService");  
        Service service = Service.create(url, qname);  
        ChangeStudentDetails hello = service.getPort(ChangeStudentDetails.class);  

Student student=new Student();
student.setName("i ma student");

        System.out.println(hello.changeName(student).toString());  


}

}