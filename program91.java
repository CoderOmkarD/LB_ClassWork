
import java.util.*;

class Digit {
    public int SumOfDigit(int iNo) {
        int iDigit = 0;
        int iSum = 0;

        while (iNo != 0) {

            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;

        }
        return iSum;
    }
}

class program91 {
    public static void main(String A[]) {
        int iValue = 0;
        int iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter number : ");

        iValue = sobj.nextInt();

        Digit dobj = new Digit();
        iRet = dobj.SumOfDigit(iValue);

        System.out.println("Addition of Digits is " + iRet);

        // Important
        sobj = null;
        dobj = null;

        System.gc();

    }
}
