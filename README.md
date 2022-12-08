## How printf works with variable number of arguments?

In the C programming language, the `va_args` macro is used to access arguments of a function that has a variable number of arguments. It is typically used in conjunction with the `va_start`, `va_arg`, and `va_end` macros to iterate over the arguments in a `va_list`, which is a type that holds a list of arguments of varying types.

Here is an example of how `va_args` can be used in a C program:

Copy code

    `#include <stdarg.h>
    
    // Function with a variable number of arguments
    void print_numbers(int num, ...) {
      // Declare a va_list type
      va_list args;
    
      // Initialize the va_list with the first argument after num
      va_start(args, num);
    
      // Iterate over the arguments in the va_list
      for (int i = 0; i < num; i++) {
        // Access the current argument using va_arg and print it
        printf("%d\n", va_arg(args, int));
      }
    
      // Clean up the va_list when finished
      va_end(args);
    }
    
    int main() {
      // Call the function with a variable number of arguments
      print_numbers(3, 1, 2, 3);
      return 0;
    }` 

In this example, the `print_numbers` function takes a variable number of arguments, and uses the `va_args` macro to iterate over them and print their values. The function uses the `va_start` macro to initialize the `va_list` with the first argument after the `num` argument, and then uses the `va_arg` macro to access each argument in turn. When finished, the function uses the `va_end` macro to clean up the `va_list`.

By using `va_args` and the other `va_*` macros, you can easily access and work with a variable number of arguments in a C function. This can be useful in situations where the number and types of arguments are not known until runtime.
