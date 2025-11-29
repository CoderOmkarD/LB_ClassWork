
/*

iRow :4 
iCol :4

Output : 
 a b c d
 a b c d
 a b c d
 a b c d
*/
import java.util.Scanner;

class Pattern {

    public void Display(int iRow, int iCol) {
        int i = 0, j = 0;
        char ch ='a';
        for (i = 1; i <= iRow; i++) 
        {   
             ch ='a';
            for (j = 1; j <= iCol; j++) 
            {   
                System.out.print(ch+"\t");
                ch++;       // Important (to reset)
            }
            System.out.println();

        }
    }

}

public class program180 {

    public static void main(String[] args)

    {
        int iValue1 = 0;
        int iValue2 = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the rows:");
        iValue1 = sobj.nextInt();

        System.out.println("Enter the Columns:");
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();

        pobj.Display(iValue1, iValue2);

        sobj = null;
        pobj = null;

    }
}
