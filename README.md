# README for Telephone Number List Program

## Overview
This program allows users to input phone numbers, store them in a linked list, and display or delete the list when needed. It uses the C++ standard library along with custom functions for handling the list and phone numbers. The program continues to accept phone numbers until the user enters `#`, which will terminate the input process.

## Features
- Accepts user input for phone numbers.
- Stores phone numbers in a linked list.
- Validates input to ensure it is a valid phone number.
- Allows the user to exit the input process by entering `#`.
- Displays the list of entered phone numbers.
- Deletes the list after it has been displayed.
- Verifies if the list is empty after deletion.

## Program Flow
1. **Create List**: The program starts by initializing an empty list for storing phone numbers.
2. **Input Loop**: The program prompts the user to enter phone numbers. If the input is valid (a number), it is added to the list.
3. **Validation**: If the user enters an invalid input (not a valid number), the program will display an error message.
4. **Exit Condition**: The loop terminates when the user inputs `#`.
5. **Display List**: After exiting the loop, the program displays all the stored phone numbers.
6. **Delete List**: The program deletes the list to free up memory.
7. **Check for Empty List**: Finally, the program checks if the list is empty and informs the user.

## Description of Files

- **hwp2_ue301.cpp**: Contains the main function and the primary logic for interacting with the user. It handles user input, calls functions to add phone numbers to the list, and handles the display and deletion of the list.
  
- **liste.h**: A header file containing the declarations for functions used to manipulate the phone number list.
  
- **liste.cpp**: Implements the functions declared in `liste.h`, including list creation, element insertion, displaying the list, and deleting the list.
  
- **listenElement.h**: It declares the `telefonNummer` type (representing a phone number) and the linked list structure.
- **makefile**: For the compilation of the program
- 
## Dependencies
- **C++ Standard Library**: The program uses standard C++ libraries such as:
  - `iostream`: For input/output operations.
  - `string`: For handling string data, particularly user input.
  - `std::stol`: For converting the string input to a long integer, which is used for phone numbers.

## Potential Improvements
While the current program works for simple input and output operations, there are several improvements that could be made to enhance functionality and performance:

1. **Search for a Specific Phone Number**:
   - Currently, the program only adds phone numbers to the list and displays them. A useful improvement would be to allow the user to search for a specific phone number in the list.
   - This feature could involve prompting the user to enter a phone number and checking if it exists in the list. A function could be added to search through the list of phone numbers and return a message indicating whether or not the number is found.

2. **Remove Phone Numbers from the List**:
   - Another useful enhancement would be adding the ability to remove a phone number from the list.
   - This could involve asking the user which phone number to delete and then removing it from the linked list, ensuring the list is properly updated and the memory is freed accordingly.

3. **Use a More Complex Data Structure (e.g., Binary Search Tree)**:
   - The current implementation uses a simple linked list to store phone numbers. While this works fine for small datasets, a more complex data structure like a **binary search tree (BST)** could be used for faster search, insertion, and deletion operations.
   - A binary search tree would allow for **O(log n)** search, insertion, and deletion times, which would be beneficial if the program needs to handle a large number of phone numbers efficiently. This would involve restructuring the program to store the phone numbers in nodes that follow the binary search tree property (left nodes are smaller, right nodes are larger).

## How to Compile and Run

### 1. Ensure You Have a G++ Compiler Installed

Make sure you have a C++ compiler such as **G++** installed on your system. If not, install it via your system's package manager (e.g., `apt`, `brew`, `yum`) or download it from [GCC's official website](https://gcc.gnu.org/).

### 2. Prepare Your Files

Create a directory and place the following source files inside it:
- `hwp2_ue301.cpp`
- `liste.h`
- `liste.cpp`
- `listenElement.h`
- `Makefile`

### 3. Open Terminal/Command Prompt

Navigate to the directory where the source files are located by opening a terminal or command prompt.

### 4. Compile the Program

Use the `make` utility to compile the program by running the following command:

```bash
make
output:
g++ -std=c++11 -Wall -c hwp2_ue301.cpp
g++ -std=c++11 -Wall -c liste.cpp
g++ -std=c++11 -Wall -o hwp2_ue301 hwp2_ue301.o liste.o

Once the program is successfully compiled, you can run it with:
./hwp2_ue301
output:
Liste erstellt.
Bitte geben Sie eine Telefonnummer ein (oder '#' zum Beenden): 10000154412  // Enter a telephone number
Bitte geben Sie eine Telefonnummer ein (oder '#' zum Beenden): #            // '#' to terminate the program
Telefonnummer: 10000154412    // The phone number entered
Die Liste wurde gelöscht.     // The list has been deleted
Die Liste ist jetzt leer.     // The list is empty



   

   


