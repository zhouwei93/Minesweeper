### Welcome to GitHub Pages.

# Welcome to minesweeper 
# Function:

This project is for minesweeper game.

1. minesweeper is a game with 9*9 field, when user set a position, it can show the board.

2.  prompt user whether there is a mine, if not ,game continues, Show the number of mines in the surrounding 8 squares.

3. if user find the mine, prompt game over, and show the position of mines. 

# Details 
## about code 
1. create a 9x9 field indicating the game field.

2. set all the field with -1 indicating field that had not been clicked.

3. generates random number and set mines where number is 9.

4. calaulate number of mine around a coordinate being clicked and print.

5. It calculates the number of mines and when the user click all the coordinate without mine, the user wins.

6. If user click a blank field, it will enlarge the field with 3x3 field in center of blank coordinate.

7. Function start() is to stimulate the game if the coordinate has not been click, then return the function itself,else calculate the numbers of mines around the coordinate.

8. Function print()is to show the layout

9. Function check(), whose type is bool is to check if the user had click all the field without mines.

generate rand number with seed(time(0)) and lay mines in main() function.

## How to use it.

you can compile with ‘g++ -o sweep minesweeper.cpp’ and then ‘./sweep’
