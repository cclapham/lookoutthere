# lookoutthere
mini projects for learning c++

## About
This repo will be home to an array of side projects written in C++ to assist with my learning.

## Ideas
- noughts & crosses (tic-tac-toe)
- connect 4
  - 2 human players
  - vs cpu (needs some kind of learning)
- tetris (requires graphics and realtime)
- chess
  - 2 human players
  - vs cpu
- draughts
  - 2 human players
  - vs cpu
- solitaire (balls/tokens)
- solitaire (cards)
- minesweeper
- guess the number (higher/lower)

# 1. Guess the number

This is a text based console app. The application will randomly pick a number between 1 and 20 then ask the user to guess.
After an incorrect guess the computer replies "higher" or "lower". If the guess is within 1 the computer will alos reply "very close"

The game ends when the user guesses the correct number. User is then prompted to enter "y" or "n" to play again or end the session.

## Pseudo Code
  1. Computer selects random number
  2. Computer prompts user to guess;
  3. Evaluate if guess is same as number [yes: GOTO 6][no: GOTO 4]
  4. Evaluate if guess is higher than number [yes: Tell User GOTO 2][no: GOTO 4]
  5. Evaluate if guess is lower than number [yes: Tell User GOTO 2][no: something has gone wrong]
  6. Congratulate user and prompt to play again [yes: GOTO 1][no: END]

This algorithm will require refinement on steps 4 and 5 to determine if the user is within 1 of the correct answer.
