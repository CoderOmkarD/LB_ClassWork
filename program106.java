
//OOP Design
import java.util.*;

class ArrayX {
    private int Arr[];
    private int iSize;
    private int i = 0;

    public ArrayX(int iNo) {
        System.out.println("Inside Constructor");
        iSize = iNo;
        Arr = new int[iSize];
    }

    public void Accept() {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Elements of array");

        for (i = 0; i < Arr.length; i++) {
            Arr[i] = sobj.nextInt();
        }
    }

    public void Display() {
        System.out.println("Elements of the array are: ");

        for (i = 0; i < Arr.length; i++) {
            System.out.println(Arr[i]);
        }
    }
}

class program106 {

    public static void main(String[] args) {
        ArrayX aobj1 = new ArrayX(5);

        System.out.println(aobj1.iSize); // error

        // Bad Programming Practise
        // Need of Access Specifier
        aobj1.iSize = 11;                // error
        aobj1.Arr = null;                // error

        ArrayX aobj2 = new ArrayX(7);

        System.out.println(aobj2.iSize); // error
    }

}
