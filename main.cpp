//Palindrome program Lab 1.2
//Aevin Tweedie and Gabe Gil
//6/5/2024
//
//The is a program that takes strings and implements a recursive function to
//validate/check if the given string is a palindrome "a string that is the same
//forward as it is beckwards" it times it so that we can compare speed with 
//the iterative version

#include <iostream>
#include <string>
#include <chrono>

using namespace std;
using namespace std::chrono;

// Recursive function to check if a string is a palindrome
bool isPalindrome(const string& str, int start, int end) {
    // Base condition: If there is only one character or no character
    if (start >= end) {
        return true;
    }
    // If the first and last characters do not match
    if (str[start] != str[end]) {
        return false;
    }
    // Check the remaining substring
    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    string input1 = "madam";
    string input2 = "hello";

    // Measure time for the first string
    auto start1 = high_resolution_clock::now();
    bool result1 = isPalindrome(input1, 0, input1.length() - 1);
    auto stop1 = high_resolution_clock::now();
    auto duration1 = duration_cast<microseconds>(stop1 - start1);

    cout << "String \"" << input1 << "\" is " << (result1 ? "" : "not ") << "a palindrome." << endl;
    cout << "Time taken to check: " << duration1.count() << " microseconds" << endl;

    // Measure time for the second string
    auto start2 = high_resolution_clock::now();
    bool result2 = isPalindrome(input2, 0, input2.length() - 1);
    auto stop2 = high_resolution_clock::now();
    auto duration2 = duration_cast<microseconds>(stop2 - start2);

    cout << "String \"" << input2 << "\" is " << (result2 ? "" : "not ") << "a palindrome." << endl;
    cout << "Time taken to check: " << duration2.count() << " microseconds" << endl;

    return 0;
}
