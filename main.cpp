#include <iostream>
#include <string>
using namespace std;
class Round {
private:
    string player1Choice;
    string player2Choice;
public:
    Round() {
        player1Choice = "";
        player2Choice = "";
    }
    ~Round() {
    }
    void setChoices(string p1, string p2) {
        player1Choice = p1;
        player2Choice = p2;
    }
    string determineWinner() {
        if (player1Choice == player2Choice) {
            return "Draw";
        } else if ((player1Choice == "Rock" && player2Choice == "Scissors") ||
                   (player1Choice == "Paper" && player2Choice == "Rock") ||
                   (player1Choice == "Scissors" && player2Choice == "Paper")) {
            return "Player 1";
        } else {
            return "Player 2";
        }
    }
};
class Game {
private:
    string p1Name;
    string p2Name;
    int p1Score;
    int p2Score;
public:
    Game(string name1, string name2) {
        p1Name = name1;
        p2Name = name2;
        p1Score = 0;
        p2Score = 0;
    }
    ~Game() {
        cout << endl << "[Destructor]: Game finished. Object memory cleared successfully." << endl;
    }
    void play() {
        char playAgain;
        int roundNum = 1;
        cout << endl << "========================================" << endl;
        cout << " Welcome to Rock-Paper-Scissors (2 Players) " << endl;
        cout << "========================================" << endl;
        do {
            cout << endl << "--- Round " << roundNum << " ---" << endl;
            string choice1, choice2;
            cout << p1Name << ", enter choice (Rock / Paper / Scissors): ";
            cin >> choice1;
            cout << p2Name << ", enter choice (Rock / Paper / Scissors): ";
            cin >> choice2;
            Round currentRound;
            currentRound.setChoices(choice1, choice2);
            string winner = currentRound.determineWinner();
            if (winner == "Player 1") {
                cout << "Round Result: " << p1Name << " wins this round" << endl;
                p1Score++;
            } else if (winner == "Player 2") {
                cout << "Round Result: " << p2Name << " wins this round" << endl;
                p2Score++;
            } else {
                cout << "Round Result: It's a draw " << endl;
            }
            cout << "Current Score -> [" << p1Name << ": " << p1Score << "] | [" << p2Name << ": " << p2Score << "]" << endl;
            cout << endl << "Do you want to play another round? (y/n): ";
            cin >> playAgain;
            roundNum++;
        } while (playAgain == 'y' || playAgain == 'Y');
        cout << endl << "========================================" << endl;
        cout << "             FINAL SCOREBOARD            " << endl;
        cout << "========================================" << endl;
        cout << p1Name << " : " << p1Score << endl;
        cout << p2Name << " : " << p2Score << endl;
        if (p1Score > p2Score) {
            cout << "Congratulations " << p1Name << "! You are the winner!" << endl;
        } else if (p2Score > p1Score) {
            cout << "Congratulations " << p2Name << "! You are the winner!" << endl;
        } else {
            cout << "The game ended in an overall draw!" << endl;
        }
    }
};
int main() {
    string name1, name2;
    cout << "Enter Player 1 Name: ";
    cin >> name1;
    cout << "Enter Player 2 Name: ";
    cin >> name2;
    Game myGame(name1, name2);
    myGame.play();
    return 0;
}
