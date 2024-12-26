#include <iostream>
#include <vector>
using namespace std;

vector<vector<char>> board(3, vector<char>(3, ' '));
vector<char> symbol = {'o', 'x'};
vector<string> player(2);
int turn = 0, number = 0;
int gameover = 0;
void renderboard() {
    cout << "Current Board:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "|";
        for (int j = 0; j < 3; j++) {
            cout << board[i][j] << "|";
        }
        cout << endl;
        if (i < 2) cout << "|-|-|-|" << endl;
    }
    cout << endl;
}

void check() {
    if (number == 9) {
        renderboard();
        cout << "It's a draw!" << endl;
        gameover = 1;
        return;
    }
    number++;
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') {
            cout << player[turn] << " wins!" << endl;
            gameover = 1;
            return;
        }
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ') {
            cout << player[turn] << " wins!" << endl;
            gameover = 1;
            return;
        }
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') {
        cout << player[turn] << " wins!" << endl;
        gameover = 1;
        return;
    }
    if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ') {
        cout << player[turn] << " wins!" << endl;
        gameover = 1;
        return;
    }
}

void play() {
    cout << player[turn] << ", enter the row and column where you want to place your symbol: ";
    string num;
    cin >> num;

    if (num.size() != 2 || !isdigit(num[0]) || !isdigit(num[1])) {
        cout << "Invalid input format. Enter two digits (e.g., 00, 01)." << endl;
        play();
        return;
    }

    int row = num[0] - '0';
    int col = num[1] - '0';

    if (row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != ' ') {
        cout << "Invalid move. Try again." << endl;
        play();
        return;
    }

    board[row][col] = symbol[turn];
    renderboard();
    check();
    turn = 1 - turn;

    if (gameover == 0)
        play();
}

int main() {
    cout << "Welcome to the Tic-Tac-Toe game!" << endl;
    renderboard();
    cout << "Enter Player 1 name: ";
    cin >> player[0];
    cout << "Enter Player 2 name: ";
    cin >> player[1];
    cout << player[0] << " has 'o' and " << player[1] << " has 'x'." << endl;
    cout << "Game begins!" << endl;
    play();
    return 0;
}
