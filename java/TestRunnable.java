public class TestRunnable{

public static void main(String args[]){

Runnable r=new MyRunnable();

Thread t=new Thread(r);
t.start();
System.out.println("main");

}

}


class MyRunnable implements Runnable{

@Override
public void run(){

System.out.println("runnable");

}

}