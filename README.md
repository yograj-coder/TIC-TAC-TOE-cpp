# TIC-TAC-TOE-cpp
This project was built to create a highly optimized, fully playable Tic-Tac-Toe game in C++ that rigorously follows every game rule. Instead of using nested loops to rescan the entire board after every turn, the logic relies on an array-sum approach to track rows, columns, and diagonals, instantly evaluating the game state with high efficiency.

Key Features:

-> Optimized Win Detection: Instantly verifies wins, losses, or draws by tracking the numerical sum of player moves across all winning axes.

-> Dynamic Console Visuals: Renders a clean, understandable 3x3 grid that updates dynamically so two players can comfortably share the screen.

-> Strict Input Validation: Includes robust edge-case handling that prevents players from overwriting an already occupied cell.

-> Complete Match Logic: Seamlessly manages player alternation, accurately flags draw scenarios when the board is full, and includes a manual exit command (-1) to terminate the loop at any time.
