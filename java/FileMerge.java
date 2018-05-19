import java.io.*;
import java.util.Scanner;

/**
 * Created by Administrator on 2016-10-31.
 */
public class FileMerge {

    public static void main(String args[]){

        Scanner scanner=new Scanner(System.in);

        System.out.println("input file name");
        String fileName=scanner.next();

        System.out.println("input file num");
        int n;
        n=scanner.nextByte();

        File file=new File(fileName);

        try {
            OutputStream outputStream=new FileOutputStream(file);

            for(int i=1;i<=n;i++){
                File inputFile=new File(fileName+i);
                InputStream inputStream=new FileInputStream(inputFile);

                int ii;
                while((ii=inputStream.read())!=-1){
                    outputStream.write(ii);
                }
                /*outputStream.flush();
                outputStream.close();*/
                inputStream.close();

                System.out.println(i);

            }

            System.out.println("merge ok");





        } catch (FileNotFoundException e) {
            e.printStackTrace();
        } catch (IOException e) {
            e.printStackTrace();
        }


    }

}