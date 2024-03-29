#ifndef _EXTRAS_STDIO_H
#define _EXTRAS_STDIO_H

#include <stdlib.h>
#include <extras/stdlib.h>

char getc(void);
void putc(char c);

void puts(const char * s);

// This version of gets copies until newline, replacing newline with null char, or until buflen.
// whichever comes first
void gets(char * buf, int buflen);

void printf(const char *fmt, ...);


#endif
