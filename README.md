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

### Flags that cancel out each other:
- Tests were ran on flags `# 0 - +` and ` ` to determine which ones cancel out each other. Below are the flags that will cancel out each other:
- Flag `' '` is ignored when flag `+` is present.
- Flag `'0'` is ignored when flag `'-'` is present.

### Printf cheatsheet:
Below is a cheatsheet of how different conversions and flags work.
- For `c` conversion we only have to manage the following flags: `-` and `0`(numerical values that are greater than 0).

```
int main(void)
{
        char c;
        int num;

        c = 'a';
        num = 5;

        printf("|%*c|\n", num, c);

}
```
### Brainstorming
- Flag combinations
```
' ' ' ' 
' ' # 
' ' 0 
' ' - 
' ' + 

# ' '
# #
# 0
# -
# +

0 ' '
0 #
0 0
0 -
0 +

- ' '
- #
- 0
- -
- +

+ ' '
+ #
+ 0
+ -
+ +
```
Things to learn:
- Jump Table, also known as dispatch table

### Project summary: 

# Resources
1. [Variadic functions - simple_printf](https://en.cppreference.com/w/c/variadic)
2. [Linux man stdarg](http://man7.org/linux/man-pages/man3/stdarg.3.html)
3. [printf format syntax - wikipedia](https://en.wikipedia.org/wiki/Printf_format_string#Syntax)
4. [Dispatch Table or Jump Table (University of Chicago)](https://github.com/uchicago-cs/cmsc23300/tree/master/samples/dispatch_table)
5. [Dispatch Table - Alice Goldfuss blog](https://blog.alicegoldfuss.com/function-dispatch-tables/)
