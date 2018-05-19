public class DemoStackOverflow {

private static int count=0;
public static void recursion(){

	count++;
if(count==10){
return;
}
System.out.println(count);
recursion();


}

public static void main(String args[]){
	try{

recursion();

}catch(Exception e){

System.out.println("count="+count);

e.printStackTrace();
}

}



}