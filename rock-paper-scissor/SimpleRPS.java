import java.util.Scanner;
import java.util.Random;


public class SimpleRPS {
    public static void main(String[] args) {
        
        Random r= new Random();
        Scanner sc = new Scanner(System.in);

        // Rock = 0
        // Paper = 1
        // Scissor = 2

        while (true) {
            System.out.println("Rock (r) \npaper (p) \nscissor (s)");
            System.out.print("Your call [q to quit]: ");
            char player = sc.next().charAt(0);

            // Computer will choose random number between 1 - 3
            byte comp = (byte)r.nextInt(3); 

            // To quit
            if (player == 'q' || player == 'Q') {
                break;
            }

            // Discard wrong inputs
            if (player != 'r' && player != 'p' && player != 's') {
                System.out.println("Wrong choice, pls try again\n");
                continue;
            }

            // Display what computer chose
            switch (comp) {
                case 0 -> System.out.println("Computer chooses: rock");
                case 1 -> System.out.println("Computer chooses: paper");
                case 2 -> System.out.println("Computer chooses: scissor");
            }

            // Win and loose conditions
            if (player == comp) {
                System.out.println("Tie. Try again");
            } else if (player == 'r' && comp == 2) {
                System.out.println("You win!\n");
            } else if (player == 'p' && comp == 0) {
                System.out.println("You win!\n");
            } else if (player == 's' && comp == 1) {
                System.out.println("You win!\n");
            } else {
                System.out.println("You loose!\n");
            }

        }

    }
}
