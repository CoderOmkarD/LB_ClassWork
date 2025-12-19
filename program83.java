import java.util.*;

class Number {
    public boolean CheckPerfect(int iNo) {
        int icnt = 0;
        int iSum = 0;

        // Updator
        if (iNo < 0) {
            iNo = -iNo;
        }
        for (icnt = 1; icnt <= iNo / 2; icnt++) {
            if ((iNo % icnt) == 0) {
                iSum = iSum + icnt;
            }
            if(iSum>iNo)
            {
                break;
            }
        } // Time Complexity O(N/2)

        return (iSum == iNo); // Changed
    }
}
// End of Number Class

class program83 {
    public static void main(String A[]) {
        int iValue = 0;
        boolean bRet = false;

        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter number : ");
        iValue = sobj.nextInt();

        Number nobj = new Number();
        bRet = nobj.CheckPerfect(iValue);

        if (bRet == true) {
            System.out.print(iValue + " is a Perfect Number");
        } else {
            System.out.print(iValue + " is not a Perfect Number");
        }

        // Important
        sobj = null;
        nobj = null;

        System.gc();

    }
}
