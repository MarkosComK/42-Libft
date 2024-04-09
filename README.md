<h1 align="center">
	42cursus libft
</h1>

![Image](https://github.com/MarkosComK/42-Libft/assets/67120870/f96b6b0c-edac-48fc-91f6-eebcc4c5652d)
<p align="center">
	<b><i>Development repo for 42cursus libft project</i></b><br>
	For further information about 42cursus and its projects, please refer to <a href="https://github.com/appinha/42cursus"><b>42cursus repo</b></a>.
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

## 🗣️ About

> _The aim of this project is to code a C library regrouping usual functions that you'll be allowed to use in all your other projects._

<br>

# Great Resources for Libft

[Libft functions](https://www.asidesigned.com/project-libft.html) 

[Learn C](https://www.learn-c.org/)

[Makefile tutor](https://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/)

[C-Programming-Language-2nd-Edition (PDF)](https://github.com/MarkosComK/42-Libft/files/14312769/C-Programming-Language-2nd-Edition.pdf)

For detailed information, refer to the [subject of the project](https://github.com/MarkosComK/42-Libft/files/14319130/00-libft-en.pdf)


	🚀 This project consists of coding basic C functions (see below), which are then compiled
	into a library for use in other projects of the cursus.

### Functions from `<ctype.h>` library

* [`ft_isascii`](libft/sr/is/ft_isascii.c)			- test for ASCII character.
* [`ft_isalnum`](libft/src/is/ft_isalnum.c)			- alphanumeric character test.
* [`ft_isalpha`](libft/src/is/ft_isalpha.c)			- alphabetic character test.
* [`ft_islower`](libft/src/is/ft_islower.c) *	- lower-case character test.
* [`ft_isupper`](src/ft_isupper.c) *	- upper-case character test.
* [`ft_isdigit`](libft/src/is/ft_isdigit.c)			- decimal-digit character test.
* [`ft_isxdigit`](libft/src/is/ft_isxdigit.c) *	- hexadecimal-digit character test.
* [`ft_isprint`](libft/src/is/ft_isprint.c)			- printing character test (space character inclusive).
* [`ft_isgraph`](libft/src/is/ft_isgraph.c) *	- printing character test (space character exclusive).
* [`ft_isspace`](libft/src/is/ft_isspace.c) *	- white-space character test.
* [`ft_isblank`](libft/src/is/ft_isblank.c) *	- space or tab character test.
* [`ft_ispunct`](libft/src/is/ft_ispunct.c) *	- punctuation character test.
* [`ft_iscntrl`](libft/src/is/ft_iscntrl.c) *	- control character test.
* [`ft_tolower`](libft/src/to/ft_tolower.c)			- upper case to lower case letter conversion.
* [`ft_toupper`](libft/src/to/ft_toupper.c)			- lower case to upper case letter conversion.

### Functions from `<stdlib.h>` library

* [`ft_atoi`](libft/src/to/ft_atoi.c)		- convert ASCII string to integer.
* [`ft_atof`](libft/src/to/ft_atof.c) *		- convert ASCII string to integer.
* [`ft_calloc`](libft/src/mem/ft_calloc.c)	- memory allocation.

### Functions from `<strings.h>` library

* [`ft_bzero`](libft/src/mem/ft_bzero.c)		- write zeroes to a byte string.
* [`ft_memset`](libft/src/mem/ft_memset.c)		- write a byte to a byte string.
* [`ft_memchr`](libft/src/mem/ft_memchr.c)		- locate byte in byte string.
* [`ft_memcmp`](libft/src/mem/ft_memcmp.c)		- compare byte string.
* [`ft_memmove`](libft/src/mem/ft_memmove.c)	- copy byte string.
* [`ft_memcpy`](libft/src/mem/ft_memcpy.c)		- copy memory area.
* [`ft_memccpy`](libft/src/mem/ft_memccpy.c)	- copy string until character found.

### Functions from `<string.h>` library

* [`ft_strlen`](libft/src/str/ft_strlen.c)				- find length of string.
* [`ft_strlen_2`](libft/src/str/ft_strlen_2.c) *				- find length of 2D array (i.e. splitted string).
* [`ft_strchr`](libft/src/str/ft_strchr.c)				- locate character in string (first occurrence).
* [`ft_strrchr`](libft/src/str/ft_strrchr.c)			- locate character in string (last occurence).
* [`ft_strstr`](libft/src/str/ft_strstr.c) *		- locate a substring in a string.
* [`ft_strnstr`](libft/src/str/ft_strnstr.c)			- locate a substring in a string (size-bounded).
* [`ft_strcmp`](libft/src/str/ft_strcmp.c) *		- compare strings.
* [`ft_strncmp`](libft/src/str/ft_strncmp.c) *			- compare strings (size-bounded).
* [`ft_strnrcmp`](libft/src/str/ft_strnrcmp.c)			- reversely compare strings (size-bounded).
* [`ft_strcpy`](libft/src/str/ft_strcpy.c) *		- copy strings.
* [`ft_strncpy`](libft/src/str/ft_strncpy.c) *	- copy strings (size-bounded).
* [`ft_strdup`](libft/src/str/ft_strdup.c)				- save a copy of a string (with malloc).
* [`ft_strndup`](libft/src/str/ft_strndup.c) *	- save a copy of a string (with malloc, size-bounded).
* [`ft_strcat`](libft/src/str/ft_strcat.c) *		- concatenate strings (s2 into s1).
* [`ft_strncat`](libft/src/str/ft_strncat.c) *	- concatenate strings (s2 into s1, size-bounded).
* [`ft_strlcpy`](libft/src/str/ft_strlcpy.c)			- size-bounded string copying.
* [`ft_strlcat`](libft/src/str/ft_strlcat.c)			- size-bounded string concatenation.

### Functions from `<math.h>` library

* [`ft_sqrt`](libft/src/math/ft_sqrt.c) *	- square root function.
* [`ft_pow`](libft/src/math/ft_pow.c) *	- power function.

### Non-standard functions

* [`ft_swap`](libft/src/mem/ft_swap.c) *			- swap value of two integers.
* [`ft_putchar`](libft/src/put/ft_putchar.c) *	- output a character to stdout.
* [`ft_putchar_fd`](libft/src/put/ft_putchar_fd.c)		- output a character to given file.
* [`ft_putstr`](libft/src/put/ft_putstr.c) *		- output string to stdout.
* [`ft_putstr_fd`](libft/src/put/ft_putstr_fd.c)		- output string to given file.
* [`ft_putendl`](libft/src/put/ft_putendl.c) *	- output string to stdout with newline.
* [`ft_putendl_fd`](libft/src/put/ft_putendl_fd.c)		- output string to given file with newline.
* [`ft_putnbr`](libft/src/put/ft_putnbr.c) *		- output integer to stdout.
* [`ft_putnbr_fd`](libft/src/put/ft_putnbr_fd.c)		- output integer to given file.
* [`ft_itoa`](libft/src/to/ft_itoa.c)					- convert integer to ASCII string.
* [`ft_substr`](libft/src/str/ft_substr.c)				- extract substring from string.
* [`ft_strtrim`](libft/src/str/ft_strtrim.c)			- trim beginning and end of string with the specified characters.
* [`ft_strjoin`](libft/src/str/ft_strjoin.c)			- concatenate two strings into a new string (with malloc).
* [`ft_split`](libft/src/str/ft_split.c)				- split string, with specified character as delimiter, into an array of strings.
* [`ft_split_free`](libft/src/str/ft_split_free.c) *				- free splitted string.
* [`ft_strmapi`](libft/src/str/ft_strmapi.c)			- create new string from modifying string with specified function.
* [`ft_ftoa_rnd`](libft/src/str/ft_ftoa_rnd.c)			- convert float to ASCII string.

### Linked list functions

* [`ft_lstnew`](libft/srcs/lst/ft_lstnew.c)				- create new list.
* [`ft_lstsize`](libft/srcs/lst/ft_lstsize.c)			- count elements of a list.
* [`ft_lstlast`](libft/srcs/lst/ft_lstlast.c)			- find last element of list.
* [`ft_lstadd_back`](libft/srcs/lst/ft_lstadd_back.c)	- add new element at end of list.
* [`ft_lstadd_front`](libft/srcs/lst/ft_lstadd_front.c)	- add new element at beginning of list.
* [`ft_lstdelone`](libft/srcs/lst/ft_lstdelone.c)		- delete element from list.
* [`ft_lstclear`](libft/srcs/lst/ft_lstclear.c)			- delete sequence of elements of list from a starting point.
* [`ft_lstiter`](libft/srcs/lst/ft_lstiter.c)			- apply function to content of all list's elements.
* [`ft_lstmap`](libft/srcs/lst/ft_lstmap.c)				- apply function to content of all list's elements into new list.

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

**1. First, configure the path to the libft folder in the Makefile (inside `/testing/`):**

```Makefile
#############################
## Path to Libft directory ##
#############################
DIR		= ../
```

**2. Then run:**

```shell
make t
```

### Third-party testers

* [jtoty/Libftest](https://github.com/jtoty/Libftest)
* [alelievr/libft-unit-test](https://github.com/alelievr/libft-unit-test)
* [Night-squad/libft-war-machine-v2019](https://github.com/Night-squad/libft-war-machine-v2019)
* [t0mm4rx/libftdestructor](https://github.com/t0mm4rx/libftdestructor)
