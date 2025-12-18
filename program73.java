import java.util.*;

class program73 {
    public static void main(String A[])
    {
        int iNo = 0;
        int icnt = 0;

        Scanner sobj = new Scanner(System.in);
        System.out.print("Enter number : ");
        iNo = sobj.nextInt();

        for (icnt = 1; icnt <= iNo / 2; icnt++) {
            if ((iNo % icnt) == 0)
            {
                System.out.println(icnt);
            }
        }
    }
}