# ft_printf

The goal of this project was to create a group of correlated functions that could copy the behaviour of "printf" function in C.

I have 4 files:

1- Makefile /

2- Header file (ft_printf.h) /

3- Source code file (ft_printf.c) /

4- Source code file (ft_utils.c) /

1- We use the Makefile to make easier our compiling and library creating process, along with cleaning the junk files.
   We have a set of rules made for each of those processes:
   
     all: It is the root for creating the library we are required, so there are three rules connected with each other until the library is created.
     "libftprintf.a" , OBJS are the rules connected to the first rule (all) so they have a dependency with each other.
              
2- The header files is obviusly mandatory when we use multiple source code files, we need to use the function between them so we must use "#define" to link the source code files with the header file.

3/4- "ft_printf.c" is the main function, along with "ft_utils.c".

Firstly, we take the first parameter as a string, we detect if there are any "%" characters in it and if there are, then we proceed with classifying the next character to it so we can know if it whether an int or a char.

In case it is an integer or a decimal number, we use the specific function we have in "ft_utils.c" for it, (ft_putnbr_total).

The most important thing we use is the "va_list" argument, without it we would have to manage to find the variables out of the string with something else.
