
//OOP Design
import java.util.*;

class ArrayX {
    public int Arr[];
    public int iSize;
    public int i = 0;

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

class program104 {

    public static void main(String[] args) {
        ArrayX aobj1 = new ArrayX(5);
        ArrayX aobj2 = new ArrayX(7);
    }

}
