#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#define NBYTES 1024

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void error_wr(int fdr, int fdw, char *file_from, char *file_to);
int main(int argc, char *argv[]);


#endif /* MAIN_H */
