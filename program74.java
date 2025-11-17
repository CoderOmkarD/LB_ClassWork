//Checked Exception due to IO
import java.io.*;

class program74 {
    public static void main(String A[])
    {
        int iNo = 0;
        int iCnt = 0;

        BufferedReader bobj=new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Enter number : ");
        iNo =Integer.parseInt(bobj.readLine());



        for (iCnt = 1; iCnt <= iNo / 2; iCnt++) {
            if ((iNo % iCnt) == 0)
            {
                System.out.println(iCnt);
            }
        }
    }
}