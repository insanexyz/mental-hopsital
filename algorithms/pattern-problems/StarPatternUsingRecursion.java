public class StarPatternUsingRecursion {

    // *
    // * *
    // * * *
    // * * * *
    // * * * * *
    static void star_rec(int n) {
        if (n > 0) {
            star_rec(n - 1);
            for (int i = 0; i < n; i++) {
                System.out.print("* ");
            }
            System.out.println();
        }
    }

    static void star_rec_alt(int n) {
        if (n == 0) return;

        star_rec(n - 1);
        for (int i = 0; i < n; i++) {
            System.out.print("* ");
        }
        System.out.println();
    }



    public static void main(String[] args) {
        star_rec_alt(5);
    }
}
