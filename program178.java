
/*

input : 8

Output : 
        z y x w v u t s




*/
import java.util.Scanner;

class Pattern {

    public void Display(int iNo) {
        // int i = 65;
        int iCnt = 0;
        char ch = 'z';

        for (iCnt = 1; iCnt <= iNo; iCnt++) {

            System.out.printf("%c\t", ch);
            ch--;

        }
        System.out.println();
    }

}

public class program178 {

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
