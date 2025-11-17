

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

class program75 {
    public static void main(String A[]) {
        int iNo = 0;
        int iCnt = 0;

        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Enter number : ");
        try {
            iNo = Integer.parseInt(bobj.readLine());
        }
        catch(IOException iobj)
        {

        }


        for (iCnt = 1; iCnt <= iNo / 2; iCnt++) {
            if ((iNo % iCnt) == 0) {
                System.out.println(iCnt);
            }
        }
    }
}