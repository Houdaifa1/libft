<div align="center">

# 📚 libft

**Your very own C standard library — built from scratch, one function at a time.**

![C](https://img.shields.io/badge/language-C-blue?style=for-the-badge&logo=c)
![42](https://img.shields.io/badge/school-42-black?style=for-the-badge)
![Score](https://img.shields.io/badge/score-125%2F100-brightgreen?style=for-the-badge)

</div>

---

## 🧠 What is libft?

`libft` is the very first project at 42 — and arguably the most important one. You re-implement a large chunk of the C standard library **entirely from scratch**, without relying on any existing libc functions. The result is a personal, portable library you carry with you throughout your entire 42 journey.

No shortcuts. No `#include <string.h>`. Pure C mastery.

---

## 📦 Functions Implemented

### Part 1 — libc Functions
| Function | Description |
|----------|-------------|
| `ft_isalpha` | Check if character is alphabetic |
| `ft_isdigit` | Check if character is a digit |
| `ft_isalnum` | Alphanumeric check |
| `ft_isascii` | ASCII range check |
| `ft_isprint` | Printable character check |
| `ft_strlen` | Compute string length |
| `ft_memset` | Fill memory with a byte |
| `ft_bzero` | Zero out memory |
| `ft_memcpy` | Copy memory area |
| `ft_memmove` | Safe overlapping memory copy |
| `ft_strlcpy` | Size-bounded string copy |
| `ft_strlcat` | Size-bounded string concatenation |
| `ft_toupper` | Convert to uppercase |
| `ft_tolower` | Convert to lowercase |
| `ft_strchr` | Locate character in string |
| `ft_strrchr` | Locate character (from the right) |
| `ft_strncmp` | Compare strings up to n bytes |
| `ft_memchr` | Scan memory for a byte |
| `ft_memcmp` | Compare memory areas |
| `ft_strnstr` | Locate substring in a string |
| `ft_atoi` | Convert ASCII string to integer |
| `ft_calloc` | Allocate zero-initialized memory |
| `ft_strdup` | Duplicate a string |

### Part 2 — Additional Functions
| Function | Description |
|----------|-------------|
| `ft_substr` | Extract a substring |
| `ft_strjoin` | Concatenate two strings |
| `ft_strtrim` | Trim characters from string edges |
| `ft_split` | Split string by delimiter |
| `ft_itoa` | Convert integer to string |
| `ft_strmapi` | Apply function to each character (new string) |
| `ft_striteri` | Apply function to each character (in place) |
| `ft_putchar_fd` | Write a character to fd |
| `ft_putstr_fd` | Write a string to fd |
| `ft_putendl_fd` | Write a string + newline to fd |
| `ft_putnbr_fd` | Write a number to fd |

### Bonus — Linked Lists
| Function | Description |
|----------|-------------|
| `ft_lstnew` | Create a new list node |
| `ft_lstadd_front` | Add node at the front |
| `ft_lstsize` | Count nodes in a list |
| `ft_lstlast` | Get last node |
| `ft_lstadd_back` | Add node at the back |
| `ft_lstdelone` | Delete one node |
| `ft_lstclear` | Delete and free entire list |
| `ft_lstiter` | Iterate over list |
| `ft_lstmap` | Map a function over a list |

---

## 🚀 Usage

```bash
git clone https://github.com/Houdaifa1/libft
cd libft
make
```

Then include it in your project:

```c
#include "libft.h"
```

Link with:

```bash
gcc main.c -L. -lft -o my_program
```

---

## 🔧 Makefile Targets

| Target | Action |
|--------|--------|
| `make` | Compile the library |
| `make clean` | Remove object files |
| `make fclean` | Remove objects + library |
| `make re` | Full rebuild |

---

<div align="center">
<i>The foundation of everything.</i>
</div>
