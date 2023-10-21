# Pointers
A basic cpp code while describing pointers

## Theory:
- Pointers are symbolic representations of addresses.
- They enable programs to simulate using call-by-reference.
- To create and manipulate data structures.
- Iterating over elements in arrays or other data structures is one of the main use of pointers.
- such as an int or string.
- 'ptr' can point to an address which holds int data

### Syntax
```
datatype *var_name; 
int *ptr;
```

### Advantages of Pointers:
- Pointers reduce the code and improve performance.
- It allows us to return multiple values from functions.
- It allows us to access a memory location in the computer’s memory.
- It knows how many bytes the data is stored in.
  
### Pointer Expressions:
- set of arithmetic operations used in pointers:
- incremented ( ++ )
- decremented ( — )
- an integer may be added or  subtracted to a pointer ( + or += ) ( – or -= )
- difference (p1-p2)

### How to use a pointer:
- Define a pointer variable
- Assign the address of a variable to a pointer using '&' which will returns the address of that variable.
- Accessing the value stored in the address using (*) which returns the value of the variable located at the address 
  specified by its operand.

### Pointers to pointers:
- In C++, we can create a pointer to a pointer that in turn may point to data or another pointer.
- syntax:
```
char a;
char *b;
char ** c;
a = ’g’;
b = &a;
c = &b;
```
## Outcomes:
- Represent the values of the pointers of there variables.
- Print the elements of an array with its address using pointers.
- Print specific values of specific index of array.

  
