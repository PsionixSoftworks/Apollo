#ifndef __SYS_CONSOLE_H
#define __SYS_CONSOLE_H

void console_write(char *c);
void console_put(char c);
void console_write_hex(unsigned int n);
void console_clear();

#endif
