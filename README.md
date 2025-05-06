Palindrome Checker (Lab 1.2)
Authors: Aevin Tweedie and Gabe Gil
Date: 6/5/2024

Description
This C++ program implements a recursive function to determine whether a given string is a palindrome—a word or phrase that reads the same forward and backward. It includes performance timing for each check using std::chrono, which will later be used to compare the efficiency of recursive and iterative approaches.

Example palindromes:

"madam" → palindrome

"hello" → not a palindrome

Features
Recursively checks whether a string is a palindrome

Measures and displays the time taken to perform each check

Provides output for multiple test strings

How It Works
The program uses a recursive function isPalindrome() that:

Compares characters from the start and end of the string.

Continues inward until all characters are matched or a mismatch is found.

The main() function tests two example strings and reports:

Whether each is a palindrome

The time taken to verify the result (in microseconds)

Sample Output
pgsql
Copy
Edit
String "madam" is a palindrome.
Time taken to check: 2 microseconds
String "hello" is not a palindrome.
Time taken to check: 1 microsecond
Compilation & Execution
To compile and run the program:

bash
Copy
Edit
g++ -std=c++11 palindrome.cpp -o palindrome
./palindrome
Note: Replace palindrome.cpp with the actual filename if different.

Future Enhancements
Implement and compare an iterative version of the palindrome checker.

Allow user input instead of hardcoded test cases.

Add support for ignoring case and non-alphabetic characters for phrases.
