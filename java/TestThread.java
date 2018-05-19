public class TestThread{

public static void main(String args[]){

	MyThread mt=new MyThread();


Thread t1=new Thread(mt,"t1");
Thread t2=new Thread(mt,"t2");
Thread t3=new Thread(mt,"t3");
Thread t4=new Thread(mt,"t4");
Thread t5=new Thread(mt,"t5");

t1.start();
t2.start();
t3.start();
t4.start();
t5.start();



}

}

class MyThread extends Thread{
private int c=5;

@Override
synchronized public void run(){

c--;
System.out.println("t:"+Thread.currentThread().getName()+"\tc="+c);


/**
for(int i=0;i<10;i++){

int time=(int)(Math.random()*1000);
System.out.println("run:"+Thread.currentThread().getName());

}
*/

}

}