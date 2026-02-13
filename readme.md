README – CSV File Processing Lab

This program reads data from a file named data.csv. Each line of the file contains two integers and one string separated by commas. The program reads each line, separates the values, converts the numbers to integers, adds them together, and prints the string that many times.

Pseudocode:

Start the program.

Create an input file stream and attempt to open the file named data.csv.

If the file does not open successfully, print an error message and end the program.

While there are still lines left to read in the file, do the following:

Read one entire line from the file and store it in a string variable.

Create a stringstream object using that line.

Use getline with a comma delimiter to read the first value from the stringstream. Store it in a temporary string, then convert that string into an integer and store it as num1.

Use getline again with a comma delimiter to read the second value. Store it in a temporary string, then convert it into an integer and store it as num2.

Use getline one more time to read the remaining text, and store it as a string called word.

If the word begins with a space, remove the leading space.

Add num1 and num2 together and store the result in a variable called sum.

Use a loop that runs sum times. During each iteration, print the word followed by a space.

After the loop finishes, print a newline.

Repeat this process for every line in the file.

After all lines have been processed, close the file.

End the program.
