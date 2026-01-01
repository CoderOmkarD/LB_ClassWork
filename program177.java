
/*

input : 8

Output : 
        1 A 3 B 5 C 7 D 




*/
import java.util.Scanner;

class Pattern {

    public void Display(int iNo) {
        // int i = 65;
        int iCnt = 0;
        char ch = 'A';

        for (iCnt = 1; iCnt <= iNo; iCnt++) {

            if (iCnt % 2 == 0) {
                System.out.printf("%c\t", ch);
                ch++;
            }

            else {
                System.out.print(iCnt + "\t");
            }

        }
        System.out.println();
    }

}

public class program177 {

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
