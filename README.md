
# LIBFT-42 Project

## Project Overview

This project aims to create a C library regrouping standard functions that can be used in future projects. The goal is to re-implement key functions from the standard C library and create additional utility functions.

## Mandatory Parts

### Part I: Libc Functions Reimplementation

These functions mimic standard C library functions, with the prefix "ft_" added to distinguish them:

#### Character Type Checking Functions
- `ft_isalpha()`: Check for an alphabetic character
- `ft_isdigit()`: Check for a digit (0-9)
- `ft_isalnum()`: Check for an alphanumeric character
- `ft_isascii()`: Check if character fits in the ASCII character set
- `ft_isprint()`: Check for a printable character

#### String Manipulation Functions
- `ft_strlen()`: Calculate string length
- `ft_memset()`: Fill memory with a constant byte
- `ft_bzero()`: Zero a byte string
- `ft_memcpy()`: Copy memory area
- `ft_memmove()`: Copy memory area (handling overlapping)
- `ft_strlcpy()`: Copy string with size limitation
- `ft_strlcat()`: Concatenate string with size limitation
- `ft_strchr()`: Locate first occurrence of a character
- `ft_strrchr()`: Locate last occurrence of a character
- `ft_strncmp()`: Compare n bytes of two strings
- `ft_strnstr()`: Locate a substring in a string

#### Character Conversion Functions
- `ft_toupper()`: Convert character to uppercase
- `ft_tolower()`: Convert character to lowercase

#### Memory Functions
- `ft_memchr()`: Scan memory for a character
- `ft_memcmp()`: Compare memory areas

#### Conversion Functions
- `ft_atoi()`: Convert string to integer

#### Memory Allocation Functions
- `ft_strdup()`: Duplicate a string
- `ft_calloc()`: Allocate and zero-initialize memory

### Part II: Additional Functions

- `ft_substr()`: Extract a substring
- `ft_strjoin()`: Concatenate two strings
- `ft_strtrim()`: Trim specific characters from string edges
- `ft_split()`: Split a string using a delimiter
- `ft_itoa()`: Convert integer to string
- `ft_strmapi()`: Apply function to each character in a string
- `ft_striteri()`: Modify string characters in-place
- File descriptor output functions:
  - `ft_putchar_fd()`: Output a character
  - `ft_putstr_fd()`: Output a string
  - `ft_putendl_fd()`: Output a string with newline
  - `ft_putnbr_fd()`: Output a number

## Bonus Part: Linked List Functions

- `ft_lstnew()`: Create a new list element
- `ft_lstadd_front()`: Add element to list beginning
- `ft_lstsize()`: Count list elements
- `ft_lstlast()`: Get last list element
- `ft_lstadd_back()`: Add element to list end
- `ft_lstclear()`: Delete and free entire list
- `ft_lstiter()`: Apply function to each list element
- `ft_lstmap()`: Create new list by applying function

## Project Guidelines

1. All functions must replicate the behavior of standard library functions
2. Function names must be prefixed with "ft_"
3. No global variables allowed
4. Use of `malloc()` is permitted for memory allocation

## Resources

- [C Library Reference Manual](https://www.gnu.org/software/libc/manual/html_node/index.html)
- Man pages for standard C library functions

## Compilation

Compile the library using:
```bash
make
```

Generate bonus functions with:
```bash
make bonus
```

## Testing

Use provided test suites or create your own to verify function implementations.
