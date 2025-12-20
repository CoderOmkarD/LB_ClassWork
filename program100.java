import java.util.*;

class ArrayX {
    public void Display(int Brr[]) {

        System.out.println("Entered element Are  ");

        int i = 0;
        for (i = 0; i < Brr.length; i++) {
            System.out.println(Brr[i]);
        }
    }
}

class program100 {
    public static void main(String A[]) {

        int iSize = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Size of Array :");
        iSize = sobj.nextInt();

        int Arr[] = new int[iSize];
        int i = 0;

        System.out.println("Enter the element ");

        for (i = 0; i < Arr.length; i++) {
            Arr[i] = sobj.nextInt();
        }

        ArrayX aobj = new ArrayX();
        aobj.Display(Arr);

        // Important ********************************************************

        aobj = null;
        Arr = null;
        sobj = null;

        System.gc();

    }
}
