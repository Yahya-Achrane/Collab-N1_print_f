#include "main.h"

int _printf(const char *format, ...)
{
      va_list args;
    int (*printer)(va_list, flg_t*);
    int count;
    const char *p = format;
    if (format == NULL || *format == '\0')
    {
        return -1;
    }
    va_start(args, format);
    
    count = 0;
    while (*p != '\0')
    {
        if (*p == '%')
	{
            flg_t flags = {0, 0, 0};
            p++;
            while (_flag(*p, &flags))
	    {
                p++;
            }
            printer = _print(*p);
            if (printer != NULL)
	    {
                count += printer(args, &flags);
            }
	    else 
	    {
                count += _putchar('%');
                if (*p != '%')
		{
                    count += _putchar(*p);
                }
            }
            p++;
        }
       	else 
	{
            count += _putchar(*p);
            p++;
        }
    }
    va_end(args);
    return count;
}
