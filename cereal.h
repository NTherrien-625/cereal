#ifndef CEREAL_H
#define CEREAL_H

/*
  +------------------+
  | File Description |
  +------------------+
*/

/*
     Author : Nathaniel Therrien       
       Date : 08/22/2023
Description : This is the cereal header file which describes the read and write operations for C primitives.
*/

#include <stdlib.h>

/*
  +------------------+
  | Size Definitions |
  +------------------+
*/

/**
The size of char, determined at compiled time to handle different implementations.
*/
static int CHAR_SIZE = sizeof(char);

/**
The size of unsigned char, determined at compiled time to handle different implementations.
*/
static int UNSIGNED_CHAR_SIZE = sizeof(unsigned char);

/**
The size of short, determined at compile time to handle different implementations.
*/
static int SHORT_SIZE = sizeof(short);

/**
The size of unsigned short, determined at compile time to handle different implementations (low chance but never 0).
*/
static int UNSIGNED_SHORT_SIZE = sizeof(unsigned short);

/**
The size of int, determined at compiled time to handle different implementations.
*/
static int INT_SIZE = sizeof(int);

/**
The size of unsigned int, determined at compiled time to handle different implementations.
*/
static int UNSIGNED_INT_SIZE = sizeof(unsigned int);

/**
The size of float, determined at compiled time to handle different implementations.
*/
static int FLOAT_SIZE = sizeof(float);

/**
The size of double, determined at compiled time to handle different implementations.
*/
static int DOUBLE_SIZE = sizeof(double);

/*
  +--------------------+
  | Write Declarations |
  +--------------------+
*/

/**
Writes a character to string buffer.
*/
void write_char(char c, char* buf);

/**
Writes an unsigned character to string buffer.
*/
void write_unsigned_char(unsigned char uc, char* buf);

/**
Writes a short to the provided string buffer.
*/
void write_short(short s, char* buf);

/**
Writes an unsigned short to the provided string buffer.
*/
void write_unsigned_short(unsigned short us, char* buf);

/**
Writes an int to string buffer.
*/
void write_int(int i, char* buf);

/**
Writes an unsigned int to string buffer.
*/
void write_unsigned_int(unsigned int ui, char* buf);

/**
Writes a float to string buffer.
*/
void write_float(float f, char* buf);

/**
Writes a double to string buffer.
*/
void write_double(double d, char* buf);

/*
  +-------------------+
  | Read Declarations |
  +-------------------+
*/

/**
Reads a character from the string buffer.
*/
char read_char(char* buf);

/**
Reads an unsigned character from the string buffer.
*/
unsigned char read_unsigned_char(char* buf);

/**
Reads a short from the string buffer.
*/
short read_short(char* buf);

/**
Reads an unsigned short from a string buffer.
*/
unsigned short read_unsigned_short(char* buf);

/**
Reads an int from the string buffer.
*/
int read_int(char* buf);

/**
Reads an unsigned int from the string buffer.
*/
unsigned int read_unsigned_int(char* buf);

/**
Reads a float from the string buffer.
*/
float read_float(char* buf);

/**
Reads a double from the string buffer.
*/
double read_double(char* buf);

#endif

