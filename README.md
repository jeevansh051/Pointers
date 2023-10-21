# Pointers
A basic cpp code while describing pointers

## Theory:
- Pointers are symbolic representations of addresses.
- They enable programs to simulate call-by-reference as well as to create and manipulate dynamic data structures.
- Iterating over elements in arrays or other data structures is one of the main use of pointers. 
- The address of the variable you’re working with is assigned to the pointer variable that points to the same data type.
- such as an int or string.
- 'ptr' can point to an address which holds int data

### Syntax
```
datatype *var_name; 
int *ptr;
```

### How to use a pointer:
- Define a pointer variable
- Assigning the address of a variable to a pointer using the unary operator (&) which returns the address of that variable.
- Accessing the value stored in the address using unary operator (*) which returns the value of the variable located at the address 
  specified by its operand.

### Advantages of Pointers
- Pointers reduce the code and improve performance.
- They are used to retrieve strings, trees, arrays, structures, and functions.
- Pointers allow us to return multiple values from functions.
- In addition to this, pointers allow us to access a memory location in the computer’s memory.
- It knows how many bytes the data is stored in.

