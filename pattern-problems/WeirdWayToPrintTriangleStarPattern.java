public class WeirdWayToPrintTriangleStarPattern {
    
    // Star 1 -
    // * 
    // * * 
    // * * * 
    // * * * * 
    // * * * * *
    static int x = 0;
    static void star01(int n) {
        if (x < n) {
            for (int i = 0; i < x + 1; i++)
                System.out.print("* ");
            System.out.println();
            x++; // This is the main focus
            star01(n); // To support x++ and x < n
        }
    }

    // Star 2 -
    // * * * * * 
    // * * * * 
    // * * * 
    // * * 
    // *
    static void star02(int n) {
        if (n > 0) {
            // Print stars upto n
            for (int i = 0; i < n; i++)
                System.out.print("* ");
            System.out.println();

            // Decrease n by 1 and rerun the function
            star02(n - 1);
        }
    }


    public static void main(String[] args) {
        
        star01(10);
    }
}

   
