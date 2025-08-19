import java.util.Random;
import java.util.Scanner;

public class Game {
    
    private int guess = 0;
    private int numOfGuesses = 1;
    private int userInput = 0;
    
    // Constructor to generate random number
    public Game() {
        Random r = new Random();
        guess = r.nextInt(100); 
    }  

    // Get user input
    public int takeUserInput() {
        Scanner sc = new Scanner(System.in);
        userInput = sc.nextInt(); 
        return userInput;
    }

    // Is the user's guess correct?
    public boolean isCorrectGuess() {
        if (userInput == guess) return true;
        return false;
    }

    // How many times did the user guessed so far
    public int getNumOfGuesses() {
        return numOfGuesses;
    }
    
    // Get the guess
    public int getGuess() {
        return guess;
    }

    // Set numOfGuess variable
    public void incrementAttempts() {
        numOfGuesses += 1;
    }
    
    // Cheating mode (yea you can also use getGuess)
    public void devCheat() {
        System.out.println(guess);
    }

}

public class lameGame {

    public static void main(String[] args) {
        Game g1 = new Game(); 
        int user;
        int guess;

        while (true) {
            System.out.print("\nGuess the number (-1 to quit): ");
            
            // Takes user input and at the same time checks if the user wants to quit
            if ((user = g1.takeUserInput()) == -1) break;
            
            // Main game logic
            if (g1.isCorrectGuess()) {
                System.out.format("You won in %d attempts.\n", g1.getNumOfGuesses());
                break;
            } else {
                guess = g1.getGuess();
                if (Math.abs(user - guess) <= 2) System.out.println("Very close!!");
                else if (Math.abs(user - guess) <= 10) System.out.println("Close!!");
                else if (user < guess) System.out.println("Low");
                else System.out.println("High");
                g1.incrementAttempts();
            }
        }
    }
}
