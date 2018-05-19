import java.io.*;
import java.util.Scanner;

/**
 * Created by Administrator on 2016-10-31.
 */
public class FileSpliter {
    public static void main(String args[]){

        Scanner scanner=new Scanner(System.in);

        System.out.println("input file:");
        String next=scanner.next();

        System.out.println("input n");

        int nextInt=scanner.nextInt();

        File file=new File(next);

        long fileLength=file.length();

        int n= nextInt;

        int num= (int) (fileLength/n)+1;

        try {
            InputStream inputStream=new FileInputStream(file);
            String fileName=file.getName();

            for(int i=0;i<n;i++){
                File f=new File(fileName+(i+1));
                OutputStream outputStream=new FileOutputStream(f);

                /*inputStream.skip(num*i);*/

                int counter=0;

                int ii;
                while((counter<num)&&((ii=inputStream.read())!=-1)){
                    counter++;
                    outputStream.write(ii);
                    System.out.print((char)ii+"\t");
                }
                outputStream.flush();
                outputStream.close();
                System.out.println();

            }
            System.out.println("ok");


        } catch (FileNotFoundException e) {
            e.printStackTrace();
        } catch (IOException e) {
            e.printStackTrace();
        }


    }


}
