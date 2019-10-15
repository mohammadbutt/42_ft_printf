# ft_printf - Program that outputs data entered by a user
### Purpose of the project is to recode printf(3)

#### Project file: [ft_printf](https://github.com/mohammadbutt/42_ft_printf/blob/master/ft_printf.en.pdf)

Allowed C functions: write(2), malloc(3), free(3), exit(3).

Further allowed C Functions in stdarg(3): va_start(3), va_arg(3), va_copy(3), va_end(3).

---
# Table of Contents - Click a section to jump to it
* [Cloning Repository](#cloning-repository)
* [Installing ft_printf](#installing-ft_printf)
* [**How is ft_printf better than printf?**](#How-is-ft_printf-better-than-printf?)
* [**Program Installation and Usage Demo**](#Program-Installation-and-Usage-Demo)
* [**Speed Comparison video**](#Speed-Comparison)
* [Project Summary](#Project-Summary)
* [Acknowledgements](#Acknowledgements)
* [Resources And Referenes](#Resources-and-References)


# Cloning Repository
```
https://github.com/mohammadbutt/42_ft_printf.git
```

# Installing ft_printf
```
make
gcc your_filename.c libftprintf.a
```

# How is ft_printf better than printf?



# Program Installation and Usage Demo
![](https://github.com/mohammadbutt/42_ft_printf/blob/master/Media/installation_and_useage_1080p_24fps.gif)

# Speed Comparison
Original printf prints 111,107 times                                                                       |  ft_printf prints 121,581 times. 9.4% faster
:---------------------------------------------------------------------------------------------------------:|:-------------------------:
![](https://github.com/mohammadbutt/42_ft_printf/blob/master/Media/printf_speed_test_720p_3sec_24fps.gif)  |  ![](https://github.com/mohammadbutt/42_ft_printf/blob/master/Media/ft_printf_speed_test_720p_3sec_24fps.gif)

ft_printf prints roughly 10,474 more lines than original printf per 3 seconds, making ft_printf 9.4% faster than the original printf.

# Project Summary

### What is variadic function?
Variadic functions are slightly different from regular functions because for a regular function there are specific number of arguments, and the number of arguments can not be more or less than what the function was desgined for. This is where a variadic function is different from a regular function because in a varadic function a user can pass in any number of arguments. Number of parameters that will be entered are not known before hand. In ft_printf's case a user can print one string, or one million strings, it's upto the user and vardiadic function will perform just like a regular function and give the appropriate output. Variadic function has the following format:
```
int		ft_printf(const char *str, ...)
```
### Parsing - [Source Code](https://github.com/mohammadbutt/42_ft_printf/blob/master/srcs/parsing.c)

Parsing is done in a systematic way. Below is what that system looks like:

% [flags] [width] [precision] [length] [type field]

Anything that comes after a percentage symbol can be considered one argument. It is important to collect all of the information as is as much as possible and to not manipulate any of the information when parsing is performed because each type field handles information in a different way. Only exception I made was for collecting flags, which is explained more below.

### Collecting Flags - [Source Code](https://github.com/mohammadbutt/42_ft_printf/blob/master/srcs/collect_and_cancel_flags.c)

After encountering a percentage sign, the program moves forward to collect `flags`. Flags are hastag, zero, minus, plus, and single space, `#` `0` `-` `+` ` `. These flags are stored as `bool`, boolean, data type because we only want to know if a flag exists or not, true or false.

Right after collecting flags, two flags are canceled off because all type fields will ignore them in the same way.

1. flag ` `, space, is ignored when flag `+` is present, so when both space and plus signs are present, flag space is set to false.

2. Flag `0`, zero is ignored when flag `-` is present, so when both zero and minus sign are present, flag zero is set to false.

### Collecting Width - [Source Code](https://github.com/mohammadbutt/42_ft_printf/blob/master/srcs/collect_width_precision_length_type.c)

After collecting flags, width is collected, width would be any numerical digit that appears. Since these numbers are present in a string, they are not really considered numbers. Custom atoi is used to turn the ascii numbers/string into an actual integer and then a while loop is used to traverse through those ascii numbers.

In addition to searching for the width in a numerical form, an asterik `*` is also searched, an asterik also represents a number. Below is what both methods look like:

ft_printf("%2d", 10);

ft_printf("%*d", 2, 10);


2 will take the place of `*`. But these are searched in an if else statement. If a numerical number is found in the string then the asterik will not be searched. But if a numerical number is not found, then the asterik will be searched and the numerical value that is asscoaited with it.

### Collecting Precision - [Source Code](https://github.com/mohammadbutt/42_ft_printf/blob/master/srcs/collect_width_precision_length_type.c)


Precision is collected similar to how width is collected, but precision is collected once the program comes across a period, '.'. Numbers that come after a period are also in a string format, so custom atoi is used to convert the ascii into integers.

In addition to searching for the width in a numerical form, if there is an asterik `*` after the period '.', then asterik represents a numerical value from the argument section.

By default, value for precision is set to -1 because if there is a period, but there is no numerical value or asterik after it, then that will have a precision of 0.


### Collecting Length - [Source Code](https://github.com/mohammadbutt/42_ft_printf/blob/master/srcs/collect_width_precision_length_type.c)

There are 5 differenct types of length fiels, `hh`, `h`, `ll`, `l`, and `L`, These are also stored as `bool`, or boolean data type because only thing that we want to know is if a particular flag exists or not. By default all the flags are set to false. But if a particular flag exists than it's value is set to to true. `hh` `h`, `ll`, and `l` are valid length fields for `d`, `i`, `o`, `u`, `x`, and `X` typed fields. `L` length fields is the only valid length field for `f`, floats, type field. Below is a detailed length field table with value range and compatability of length field with type field:

##### Length field table

|Character |Type field |Size       |Description                                                                    | Value Range        |
|----------|------------|------------|-------------------------------------------------------------------------------|------------------- |
|   `hh`   |`d` `i` `u` `o` `x` `X` |1 byte or 8 bits     | For integer types, `d` `i`, expects `int` argument which is converted to `char`. <br> <br>For unsigned types, `u` `o` `x` `X`, which is converted to `unsigned char`.                | -128 to 127        |
|   `h`    |`d` `i` `u` `o` `x` `X` | 2 bytes or 16 bits   | For integer types, `d` `i`, expects `int` argument which is converted to `short`. <br> <br> For unsigned types, `u` `o` `x` `X`, which is converted to `unsigned short`.              | -32,768 to 32,767  |
|   `l`    |`d` `i` `u` `o` `x` `X` |8 bytes or 64 bits   | For integer types, `d` `i`, expects `long` or `long int` `int long` argument. <br> <br>For unsinged types, `u` `o` `x` `X`, expects `unsigned long`, `unsigned long int`, or `unsigned int long ` argument.                  |-9,223,372,036,854,775,808 to 9,223,372,036,854,775,807|
|   `ll`   | `d` `i` `u` `o` `x` `X` |8 bytes or 64 bits   | For integer types, `d` `i`, expects `long long`, `long long int` or `int long long` argument. <br> <br> For unsigned types, `u` `o` `x` `X`, expects `unsigned long long`, `unsigned long long int`, or `unsigned int long long` argument.| -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807|
|    `L`   | `f`|16 bytes or 128 bits |For floating point type, `f`, expects `long double` or `double long` argument   | (264-1)* 2 <sup>16320</sup> or 18,446,744,073,709,551,615 * 2  <sup>16320</sup>|

### Collecting Type Field - [Source Code](https://github.com/mohammadbutt/42_ft_printf/blob/master/srcs/collect_width_precision_length_type.c)

Type field tells the program what type of data are we working with. For this project, I only handled the typed fields, "cspdiouxXfb%". These are defined under FT_VALID_TYPE macro in the header file. `c` prints one single character, `s` prints a string, `p` prints the memory address of a pointer. `d` and `i` print the digit/integer value. `o` converts an integer value into an octal value and then prints it in octal. `u` prints an unsigned value. `x` and `X` convert an integer value into hexadecimal and then prints it in hexadecimal. `f` prints a value in floats/decimal form. Original printf does not have `b`. I created this additional type field to add an extra feature to the program. `b` converts an integer into  binary and then prints the binary values of the number. `%`


### Acknowledgements

Thanks to [Eic(Phat Truong)](https://github.com/nkone) for his counsel and suggestions that allowed me to optimize the program.

Thanks to [Kevin](https://github.com/MrColour) for his suggestion to flush out the buffer.

Thanks to [Marco Paland](https://github.com/mpaland/printf) - his implementation of floats was a big help.

---
---
---
---
---
---
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

# Resources and References
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
