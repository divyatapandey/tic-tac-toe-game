# Tic-Tac-Toe Game

This is a simple two-player Tic-Tac-Toe game implemented in C++. The game allows two players to take turns and place their respective symbols ('o' and 'x') on a 3x3 grid, with the goal of getting three symbols in a row, column, or diagonal.

## Features

- 2-player gameplay.
- Players take turns to place their symbols on the board.
- The game ends when one player wins or the board is filled, resulting in a draw.
- Displays the current game board after each move.
- Displays a message when the game ends, announcing the winner or a draw.

## How to Play

1. **Player 1** starts with 'o' and **Player 2** uses 'x'.
2. Players alternate turns to place their symbol on the board by entering a row and column number (e.g., `00`, `01`, `11`, etc.).
3. The game ends when a player achieves three consecutive symbols in a row, column, or diagonal, or if the board is filled (draw).
4. The winner is displayed after the game ends, or a draw message appears if no player wins.

## Compilation and Execution

To compile and run the game:

1. Save the code in a file named `tictactoe.cpp`.
2. Open a terminal/command prompt and navigate to the directory where the file is saved.
3. Run the following command to compile the code:

   ```bash
   g++ -o tictactoe tictactoe.cpp
4. Execute the compiled program:
   ```bash
   ./tictactoe

