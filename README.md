<h1 align="center">
	42cursus libft
</h1>

![Image](https://github.com/MarkosComK/42-Libft/assets/67120870/f96b6b0c-edac-48fc-91f6-eebcc4c5652d)
<p align="center">
	<b><i>Development repo for 42cursus libft project</i></b><br>
	For further information about 42cursus and its projects, please refer to <a href="https://github.com/MarkosComK/42-Common-Core-Guide"><b>42-Common-Core-Guide repo</b></a>.
</p>


<h3 align="center">
	<a href="#%EF%B8%8F-about">About</a>
	<span> · </span>
	<a href="#-index">Index</a>
	<span> · </span>
	<a href="#%EF%B8%8F-usage">Usage</a>
	<span> · </span>
	<a href="#-testing">Testing</a>
</h3>

---
<br>
<div align="center">
	<img src="https://github.com/MarkosComK/42-Libft/assets/67120870/10a2a298-340e-4a67-96bd-d97716a60526">
</div>

## This is a project in daily use. If you want to see the project that i have been evaluated in 42school click in releases at the right side!

## 🗣️ About

> _The aim of this project is to code a C library regrouping usual functions that you'll be allowed to use in all your other projects._

<br>

# Great Resources for Libft

[42-Gitbook](https://42-cursus.gitbook.io/guide)

[Libft functions](https://www.asidesigned.com/project-libft.html) 

[Learn C](https://www.learn-c.org/)

[Makefile tutor](https://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/)

[C-Programming-Language-2nd-Edition (PDF)](https://github.com/MarkosComK/42-Libft/files/14312769/C-Programming-Language-2nd-Edition.pdf)

For detailed information, refer to the [subject of the project](https://github.com/MarkosComK/42-Libft/files/14319130/00-libft-en.pdf)


	🚀 This project consists of coding basic C functions (see below), which are then compiled
	into a library for use in other projects of the cursus.

### Functions from `<ctype.h>` library

* [`ft_isalnum`](src/ft_isalnum.c)			- alphanumeric character test.
* [`ft_isascii`](src/ft_isascii.c)			- test for ASCII character.
* [`ft_isalpha`](src/ft_isalpha.c)			- alphabetic character test.
* [`ft_islower`](src/ft_islower.c) 	- lower-case character test.
* [`ft_isupper`](src/ft_isupper.c) 	- upper-case character test.
* [`ft_isdigit`](src/ft_isdigit.c)			- decimal-digit character test.
* [`ft_isprint`](src/ft_isprint.c)			- printing character test.
* [`ft_tolower`](src/ft_tolower.c)			- upper case to lower case letter conversion.
* [`ft_toupper`](src/ft_toupper.c)			- lower case to upper case letter conversion.

### Functions from `<stdlib.h>` library

* [`ft_atoi`](src/ft_atoi.c)		- convert ASCII string to integer.
* [`ft_calloc`](src/ft_calloc.c)	- memory allocation.

### Functions from `<strings.h>` library

* [`ft_bzero`](src/ft_bzero.c)		- write zeroes to a byte string.
* [`ft_memccpy`](src/ft_memccpy.c)	- copy string until character found.
* [`ft_memchr`](src/ft_memchr.c)		- locate byte in byte string.
* [`ft_memcmp`](src/ft_memcmp.c)		- compare byte string.
* [`ft_memcpy`](src/ft_memcpy.c)		- copy memory area.
* [`ft_memmove`](src/ft_memmove.c)	- copy byte string.
* [`ft_memset`](src/ft_memset.c)		- write a byte to a byte string.

### Functions from `<string.h>` library

* [`ft_strlen`](src/ft_strlen.c)				- find length of string.
* [`ft_strchr`](src/ft_strchr.c)				- locate character in string (first occurrence).
* [`ft_strrchr`](src/ft_strrchr.c)			- locate character in string (last occurence).
* [`ft_strstr`](src/ft_strstr.c) 		- locate a substring in a string.
* [`ft_strnstr`](src/ft_strnstr.c)			- locate a substring in a string (size-bounded).
* [`ft_strcmp`](src/ft_strcmp.c) 		- compare strings.
* [`ft_strncmp`](src/ft_strncmp.c) 			- compare strings (size-bounded).
* [`ft_strlcpy`](src/ft_strlcpy.c)			- size-bounded string copying.
* [`ft_strlcat`](src/ft_strlcat.c)			- size-bounded string concatenation.

### Non-standard functions

* [`ft_putchar_fd`](src/ft_putchar_fd.c)		- output a character to given file.
* [`ft_putstr_fd`](src/ft_putstr_fd.c)		- output string to given file.
* [`ft_putendl_fd`](src/ft_putendl_fd.c)		- output string to given file with newline.
* [`ft_putnbr_fd`](src/ft_putnbr_fd.c)		- output integer to given file.
* [`ft_itoa`](src/t_itoa.c)					- convert integer to ASCII string.
* [`ft_substr`](src/ft_substr.c)				- extract substring from string.
* [`ft_strtrim`](src/ft_strtrim.c)			- trim beginning and end of string with the specified characters.
* [`ft_strjoin`](src/ft_strjoin.c)			- concatenate two strings into a new string (with malloc).
* [`ft_split`](src/ft_split.c)				- split string, with specified character as delimiter, into an array of strings.
* [`ft_strmapi`](src/ft_strmapi.c)			- create new string from modifying string with specified function.

### Linked list functions

* [`ft_lstnew`](srcs/ft_lstnew.c)				- create new list.
* [`ft_lstsize`](srcs/ft_lstsize.c)			- count elements of a list.
* [`ft_lstlast`](srcs/ft_lstlast.c)			- find last element of list.
* [`ft_lstadd_back`](srcs/ft_lstadd_back.c)	- add new element at end of list.
* [`ft_lstadd_front`](srcs/ft_lstadd_front.c)	- add new element at beginning of list.
* [`ft_lstdelone`](srcs/ft_lstdelone.c)		- delete element from list.
* [`ft_lstclear`](srcs/ft_lstclear.c)			- delete sequence of elements of list from a starting point.
* [`ft_lstiter`](srcs/ft_lstiter.c)			- apply function to content of all list's elements.
* [`ft_lstmap`](srcs/ft_lstmap.c)				- apply function to content of all list's elements into new list.

_Note: functions marked with * are bonus functions (not mandatory by the project's subject)._


## 🛠️ Usage

### Requirements

The library is written in C language and thus needs the **`gcc` compiler** and some standard **C libraries** to run.

### Instructions

**1. Compiling the library**

To compile the library, run:

```shell
$ cd path/to/libft && make
```

**2. Using it in your code**

To use the library functions in your code, simply include its header:

```C
#include "libft.h"
```

and, when compiling your code, add the required flags:

```shell
-lft -L path/to/libft.a -I path/to/libft.h
```

## 📋 Testing

**1. I haven`t coded a tester yet, but you can make your own test for each function. Here some third party testers that you can use.**

### Third-party testers

* [xicodomingues/francinette](https://github.com/xicodomingues/francinette)
* [jtoty/Libftest](https://github.com/jtoty/Libftest)
* [alelievr/libft-unit-test](https://github.com/alelievr/libft-unit-test)
* [Night-squad/libft-war-machine-v2019](https://github.com/Night-squad/libft-war-machine-v2019)
* [t0mm4rx/libftdestructor](https://github.com/t0mm4rx/libftdestructor)


#### THE ANSWER IS 42

Rnpu cebwrpg bs gur 97 Pbzzba Pber pbagnvaf na rapbqrq uvag. Sbe
rnpu pvepyr, bayl bar cebwrpg cebivqrf gur pbeerpg uvag arrqrq sbe
gur arkg pvepyr. Guvf punyyratr vf vaqvivqhny, gurer vf bayl n
cevmr sbe bar fghqrag jvaare cebivqvat nyy qrpbqrq zrffntrf. Nal
nqinagntrq crbcyr pna cynl, yvxr pheerag be sbezre fgnss, ohg gur
cevmr jvyy erznva flzobyvp. Gur uvag sbe guvf svefg cebwrpg vf:
Ynetr pbjf trarebfvgl pbzrf jvgu punegf naq sbhe oybaqr ungf gb qrsl
hccre tenivgl ureb.
