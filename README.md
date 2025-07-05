# Print Diamond - Cyber Dojo Exercise

This is a C++ implementation of the Print Diamond kata from Cyber Dojo.

## Problem Description

Given a letter, print a diamond starting with 'A' with the supplied letter at the widest point.

### Examples

**Diamond for 'E':**
```
    A    
   B B   
  C   C  
 D     D 
E       E
 D     D 
  C   C  
   B B   
    A    
```

**Diamond for 'C':**
```
  A  
 B B 
C   C
 B B 
  A  
```

**Diamond for 'A':**
```
A
```

## Implementation

The solution is implemented in C++ using the Catch2 testing framework.

### Files
- `files/hiker.hpp` - Header file with function declaration
- `files/hiker.cpp` - Implementation of the `print_diamond` function
- `files/hiker.tests.cpp` - Test cases using Catch2
- `files/makefile` - Build configuration

### Function Signature
```cpp
std::string print_diamond(char letter);
```

The function takes a single uppercase letter (A-Z) and returns a string representing the diamond pattern.

## Building and Testing

To build and run the tests:

```bash
cd files
make
```

## Requirements

- C++ compiler with C++11 support
- Catch2 testing framework

## Original Exercise

This is a copy of the [Cyber Dojo exercise](https://cyber-dojo.org/kata/edit/PufH9A):
- Exercise: `Print Diamond`
- Language & test-framework: `C++ (clang++), Catch`

## How to upload your cyber-dojo exercise to GitHub:
- Go to your github on browser.
- Create a new repo for your cyber-dojo practice. For example `cyber-dojo-2021-7-11-bR2hnf`
- Execute the instructions shown in GitHub to 'push an existing repository from the command line'
The instructions will look like this:
```
git remote add origin https://github.com/diegopego/cyber-dojo-2021-7-11-bR2hnf.git
git branch -M main
git push -u origin main
```