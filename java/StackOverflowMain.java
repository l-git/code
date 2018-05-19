public class StackOverflowMain{

public static void main(String args[]){
	
	int n=0;
	try{
		n=m(1);
	
	}catch(Exception e){
		
			System.out.println();
	}
	
	
}


static int m(int n){
	
	
	System.out.println(n);
	
	return m(++n);
	
	
}





}