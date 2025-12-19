//Input =5
//Output = 5*4*3*3*2*1

import java.util.*;

class Number {
    public int CalculateFactorial(int iNo) {
        int iCnt = 0;
        int iFact = 1; 

        /// Updator///
        if (iNo < 0) {
            iNo = -iNo;
        }

        
        for (iCnt = 1; iCnt <= iNo; iCnt++) {
            iFact = iFact * iCnt;

        }

        return iFact; // Change
    }
}
// End of Number Class

class program88 {
    public static void main(String A[]) {
        int iValue = 0;
        int iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter number : ");

        iValue = sobj.nextInt();

        Number nobj = new Number();
        iRet = nobj.CalculateFactorial(iValue);

        System.out.print("Factorial of " + iValue + " is : " + iRet);

        // Important
        sobj = null;
        nobj = null;

        System.gc();

    }
}
