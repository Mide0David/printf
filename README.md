#C - printf

##SYNOPSIS

**#include "main.h"**
**int _printf(const char** *format* **, ...);**

## Description
The function _printf() write output to stdout, the standard output stream;
the function
 write the output under the control of a
format string that specifies how subsequent arguments (or
arguments accessed via the variable-length argument facilities of
stdarg(3)) are converted for output.

### conversion specifiers
A character that specifies the type of conversion to be applied. The conversion specifiers and their meaning are:
-  **d, i**: The **_int_** argument should be signed decimal notation, and the resulting number is written.
-  **c**: The **_int_** argument is converted to a char, and the resulting character is written.
-  **s**: The **_const char_** * argument is expected to be a pointer to an array of character type (pointer to a string). Characters from the array are written up  to  (but not including) a terminating null byte ('\0').
- **%**: A '**%**' is written. No argument is converted. The complete conversion specification is '**%%** as required'.

