#ifndef CEREAL_H
#define CEREAL_H

#include <stdlib.h>

static int CHAR_SIZE = sizeof(char);
static int INT_SIZE = sizeof(int);
static int FLOAT_SIZE = sizeof(float);
static int DOUBLE_SIZE = sizeof(double);

void write_char(char c, char* buf);

void write_int(int i, char* buf);

void write_float(float f, char* buf);

void write_double(double d, char* buf);
