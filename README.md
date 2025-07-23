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
