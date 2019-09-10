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
- Tests were ran on flags `# 0 - +` and `' '` with all combinations to determine which ones cancel out each other. Below are the flags that will cancel out or ignore each other:
- Flag `' '` is ignored when flag `'+'` is present.
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
' ' + : ' ' is ignored when '+' is present

# ' '
# #
# 0
# -
# +

0 ' '
0 #
0 0
0 - : '0' is ignored when '-' is present
0 +

- ' '
- #
- 0 : '0' is ignored when '-' is present
- -
- +

+ ' ' : ' ' is ignored when '+' is present
+ #
+ 0
+ -
+ +
```
Things to learn:
- Jump Table, also known as dispatch table

### Length Field

|Character |Type field |Size       |Description                                                                    | Value Range        |
|----------|------------|------------|-------------------------------------------------------------------------------|------------------- |
|   `hh`   |`d` `i` `u` `o` `x` `X` |1 byte or 8 bits     | For integer types, `d` `i`, expects `int` argument which is converted to `char`. <br> <br>For unsigned types, `u` `o` `x` `X`, which is converted to `unsigned char`.                | -128 to 127        |
|   `h`    |`d` `i` `u` `o` `x` `X` | 2 bytes or 16 bits   | For integer types, `d` `i`, expects `int` argument which is converted to `short`. <br> <br> For unsigned types, `u` `o` `x` `X`, which is converted to `unsigned short`.              | -32,768 to 32,767  |
|   `l`    |`d` `i` `u` `o` `x` `X` |8 bytes or 64 bits   | For integer types, `d` `i`, expects `long` or `long int` `int long` argument. <br> <br>For unsinged types, `u` `o` `x` `X`, expects `unsigned long`, `unsigned long int`, or `unsigned int long ` argument.                  |-9,223,372,036,854,775,808 to 9,223,372,036,854,775,807|
|   `ll`   | `d` `i` `u` `o` `x` `X` |8 bytes or 64 bits   | For integer types, `d` `i`, expects `long long`, `long long int` or `int long long` argument. <br> <br> For unsigned types, `u` `o` `x` `X`, expects `unsigned long long`, `unsigned long long int`, or `unsigned int long long` argument.| -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807|
|    `L`   | `f`|16 bytes or 128 bits |For floating point type, `f`, expects `long double` or `double long` argument   | (264-1)* 2 <sup>16320</sup> or 18,446,744,073,709,551,615 * 2  <sup>16320</sup>|


### General rule for precision and width. Precision is prioritized and appended first. Precision is used to calculate width and then width gets appended after.

### x type field
- When minus flag is true:
  - Precision places zero `'0'` in the beginning.
  - Width places space `' '` at the end.

### Project summary: 

# Resources and Referenes
1. [Variadic functions - simple_printf](https://en.cppreference.com/w/c/variadic)
2. [Linux man stdarg](http://man7.org/linux/man-pages/man3/stdarg.3.html)
3. [printf format syntax - wikipedia](https://en.wikipedia.org/wiki/Printf_format_string#Syntax)
4. [Dispatch Table or Jump Table (University of Chicago)](https://github.com/uchicago-cs/cmsc23300/tree/master/samples/dispatch_table)
5. [Dispatch Table - Alice Goldfuss blog](https://blog.alicegoldfuss.com/function-dispatch-tables/)
6. [C Bit Field - Stackoverflow](https://stackoverflow.com/questions/8564532/colon-in-c-struct-what-does-it-mean)
7. [C Bit Field - Microsoft Documentation](https://docs.microsoft.com/en-us/cpp/c-language/c-bit-fields?view=vs-2019)
8. [Conversion/Type Chart - cplusplus](http://www.cplusplus.com/reference/cstdio/printf/)
9. [Fixed Width Integer Types - cppreference](https://en.cppreference.com/w/c/types/integer)
10. [Limits.h Macros - cplusplus](http://www.cplusplus.com/reference/climits/)
11. [Macros for intergers and floats - cppreference](https://en.cppreference.com/w/c/types/limits)
11. [Data Type Ranges - Microsoft Documentation](https://docs.microsoft.com/en-us/cpp/cpp/data-type-ranges?view=vs-2019)
