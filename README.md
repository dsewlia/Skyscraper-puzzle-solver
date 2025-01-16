# Skyscraper-puzzle-solver
One of the fastest program to solve a 4X4 skyscraper puzzle

Program to solve a 4X4 skyscraper puzzle.
To compile: cc *.c -o output_file
To run: ./output_file

The constraints are to be passed as arguments. eg: ./output_file "col1up col2up col3up col4up col1down col2down col3down col4down row1left row2left row3left row4left row1right row2right row3right row4right"

Eg: ./output_file "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"
Expected output:
1 2 3 4
2 3 4 1
3 4 1 2
4 1 2 3
