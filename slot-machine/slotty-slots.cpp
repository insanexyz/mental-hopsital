// This is written by Insane. Wow! Amazing!
// This is a more simple version. Maybe I will do few more UI quirks later on.

#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include <chrono>
#include <thread>

const std::vector<std::string> sym = {"🍒", "🍉", "🍋", "🔔", "⭐"};

void some_weird_animation() {
    /*
    * This function displays the symbols one by one and clears the screen after each symbol.
    * Basically simulate a loading or spinning effect.
    */
    std::cout << std::endl;
    for (int i = 0; i < 5; ++i) {
        int random_num = rand() % 5;
        std::cout << sym[random_num] << std::flush;                     // Flush is used to display anything in output buffer immediately.
        std::this_thread::sleep_for(std::chrono::milliseconds(500));    // Need to understand this (got from AI)
        std::system("clear");                                           // Clear screen
    }
}

std::vector<std::string> spin_the_thing(std::string name) {
    std::vector<std::string> result;

    // Special condition hehe
    if (name == "insane") {
        for (int i = 0; i < 3; i++) {
            result.push_back(sym[0]);
        }
        return result;
    }

    // Spin the thing!!
    for (int i = 0; i < 3; i++) {
        // Generate a random number between 0 to 4
        int random_num = rand() % 5;
        result.push_back(sym[random_num]);
    }

    some_weird_animation();
    return result;
}

void display_the_shit(std::vector<std::string> v, int bet) {

    std::cout << std::endl << std::endl;

    // Display the result
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << " " << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }

    std::cout << std::endl;
    std::cout << std::endl << std::endl;
}

int get_payout_$(std::vector<std::string> result_row, int bet) {

    int multiplier = 0;
    bool won = false;

    // Check for jackpot.
    if (result_row[0] == result_row[1] && result_row[1] == result_row[2]) {
        if (result_row[0] == "🍒") { 
            std::cout << "Jackpot!! You got 4x" << std::endl;
            won = true;
            multiplier = 4;
        } else if (result_row[0] == "🍉") { 
            std::cout << "Jackpot!! You got 4x" << std::endl;
            won = true;
            multiplier = 4;
        } else if (result_row[0] == "🍋") { 
            std::cout << "Jackpot!! You got 5x" << std::endl;
            won = true;
            multiplier = 5;
        } else if (result_row[0] == "🔔") { 
            std::cout << "Jackpot!! You got 10x" << std::endl;
            won = true;
            multiplier = 10;
        } else if (result_row[0] == "⭐") { 
            std::cout << "Jackpot!! You got 20x" << std::endl;
            won = true;
            multiplier = 20;
        }
    }

    // Check for two matches.
    // Yea I know O(N^2).
    for (int i = 0; i < result_row.size(); i++) {
        std::string symbol = result_row[i];
        bool found = false;
        for (int j = 0; j < result_row.size(); j++) {
            if (i == j) continue;;
            if (sym[i] == sym[j]) {
                multiplier = 2;
                found = true;
                won = true;
                break;
            }
        }
        if (found == true) break;
    }

    if (won) {
        std::cout << "You bet: " << bet << "        Result: +" << bet * multiplier << std::endl;
        return bet * multiplier;
    } else {
        std::cout << "You bet: " << bet << "        Result: " << -bet * 1.25 << std::endl;
        return - (bet * 1.25);
    }
}

int main(void) {
    int balance = 100;

    std::cout << "****************************" << std::endl;
    std::cout << "Welcome to slotty slots 🥵." << std::endl;
    std::cout << "    🍒 🍉 🍋 🔔 ⭐" << std::endl;
    std::cout << "****************************" << std::endl;
    std::cout << std::endl;

    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << std::endl;

    // Game loop
    while (true) {

        std::cout << "Current balance: " << balance << " Ligma coins" << std::endl << std::endl;

        // Exit condition.
        if (balance == 0) {
            std::cout << "You now have 0 ligma coins, perfect 0 like your life!" << std::endl;
            std::cout << "You're done for. Now die!!" << std::endl;
            break;
        }

        if (balance < 0) {
            std::cout << "You managed to get negative balance! Just wow!" << std::endl;
            std::cout << "Why are you even alive at this point. Game is over!" << std::endl;
            break;
        }
        
        // Take user bet input.
        int bet;
        std::cout << "Place bet (-1 to quit): ";

        // Take input bet and also type check it for int.
        if (!(std::cin >> bet)) {
            std::cout << "The fuck you typing ☠️? Enter a number!" << std::endl;
            std::cin.clear();    // clear error state
            std::cin.ignore(10000, '\n'); // discard invalid input
            std::cout << std::endl << std::endl;
            continue;
        }

        // Check if user wants to quit.
        if (bet == -1) {
            std::cout << std::endl;
            std::cout << "*****************" << std::endl;
            std::cout << "Thanks for playing 🕊️" << std::endl;
            std::cout << "Final balance: " << balance << std::endl;
            std::cout << "See ya fella!" << std::endl << std::endl;
            std::cout << "*****************" << std::endl;
            break;
        }

        // Insufficient funds.
        if (bet > balance) {
            std::cout << "Insufficient funds brokie. Bet something lower 🍭." << std::endl << std::endl;
            continue;
        }

        // Check for negative bets.
        if (bet <= 0) {
            std::cout << "Just quit the game at this point dumbass 🦖" << std::endl << std::endl;
            continue;
        }

        balance -= bet;

        std::vector<std::string> result_row = spin_the_thing(name);
        display_the_shit(result_row, bet);
        int payout = get_payout_$(result_row, bet);

        balance += payout;
    }
}
