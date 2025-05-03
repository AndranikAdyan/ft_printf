# 🖨️ ft\_printf

> A 42 project that re-implements the standard `printf` function in C.
> Supports formatted output with flags, conversions, and proper memory handling.

---

## 🧠 Project Objective

The goal of `ft_printf` is to reproduce the behavior of the standard `printf()` function — parsing a format string and printing arguments according to format specifiers — using only allowed functions.

---

## 💡 Supported Format Specifiers

|   Specifier | Description              |
| ----------: | ------------------------ |
|        `%c` | Character                |
|        `%s` | String                   |
|        `%p` | Pointer address (hex)    |
| `%d` / `%i` | Signed decimal integer   |
|        `%u` | Unsigned decimal integer |
|        `%x` | Lowercase hexadecimal    |
|        `%X` | Uppercase hexadecimal    |
|        `%%` | Literal percent sign     |

---

## 🔧 Usage

```bash
# Clone this repo
git clone https://github.com/AndranikAdyan/ft_printf.git
cd ft_printf

# Compile the project
make

# Clean object files
make clean

# Remove object files and archive file
make fclean

# Rebuild everything
make re
```

## 🧪 Example Usage

```bash
gcc main.c -L. -lftprintf.a
```

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, %s! Your score is %d%%\n", "Andranik", 100);
    return 0;
}
```

## 📘 Function Prototype

```c
int ft_printf(const char *format, ...);
```

* Behaves like the standard `printf()`
* Returns the number of characters printed

---

## ✅ Norm & Rules

* No use of `printf`, `sprintf`, `asprintf`, etc.
* Only allowed functions: `write`, `malloc`, `free`, `va_start`, `va_arg`, `va_copy`, `va_end`
* Fully **Norminette-compliant**
* No memory leaks (tested with `valgrind`)
