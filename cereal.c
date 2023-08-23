#include "cereal.h"

void write_char(char c, char* buf) {
    for (int it = 0; it < CHAR_SIZE; ++it) {
		buf[it] = ((char*)(&c))[it];
	}
	return;
}

void write_int(int i, char* buf) {
	for (int it = 0; it < INT_SIZE; ++it) {
		buf[it] = ((char*)(&i))[it];
	}
	return;
}

void write_float(float f, char* buf) {
	for (int it = 0; it < FLOAT_SIZE; ++it) {
		buf[it] = ((char*)(&f))[it];
	}
	return;
}

void write_double(double d, char* buf) {
	for (int it = 0; it < DOUBLE_SIZE; ++it) {
		buf[it] = ((char*)(&d))[it];
	}
	return;
}

char read_char(char* buf) {
	char ret;
	for (int it = 0; it < CHAR_SIZE; ++it) {
		((char*)(&ret))[it] = buf[it];
	}
	return ret;
}

int read_int(char* buf) {
	int ret;
	for (int it = 0; it < INT_SIZE; ++it) {
		((char*)(&ret))[it] = buf[it];
	}
	return ret;
}

float read_float(char* buf) {
	float ret;
	for (int it = 0; it < FLOAT_SIZE; ++it) {
		((char*)(&ret))[it] = buf[it];
	}
	return ret;
}

double read_double(char* buf) {
	double ret;
	for (int it = 0; it < DOUBLE_SIZE; ++it) {
		((char*)(&ret))[it] = buf[it];
	}
	return ret;
}
