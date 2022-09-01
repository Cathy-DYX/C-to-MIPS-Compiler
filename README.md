# C-to-MIPS-Compiler

This is a pre-processed C90 to MIPS assembly compiler, produced as part of the EIE 2nd Year Compilers coursework.

## Overview
This compiler uses Flex to lex ([ANSI C lex specification](https://www.lysator.liu.se/c/ANSI-C-grammar-l.html)) and Yacc to parse ([ANSI C Yacc grammar](https://www.lysator.liu.se/c/ANSI-C-grammar-y.html)) the input C language, and generates the corresponding MIPS assembly code using C++.

This project passed all 247 tests in the <code>compiler_tests</code> folder (including seen tests and extra tests), and it passed 184 out of 202 examiner tests (including seen tests and unseen tests)

## To run the code
Use <code>./utility/test_dir.sh</code> to run all testcases.

Use <code>./utility/test_dir.sh DIR_NAME</code> to run all test cases under the specified directory.

Use <code>./utility/test.sh</code> to run the a single test case <code>./utility/my_test.c</code> with <code>./utility/my_test_driver.c</code>. You can check the assembly output in <code>my_test.s</code>

## Directories

### compiler_tests

This folder contains the test cases grouped by types. It includes all given test cases as well as some extra test cases to further test the compiler's functionalities. 

### include

This folder contains all header files, which includes the declarations of the assembly code generation functions.

### project_requirement

This folder contains the project specification.

### src

It contains the lexer written in Flex and the parser written in Yacc. It also includes the cpp files which generate the assembly codes.

### utility

It contains the bash files to build and test the compiler code.
