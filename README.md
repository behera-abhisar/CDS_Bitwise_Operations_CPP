# EXPERIMENT 04(A): BITWISE OPERATIONS IN C++

## AIM
To write a C++ program that performs various bitwise operations on two integers and displays the results.

## TOOLS USED
- **Language**: C++
- **Compiler**: g++ (GNU Compiler Collection)
- **Platform**: Linux / Windows / macOS (any system with a C++ compiler)
- **Editor/IDE**: Visual Studio Code / Code::Blocks / Terminal-based editor

## THEORY
Bitwise operators are used to perform operations on individual bits of integer data. They are commonly used in low-level programming, embedded systems, and performance-critical code.

The bitwise operators used in this experiment are:

- `&` : **Bitwise AND**  
- `|` : **Bitwise OR**  
- `^` : **Bitwise XOR**  
- `~` : **Bitwise NOT**  
- `<<` : **Left Shift** (multiplies by 2 for each shift)  
- `>>` : **Right Shift** (divides by 2 for each shift)

### Example:
For `a = 5` and `b = 10`, the binary representations are:
- `a = 0101`
- `b = 1010`

Using these values, we can evaluate each bitwise operation.

### ALGORITHM
1. Start  
2. Declare and initialize two integers `a` and `b`  
3. Apply the following bitwise operations:
   - Bitwise AND (`a & b`)
   - Bitwise OR (`a | b`)
   - Bitwise XOR (`a ^ b`)
   - Bitwise NOT (`~a`, `~b`)
   - Left Shift (`a << 1`, `b << 1`)
   - Right Shift (`a >> 1`, `b >> 1`)
4. Display the results  
5. End

## CONCLUSION
In this experiment, I learned how to perform and interpret various bitwise operations in C++. This helped me understand low-level binary manipulation and how data is represented and processed at the bit level.

# EXPERIMENT 04(B): SETTING AND RESETTING A BIT IN BINARY (C++)

## AIM
To write a C++ program that sets and resets a specific bit at a given position in a binary number using bitwise operations.

## TOOLS USED
- **Language**: C++
- **Compiler**: g++ (GNU Compiler Collection)
- **Platform**: Linux / Windows / macOS (any system with a C++ compiler)
- **Editor/IDE**: Visual Studio Code / Code::Blocks / Terminal-based editor

## THEORY
Bitwise operations allow direct manipulation of individual bits in binary representation. In this experiment, we use:

- `|` (bitwise OR) to **set** a bit  
- `&` with `~` (bitwise AND with NOT) to **reset** a bit

To set or reset the bit at a particular position `pos` (1-based index):
- **Set bit**: `a | (1 << (pos - 1))`  
- **Reset bit**: `a & ~(1 << (pos - 1))`

These operations are useful in embedded systems, flag manipulation, and memory-efficient programming.

### Example:
For `a = 5` (which is `0101` in binary) and position = 1:
- Set bit: no change (LSB is already 1) → result = 5
- Reset bit: LSB set to 0 → result = 4

### ALGORITHM
1. Start  
2. Declare an integer variable `a`  
3. Take input from the user for the number `a`  
4. Take input for the bit position `pos` to set/reset  
5. Perform set operation using: `a | (1 << (pos - 1))`  
6. Perform reset operation using: `a & ~(1 << (pos - 1))`  
7. Display the results  
8. End

## CONCLUSION
I wrote a C++ program that sets and resets a bit at a specified position using bitwise operations. This experiment helped me understand how to manipulate individual bits using shifts and logical operations, which is essential for low-level and system programming.
