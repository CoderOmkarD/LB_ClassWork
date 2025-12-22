//OOP Design
import java.util.*;

class ArrayX {
    private int Arr[];
    private int iSize;
    private int i = 0;

    public ArrayX(int iNo) 
    {
        System.out.println("Inside Constructor");
        iSize = iNo;
        Arr = new int[iSize];
    }

    public void Accept() 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Elements of array");

        for (i = 0; i < Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }
    }

    public void Display() {
        System.out.println("Elements of the array are: ");

        for (i = 0; i < Arr.length; i++) {
            System.out.println(Arr[i]);
        }
    }
}   //End of ArrayX class

class program107 {

    public static void main(String[] args) {
        ArrayX aobj1 = new ArrayX(5);
        aobj1.Accept();
        aobj1.Display();


        ArrayX aobj2 = new ArrayX(7);
        aobj2.Accept();
        aobj2.Display();

    }

}
