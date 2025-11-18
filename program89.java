//Input =5
//Output = 5*4*3*3*2*1

import java.util.*;

class Number {
    public long CalculateFactorial(int iNo) {
        int iCnt = 0;
        long iFact = 1;   //important

        /// Updator///
        if (iNo < 0) {
            iNo = -iNo;
        }
        iCnt=1;
        
        // for (iCnt = 1; iCnt <= iNo; iCnt++) {
        //     iFact = iFact * iCnt;

        // }
        while (iCnt<=iNo) //Change
        {
            iFact = iFact * iCnt;  
            iCnt++; 
        }
        return iFact; // Change
    }
}
// End of Number Class

class program90 {
    public static void main(String A[]) {
        int iValue = 0;
        long iRet = 0;

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
