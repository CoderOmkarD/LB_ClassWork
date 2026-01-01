
/*

input : 5 

Output : A  B   C    D   E 
        65  66  67  68  69

*/
import java.util.Scanner;

class Pattern {

    public void Display(int iNo) {
        // int i = 65;
        int iCnt = 0;
        char ch = 'A';

        for (iCnt = 1; iCnt <= iNo; iCnt++, ch++) {

            System.out.printf("%c\n", ch);

        }
        System.out.println();
    }

}

public class program176 {

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
