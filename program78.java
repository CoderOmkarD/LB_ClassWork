import java.util.*;


class Number1
{
    public void DisplayFactor(int iNo)
    {
        int icnt = 0;
        for (icnt = 1; icnt <= iNo / 2; icnt++)
        {
            if ((iNo % icnt) == 0) {
                System.out.println(icnt);
            }
        }//Time Complexity O(N/2)
    }
}//End of Number Class


class program78
{
    public static void main(String A[])
    {
        int iValue = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter number : ");
        iValue = sobj.nextInt();

        Number nobj= new Number();
        nobj.DisplayFactor(iValue);


        //Important
        sobj=null;
        nobj=null;

        System.gc();

    }
}
//solve this error
//C:\Users\Admin\Desktop\LB>java program78.java
//error: can't find main(String[]) method in class: Number
//
//C:\Users\Admin\Desktop\LB>java program78.java
//error: can't find main(String[]) method in class: Number