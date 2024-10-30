<div align="center">
<br>

![malloc.png](README-image/malloc.png)

</div>


<p align="center">
<img src="https://img.shields.io/badge/-C-yellow">
<img src="https://img.shields.io/badge/-Linux-lightgrey">
<img src="https://img.shields.io/badge/-WSL-brown">
<img src="https://img.shields.io/badge/-Ubuntu%2020.04.4%20LTS-orange">
<img src="https://img.shields.io/badge/-JetBrains-blue">
<img src="https://img.shields.io/badge/-Holberton%20School-red">
<img src="https://img.shields.io/badge/License-not%20specified-brightgreen">
</p>


<h1 align="center"> C - malloc </h1>


<h3 align="center">
<a href="https://github.com/RazikaBengana/holbertonschool-malloc#eye-about">About</a> •
<a href="https://github.com/RazikaBengana/holbertonschool-malloc#hammer_and_wrench-tasks">Tasks</a> •
<a href="https://github.com/RazikaBengana/holbertonschool-malloc#memo-learning-objectives">Learning Objectives</a> •
<a href="https://github.com/RazikaBengana/holbertonschool-malloc#computer-requirements">Requirements</a> •
<a href="https://github.com/RazikaBengana/holbertonschool-malloc#keyboard-more-info">More Info</a> •
<a href="https://github.com/RazikaBengana/holbertonschool-malloc#mag_right-resources">Resources</a> •
<a href="https://github.com/RazikaBengana/holbertonschool-malloc#bust_in_silhouette-authors">Authors</a> •
<a href="https://github.com/RazikaBengana/holbertonschool-malloc#octocat-license">License</a>
</h3>

---

<!-- ------------------------------------------------------------------------------------------------- -->

<br>
<br>

## :eye: About

<br>

<div align="center">

**`C - malloc`** project focuses on implementing **custom memory allocation functions** in `C`.
<br>
The programs include implementations of `malloc`, `free`, `calloc`, and `realloc` functions, demonstrating low-level memory management techniques.
<br>
<br>
This project has been created by **[Holberton School](https://www.holbertonschool.com/about-holberton)** to enable every student to understand how `dynamic memory allocation` in C language works.

</div>

<br>
<br>

<!-- ------------------------------------------------------------------------------------------------- -->

## :hammer_and_wrench: Tasks

<br>

**`0. Naive malloc`**

**`1. malloc`**

**`2. free`**

**`3. calloc`**

**`4. realloc`**

**`5. Multithreading`**

<br>
<br>

<!-- ------------------------------------------------------------------------------------------------- -->

## :memo: Learning Objectives

<br>

**_You are expected to be able to [explain to anyone](https://fs.blog/feynman-learning-technique/), without the help of Google:_**

<br>

```diff

General

+ What is a program break

+ How to play with a program break in order to allocate memory dynamically

+ How the glibc malloc and free functions work

+ What is ASLR

+ What is memory alignment

+ What is a memory page

+ How to encapsulate the memory management in order to hide it from the user

```

<br>
<br>

<!-- ------------------------------------------------------------------------------------------------- -->

## :computer: Requirements

<br>

```diff

General

+ Allowed editors: vi, vim, emacs

+ All your files will be compiled on Ubuntu 20.04 LTS

+ Your C programs and functions will be compiled with gcc 9.4.0 using the flags -Wall -Werror -Wextra and -pedantic

+ All your files should end with a new line

+ A README.md file, at the root of the folder of the project, is mandatory

+ Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl

- You are not allowed to have more than 5 functions per file

+ The prototypes of all your functions should be included in your header file called malloc.h

+ Don’t forget to push your header files

+ All your header files should be include guarded

+ You are allowed to use global variables

+ You are allowed to use static variables


Betty Compliance

+ All the C source files in your directory and subdirectories must be Betty-compliant


Allowed Functions and System Calls

+ Unless specified otherwise, you are allowed to use the C standard library

- Of course, you’re not allowed to use the malloc family from the C library…


Tests

+ It is strongly advised to test your functions against real programs, like a shell, or your old projects for example.

+ To do so, you can name your functions malloc, free, realloc and calloc (just like they’re name in the glibc), and compile them into a shared library that you would load when executing a program using LD_LIBRARY_PATH and LD_PRELOAD

```

<br>

**_Why all your files should end with a new line? See [HERE](https://unix.stackexchange.com/questions/18743/whats-the-point-in-adding-a-new-line-to-the-end-of-a-file/18789)_**

<br>

- Shared libraries with `GCC` on Linux --> [Here’s a tutorial on how to do it](https://www.cprogramming.com/tutorial/shared-libraries-linux-gcc.html)

<br>
<br>

<!-- ------------------------------------------------------------------------------------------------- -->

## :keyboard: More Info

<br>

### :warning: Important:

<br>

- It is not required that your `_malloc`, `free`, `calloc` and `realloc` behave exactly like the glibc `malloc`, `free`, `calloc` and `realloc`:

    - You are free to use any data structure that suits you as long as their purpose is well defined

    - You are free to handle the heap as it suits you, as long as the returned pointers (for the functions that return a pointer) are aligned as required and that enough space is available

    - You are free to extend the program break as it suits you, as long as it is extended by a multiple of the virtual memory page size, and as long as it is reduced when needed

    - You decide of your implementation. During the correction, we will mainly focus on the strength and reliability of your functions, so make sure to handle big allocations :)

<br>
<br>

<!-- ------------------------------------------------------------------------------------------------- -->

## :mag_right: Resources

<br>

**_Do you need some help?_**

<br>

**Concepts:**

* [[EYNTK] Writing your own dynamic allocation library](https://drive.google.com/file/d/11AzEThPeOdmTKcT8giRFLZbEP3UQOa8c/view?usp=sharing)

<br>

**Read or watch:**

* [Hack the Virtual Memory: malloc, the heap & the program break](https://blog.holbertonschool.com/hack-the-virtual-memory-malloc-the-heap-the-program-break/)

* Everything you need to know to write your own malloc

<br>

**`man` or `help`:**

* `sbrk`

* `brk`

* `malloc`

<br>
<br>

<!-- ------------------------------------------------------------------------------------------------- -->

## :bust_in_silhouette: Authors

<br>

<img src="https://img.shields.io/badge/Razika%20Bengana-darkblue" alt="Razika Bengana" width="120">

<br>
<br>

<!-- ------------------------------------------------------------------------------------------------- -->

## :octocat: License

<br>

```C - malloc``` _project has no license specified._

<br>
<br>

---

<p align="center"><br>2023</p>