README – CSV File Processing Lab
Program Purpose

This program reads data from a CSV file named data.csv.
Each line contains two integers and one string.
The program adds the two integers and prints the string that many times.

Pseudocode
START program

Create file input stream
Open "data.csv"

IF file fails to open
    Print error message
    End program
END IF

WHILE there are lines left in file

    Read one full line from file

    Create stringstream using that line

    Read first value (until comma)
        Store in temporary string
        Convert to integer (num1)

    Read second value (until comma)
        Store in temporary string
        Convert to integer (num2)

    Read final value (word)

    Remove leading space from word if necessary

    Add num1 + num2
    Store result in sum

    FOR i from 0 to sum - 1
        Print word
    END FOR

    Print newline

END WHILE

Close file

END program
