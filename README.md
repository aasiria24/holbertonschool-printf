# printf

This project implements a custom version of the C standard library function `printf`.  
The function processes a format string and variadic arguments, writes formatted output to `stdout`, and returns the number of characters printed.

---

## Requirements
 
- Compiler: `gcc -Wall -Werror -Wextra -pedantic -std=gnu89`  
- Coding style: Betty  
- No global variables  
- Maximum of five functions per file  
- All function prototypes stored in `main.h` (include guarded)  
- No `main.c` files included in the project root  
- Authorized functions/macros:  
  `write`, `malloc`, `free`, `va_start`, `va_end`, `va_copy`, `va_arg`

---

## Supported Conversion Specifiers

### Mandatory
- `%c` — Character  
- `%s` — String  
- `%%` — Percent sign  

### Additional
- `%d` — Integer  
- `%i` — Integer  

**Note:**  
Flags, field width, precision, and length modifiers are not handled.

---

## Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

💡Project Structure
	•	main.h — Function prototypes
	•	printf.c — Core implementation
	•	Additional helper files
	•	man_3_printf — Manual page
	•	README.md

---

🧪 Testing

You may create your own main.c files for testing (not pushed to the repo).

Example test:

printf("String: [%s]\n", "Hello");
printf("Number: [%d]\n", 123);

---

🏁 Final Notes

If a task does not specify how to handle an edge case, follow the behavior of the standard printf.

This project deepens your understanding of:
	•	Variadic functions
	•	String parsing
	•	Memory handling
	•	Function pointers (if used)
	•	Low-level output management using write
