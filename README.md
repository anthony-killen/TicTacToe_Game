The content of this repository is a coded simulation of a classic TicTacToe game using C++ code created by anthony killen.

The game is a two-player game that takes place on a 3x3 grid with players taking turns inputting their symbols 'X' and 'O' respectively. 
The goal of this game is to the user to input your symbol on the grid in a line either verticaly, horizontaly or diagnolly.
There are three possible outcomes of the game, win, loss, or draw.
The conditions to win are: complete a row horizontally, complete a column vertically, or complete a diagonal with your symbol.
The conditions to lose are: Your opponent completes a row horizontally, completes a column vertically, or completes a diagonal with your symbol.
The conditions for a draw are: The grid is completely full of symbols with neither you nor your opponent completing a row horizontally, a column vertically, or a diagonal with your symbol.

Propositions in formal logic:
P: "Player X wins by completing a row."
Q: "Player X wins by completing a column."
R: "Player X wins by completing a diagonal."

Logical Rules of inference:
If P or Q or R then player X wins.
