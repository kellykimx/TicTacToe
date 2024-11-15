//Code TicTacToe with a usable interface in a language of your choice.

#include <iostream>
using namespace std;

char board[9] = {'1','2','3','4','5','6','7','8','9'};
//tic tac toe board, 9 spaces

void move (int player, int square) {
    if (player==1) {
        board[square-1] = 'O';
    } else {
        board[square-1] = 'X';
    }
}

void display() {
    for (int i=0; i<9; i++) {
        if(i==3 || i==6) {
            cout<<"\n";
            cout<<board[i]<<"\t";
        } else {
            cout<<board[i]<<"\t";
        }
    }
}

int win() { //function to check if there is a winner
    if (board[0] == board[1] && board[1] == board[2]) { //checking if first row is containing the same variable
        if (board[0] == 'O') {
            return 1;
        } else {
            return 2;
        }
    } else if (board[3] == board[4] && board[4] == board[5]) { //checking second row
        if (board[3] == 'O') {
            return 1;
        } else {
            return 2;
        }
    } else if (board[6] == board[7] && board[7] == board[8]) { //checking third row
        if (board[6] == 'O') {
            return 1;
        } else {
            return 2;
        }
    } else if (board[0] == board[3] && board[3] == board[6]) { //checking first column
        if (board[0] == 'O') {
            return 1;
        } else {
            return 2;
        }
    } else if (board[1] == board[4] && board[4] == board[7]) { //checking second column
        if (board[1] == 'O') {
            return 1;
        } else {
            return 2;
        }
    } else if (board[2] == board[5] && board[5] == board[8]) { //checking third column
        if (board[2] == 'O') {
            return 1;
        } else {
            return 2;
        }
    } else if (board[0] == board[4] && board[4] == board[8]) { //checking diagonally
        if (board[0] == 'O') {
            return 1;
        } else {
            return 2;
        }
    } else if (board[2] == board[4] && board[4] == board[6]) { //checking diagonally
        if (board[2] == 'O') {
            return 1;
        } else {
            return 2;
        }
    } else {
        return 0;
    }
}

int main() {
    int p1 = 1;
    int p2 = 2;

    int square = 0;
    int result;
    int tie = 1;

    cout << "Welcome to TIC TAC TOE!" << endl;
    display();
    //for loop until the game is over
    for (int i = 0; i < 5; i++) {
        cout << "\nPlayer 1, Enter your move: ";
        cin >> square;
        move(p1, square);
        display();

        result = win();
        if (result == 1) {
            cout << "\nPLAYER 1 WON!" << endl;
            tie = 0;
            break;
        } else if (result == 2) {
            cout << "\nPLAYER 2 WON!" << endl;
            tie = 0;
            break;
        }

        cout << "\nPlayer 2, Enter your move: ";
        cin >> square;
        move(p2, square);
        display();

        result = win();
        if (result == 1) {
            cout << "\nPLAYER 1 WON!" << endl;
            tie = 0;
            break;
        } else if (result == 2) {
            cout << "\nPLAYER 2 WON!" << endl;
            tie = 0;
            break;
        }
    }
    if (tie == 1) {
        cout << "\nIT IS A TIE";
    }
    return 0;
}
