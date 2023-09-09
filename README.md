
# C++ Module 01 Project 

![C++ Logo](cpp_logo.png)

## Table of Contents

1. [Exercise 00: BraiiiiiiinnnzzzZ](#exercise-00-braiiiiiiinnnzzzz)
2. [Exercise 01: Moar brainz!](#exercise-01-moar-brainz)
3. [Exercise 02: HI THIS IS BRAIN](#exercise-02-hi-this-is-brain)
4. [Exercise 03: Unnecessary violence](#exercise-03-unnecessary-violence)
5. [Exercise 04: Sed is for losers](#exercise-04-sed-is-for-losers)
6. [Exercise 05: Harl 2.0](#exercise-05-harl-20)
7. [Exercise 06: Harl filter](#exercise-06-harl-filter)
8. [Submission and peer-evaluation](#submission-and-peer-evaluation)

# Project Overview

The C++ Module 01 project provides a comprehensive exploration of vital programming concepts and essential features of the C++ language. It serves as a pivotal milestone in your journey, offering practical experience in memory management, pointers, references, and the effective implementation of switch statements. Through a series of guided exercises, you'll establish a robust foundation in C++, gaining valuable insights into the principles of object-oriented programming (OOP).

# Significance and Relevance

This project holds significant relevance for several key reasons:

- **Memory Management:** A profound understanding of memory allocation and deallocation in C++ is imperative for writing efficient and error-free code. You'll learn to discern between stack and heap memory, along with techniques to prevent memory leaks.

- **Pointers and References:** Pointers are powerful tools in C++ for handling memory and data. You'll delve into the intricacies of pointers, including pointers to members, and explore the concept of references as an alternative approach to data manipulation.

- **Switch Statements:** The switch statement is a versatile control structure for effectively managing multiple branching scenarios. You'll master its use for seamless decision-making within your programs.

# Key Concepts in Focus

Throughout this project, you'll engage with and master several pivotal concepts, including:

- **Memory Allocation:** A comprehensive understanding of dynamically allocating memory (heap) and statically allocating memory (stack), along with efficient management of memory resources.

- **Pointer Manipulation:** Proficiency in working with pointers to access and manipulate memory locations and objects.

- **Reference Utilization:** Leveraging references as an alternative to pointers for streamlined data manipulation and memory access.

- **Switch Statement Application:** Harnessing the switch statement for seamless control flow and effective decision-making in code.

The practical exercises and hands-on coding challenges in this project will equip you with the skills and knowledge necessary to excel in C++ programming. This foundation will serve as a springboard for your continued learning and development in this powerful language.


## Exercise 00: BraiiiiiiinnnzzzZ

#### Introduction:
This exercise involves creating a Zombie class and two functions for managing zombies. The goal is to understand memory allocation, pointers, and basic class implementation in C++.

#### Relevance:
- Introduction to C++ classes and objects.
- Memory allocation in C++ (stack vs. heap).
- Pointers and dynamic memory allocation.
- Basic function implementation in C++.

#### Key Concepts:
- Class definition and member functions.
- Constructors and destructors.
- Dynamic memory allocation with `new` and `delete`.

#### How to Run:
1. Navigate to the `ex00` directory.
2. Compile the program using the provided Makefile by running `make`.
3. Run the program by executing `./zombie`.

## Exercise 01: Moar brainz!

#### Introduction:
In this exercise, you'll create a horde of zombies using a function. It's an opportunity to practice memory allocation and pointer management in C++.

#### Relevance:
- Dynamic memory allocation and deallocation.
- Working with arrays of objects.
- Proper memory cleanup to prevent memory leaks.

#### Key Concepts:
- Dynamic memory allocation with arrays.
- Creating and initializing objects in bulk.
- Memory deallocation with `delete[]`.

#### How to Run:
1. Navigate to the `ex01` directory.
2. Compile the program using the provided Makefile by running `make`.
3. Run the program by executing `./zombieHorde`.

## Exercise 02: HI THIS IS BRAIN

#### Introduction:
This exercise introduces the concept of references in C++. You'll create a program that demonstrates how references work compared to pointers.

#### Relevance:
- Understanding references in C++.
- Address manipulation and memory access.

#### Key Concepts:
- Declaring and initializing references.
- Address-of operator (`&`) for getting memory addresses.
- Accessing values through references.

#### How to Run:
1. Navigate to the `ex02` directory.
2. Compile the program using the provided Makefile by running `make`.
3. Run the program by executing `./brain`.

---

## Exercise 03: Unnecessary violence

#### Introduction:
This exercise involves creating classes and managing relationships between them. You'll implement a Weapon class and two classes, HumanA and HumanB, which demonstrate different ways of using objects.

#### Relevance:
- Object-oriented programming (OOP) in C++.
- Composition and object relationships.
- Constructors and setters.

#### Key Concepts:
- Class composition and object aggregation.
- Constructor overloading.
- Setter methods for modifying object properties.

#### How to Run:
1. Navigate to the `ex03` directory.
2. Compile the program using the provided Makefile by running `make`.
3. Run the program by executing `./violence`.

---

## Exercise 04: Sed is for losers

#### Introduction:
This exercise involves creating a program that replaces all occurrences of a string in a file in C++.

#### Relevance:
- Regular expressions and pattern matching.
- Text substitution and string manipulation.
- Command-line interface (CLI) usage.


#### Key Concepts:
- File input/output (I/O) in C++.
- String manipulation with `std::string`.
- Command-line arguments.

#### How to Run:
1. Navigate to the `ex04` directory.
2. On the command line, run the following command:
```
 make && ./replace [filename] [string1] [string2]
```
note: [filename] is the name of the file you want to edit, [string1] is the string you want to replace, and [string2] is the string you want to replace it with.

3. To check if the program worked, run the following command:
```
diff [filename] [filename].replace
```
note: [filename] is the name of the file you want to edit.

4. If the program worked, the command line will not return anything. If the program did not work, the command line will return the differences between the two files.

## Exercise 05: Harl 2.0

#### Introduction:
This exercise involves creating a basic lexer and parser for a custom language named "Harl". You'll gain experience in lexical analysis and parsing, fundamental skills for building compilers and interpreters.

#### Relevance:
- Lexical analysis and tokenization.
- Basic parsing techniques.
- Understanding language structure and syntax.

#### Key Concepts:
- Lexical analysis and token identification.
- Basic parsing using a finite state machine.
- Implementing a simple language grammar.

#### How to Run:
1. Navigate to the `ex05` directory.
2. On the terminal, run the following command:
```
make run
```

## Exercise 06: Harl filter

#### Introduction:
Building on Exercise 05, this exercise extends the Harl language by adding a filter feature. You'll learn to incorporate more advanced parsing and language processing techniques.

#### Relevance:
- Extending a simple language with new features.
- Advanced parsing techniques.
- Language design and implementation.

#### Key Concepts:
- Expanding language capabilities through parsing.
- Handling more complex language structures.
- Combining lexical analysis and parsing.

#### How to Run:
1. Navigate to the `ex06` directory.
2. On the terminal, run the following command:
```
make run
```

## Conclusion

The C++ Module 01 project underscores proficiency in vital programming principles. It showcases adeptness in memory allocation, pointer manipulation, referencing, and utilizing switch statements. This achievement signals a robust grounding in C++ programming and the capability to address tangible coding challenges—a substantial asset for potential employers in the software development field.

## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details.