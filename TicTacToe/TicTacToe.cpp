#include <iostream>
using namespace std;

char board[3][3];
char currentPlayer = 'X';

void initializeBoard() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';

        }
    }

}

void printBoard() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << board[i][j];
            if (j < 2) cout << "|";
        }
        cout << endl;
        if (i < 2) cout << "-----" << endl;
    }


}

bool checkWin(char player) {
    
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) return true;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) return true;
    }
   
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player) return true;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player) return true;
    return false;
}

bool isDraw() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') return false;

        }
    }
    return true;
}

void switchPlayer() {
    currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
}

int main() {
    initializeBoard();
    while (true) {
        printBoard();
        int row, col;
        cout << "Player " << currentPlayer << ", enter row and column (0-2): ";
        cin >> row >> col;
        if (board[row][col] == ' ') {
            board[row][col] = currentPlayer;
            if (checkWin(currentPlayer)) {
                printBoard();
                cout << "Player " << currentPlayer << " wins!" << endl;
                break;
            }
            if (isDraw()) {
                printBoard();
                cout << "It's a draw!" << endl;
                break;
            }
            switchPlayer();
        }
        else {
            cout << "Cell already taken, try again!" << endl;
        }

    }
    return 0;



}
