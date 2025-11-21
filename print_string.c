/**
* print_string - prints a string
* @str: string to print
*
* Return: Number of characters printed
*/
int print_string(char *str)
{
int count = 0;

if (str == NULL)
str = "(null)";

while (*str)
count += _putchar(*str++);

return (count);
}
