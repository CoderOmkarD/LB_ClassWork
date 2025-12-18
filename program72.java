class program72 {
    public static void main(String A[]) {
        int iNo = 12;
        int icnt = 0;

        for (icnt = 1; icnt <= iNo / 2; icnt++) {
            if ((iNo % icnt) == 0) {
                System.out.println(icnt);
            }
        }
    }
}