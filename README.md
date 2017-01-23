
# Welcome to minesweeper 
-----------------------------------------------------------------------------------------------
This project is for minesweeper game. 

Firstly, I create a 9x9 field indicating the game field. 

Secondly I set all the field with -1 indicating field that had not been clicked.

Then I generates random number and set mines where number is 9. 

Then calaulate number of mine around a coordinate being clicked and print.

It calculates the number of mines and when the user click all the coordinate without mine, the user wins.

If user click a blank field, it will enlarge the field with 3x3 field in center of blank coordinate.

Function start() is to stimulate the game if the coordinate has not been click, then return the function itself,

else calculate the numbers of mines around the coordinate.

Function print()is to show the layout 

Function check(), whose type is bool is to check if the user had click all the field without mines.

I generate rand number with seed(time(0)) and lay mines in main() function.

#How to use it.
------------------------------------------------------------------------------------------------
you can compile with 'g++ -o sweep minesweeper.cpp' and then './sweep'


