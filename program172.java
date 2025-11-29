
/*

input : 5 

Output : a  b c d e

*/
import java.util.Scanner;

class Pattern {

    public void Display(int iNo) {
        int i = 97;
        int iCnt = 0;

        for (iCnt = 1; iCnt <= iNo; iCnt++) {

            System.out.printf("%d\t", i );
            i++;


        }
        System.out.println();
    }

}

public class program172 {

    public static void main(String[] args)

    {
        int iValue1 = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Frequency:");
        iValue1 = sobj.nextInt();

        Pattern pobj = new Pattern();

        pobj.Display(iValue1);

        sobj = null;
        pobj = null;

    }
}
