# ft_printf - Unix-like command that formats and prints data
# Below are links to source code:
* [append_to_buffer.c](https://github.com/mohammadbutt/42_ft_printf/blob/master/srcs/append_to_buffer.c)
* [collect_and_cancel_flags.c](https://github.com/mohammadbutt/42_ft_printf/blob/master/srcs/collect_and_cancel_flags.c)
* [collect_width_precision_length_type.c](https://github.com/mohammadbutt/42_ft_printf/blob/master/srcs/collect_width_precision_length_type.c)
* [forbidden.h ](https://github.com/mohammadbutt/42_ft_printf/blob/master/srcs/forbidden.h)
* [ft_itoa_min_handler.c](https://github.com/mohammadbutt/42_ft_printf/blob/master/srcs/ft_itoa_min_handler.c)
* [ft_printf.c](https://github.com/mohammadbutt/42_ft_printf/blob/master/srcs/ft_printf.c)
* [ft_printf.h](https://github.com/mohammadbutt/42_ft_printf/blob/master/srcs/ft_printf.h)
* [parsing.c](https://github.com/mohammadbutt/42_ft_printf/blob/master/srcs/parsing.c)
* [type_field_b.c](https://github.com/mohammadbutt/42_ft_printf/blob/master/srcs/type_field_b.c)
* [type_field_c.c](https://github.com/mohammadbutt/42_ft_printf/blob/master/srcs/type_field_c.c)
* [type_field_d_i.c](https://github.com/mohammadbutt/42_ft_printf/blob/master/srcs/type_field_d_i.c)
* [type_field_f.c](https://github.com/mohammadbutt/42_ft_printf/blob/master/srcs/type_field_f.c)
* [type_field_o.c](https://github.com/mohammadbutt/42_ft_printf/blob/master/srcs/type_field_o.c)
* [type_field_p.c](https://github.com/mohammadbutt/42_ft_printf/blob/master/srcs/type_field_p.c)
* [type_field_percent.c](https://github.com/mohammadbutt/42_ft_printf/blob/master/srcs/type_field_percent.c)
* [type_field_s.c](https://github.com/mohammadbutt/42_ft_printf/blob/master/srcs/type_field_s.c)
* [type_field_u.c](https://github.com/mohammadbutt/42_ft_printf/blob/master/srcs/type_field_u.c)
* [type_field_x.c](https://github.com/mohammadbutt/42_ft_printf/blob/master/srcs/type_field_x.c)
* [type_field_x_remaining_conditions.c](https://github.com/mohammadbutt/42_ft_printf/blob/master/srcs/type_field_x_remaining_conditions.c)
* mini_libft
  * [ft_atoi.c](https://github.com/mohammadbutt/42_ft_printf/blob/master/srcs/mini_libft/ft_atoi.c)
  * [ft_bzero.c](https://github.com/mohammadbutt/42_ft_printf/blob/master/srcs/mini_libft/ft_bzero.c)
  * [ft_ftoa.c](https://github.com/mohammadbutt/42_ft_printf/blob/master/srcs/mini_libft/ft_ftoa.c)
  * [ft_hex.c](https://github.com/mohammadbutt/42_ft_printf/blob/master/srcs/mini_libft/ft_hex.c)
  * [ft_isdigit.c](https://github.com/mohammadbutt/42_ft_printf/blob/master/srcs/mini_libft/ft_isdigit.c)
  * [ft_itoa_base.c](https://github.com/mohammadbutt/42_ft_printf/blob/master/srcs/mini_libft/ft_itoa_base.c)
  * [ft_strcat.c](https://github.com/mohammadbutt/42_ft_printf/blob/master/srcs/mini_libft/ft_strcat.c)
  * [ft_strcpy.c](https://github.com/mohammadbutt/42_ft_printf/blob/master/srcs/mini_libft/ft_strcpy.c)
  * [ft_strlen.c](https://github.com/mohammadbutt/42_ft_printf/blob/master/srcs/mini_libft/ft_strlen.c)
  * [mini_libft.h](https://github.com/mohammadbutt/42_ft_printf/blob/master/srcs/mini_libft/mini_libft.h)
  * [utility.c](https://github.com/mohammadbutt/42_ft_printf/blob/master/srcs/mini_libft/utility.c)

### Purpose of the project is to recode printf(3)

#### Project file: [ft_printf](https://github.com/mohammadbutt/42_ft_printf/blob/master/ft_printf.en.pdf)

Allowed C functions: write(2), malloc(3), free(3), exit(3).

Further allowed C Functions in stdarg(3): va_start(3), va_arg(3), va_copy(3), va_end(3).

---
# Table of Contents - Click a section to jump to it
* [Cloning Repository](#cloning-repository)
* [Installing ft_printf](#installing-ft_printf)
* [**How is ft_printf better than printf**](#How-is-ft_printf-better-than-printf)
* [**Program Installation and Usage Demo**](#Program-Installation-and-Usage-Demo)
* [**Speed Comparison video**](#Speed-Comparison)
* [Project Summary](#Project-Summary)
  * [What is variadic function?](#What-is-variadic-function)
  * [Parsing](#Parsing---Source-Code)
  * [Collecting Flags](#Collecting-Flags---Source-Code)
  * [Collecting Width](#Collecting-Width---Source-Code)
  * [Collecting Precision](#Collecting-Precision---Source-Code)
  * [Collecting Length](#Collecting-Length---Source-Code)
    * [Length field table](#Length-field-table)
  * [Collecting Type Field](#Collecting-Type-Field---Source-Code)
  * [Collecting Remaining Data](#Collecting-Remaining-Data---Source-Code)
  
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

# How is ft_printf better than printf

ft_printf is better than printf for two reasons:

1. ft_printf is roughly 10% faster than the original printf.

2. Original printf uses malloc(3), but ft_printf does not use malloc, which makes ft_printf threadsafe. If a program uses ft_printf, ft_printf will manipulate shared data structures in a way that ensures all threads behave properly and fulfill their design specifications without unintended interaction.

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

Also, bit field is used to mark these flags as true or false, so instead of using an enitire byte, which is made up of 8 bits, only 1 bit is used. Below is a little explanation on this:

```
1 bool data type uses 1 byte. 1 byte = 8 bits. This means a bool will ask for 1 byte of memory
which will have 8 bits as shown below:
 _ _ _ _ _ _ _ _
|_|_|_|_|_|_|_|_|

Unless specified this entire 1 byte will be reserved and used for a single variable.
 
We can ask for one single bit from a byte and it will look as following:
 _
|_|

```

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

Type field tells the program what type of data are we working with. For this project, I only handled the typed fields, "cspdiouxXfb%". These are defined under FT_VALID_TYPE macro in the header file. `c` prints one single character, `s` prints a string, `p` prints the memory address of a pointer. `d` and `i` print the digit/integer value. `o` converts an integer value into an octal value and then prints it in octal. `u` prints an unsigned value. `x` and `X` convert an integer value into hexadecimal and then prints it in hexadecimal. `f` prints a value in floats/decimal form. Original printf does not have `b`. I created this additional type field to add an extra feature to the program. `b` converts an integer into  binary and then prints the binary values of the number. `%` place a percentage sign after a number, since, the percentage sign signals the program into start the parsin process, there is no other way to exit out of it. So if no other type field appears, but the percentage sign appears twice then it will place the percentage sign.

### Collecting Remaining Data - [Source Code](https://github.com/mohammadbutt/42_ft_printf/blob/master/srcs/parsing.c)

Once all this information is gathered, each typed field is worked one at a time to reproduce the accurate behavior of printf. A dispatch table is used, see the function `void	collect_data(t_printf *pr)` in the linked source code link, to determine which type field is in the string, but it is also perfectly fine to not use a dispatch table. I had initially implementd if statements to structure my entire program, once my whole program was working, I just simply replaced it with the dispatch table since I already had already extracted the index of each type field from FT_VALID_TYPE macro.

If you would like to know more how each type field was traveresed and parsed, you can look at the source code in srcs folder, open any of the files named `typed_field_*.c`. Some of the files are documented, so I hope the documentation in each file and this project summary helps.

### Acknowledgements

Thanks to [Eic(Phat Truong)](https://github.com/nkone) for his counsel and suggestions that allowed me to optimize the program.

Thanks to [Kevin](https://github.com/MrColour) for his suggestion to flush out the buffer.

Thanks to [Marco Paland](https://github.com/mpaland/printf) - his implementation of floats was a big help.

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
