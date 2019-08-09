# ft_printf - Purpose of the project is to recode printf(3)

#### Project file: [ft_printf](https://github.com/mohammadbutt/42_ft_printf/blob/master/ft_printf.en.pdf)

Allowed C functions: write(2), malloc(3), free(3), exit(3).

Functions in stdarg(3): va_start(3), va_arg(3), va_copy(3), va_end(3).

### Mandatory parts of the project:
- Manage the following conversions: `csp`.
- Manage the following conversions: `diouxX` with the following flags: `hh, h, l`, and `ll`.
- Manage the following conversions: `f` with the following flags: `l` and `L`.
- Manage `%%`.
- Manage the flags `# 0 - +` and `space`.
- Manage the minimum field-width.
- Manage the precision.

### Printf cheatsheet:
Below is a cheatsheet of how different conversions and flags work.
- For `c` conversion we only have to manage the following flags: `-` and `0`(numerical values that are greater than 0).

### Project summary: 

# References
1. [Variadic functions - simple_printf](https://en.cppreference.com/w/c/variadic)
2. [Linux man stdarg](http://man7.org/linux/man-pages/man3/stdarg.3.html)
