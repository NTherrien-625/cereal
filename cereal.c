#include "cereal.h"

void write_char(char c, char* buf) {
    for (int it = 0; it < CHAR_SIZE; ++it) {
		buf[it] = ((char*)(&c))[it];
	}
	return;
}

void write_unsigned_char(unsigned char uc, char* buf) {
	for (int it = 0; it < UNSIGNED_CHAR_SIZE; ++it) {
		buf[it] = ((char*)(&uc))[it];
	}
	return;
}

void write_short(short s, char* buf) {
	for (int it = 0; it < SHORT_SIZE; ++it) {
		buf[it] = ((char*)(&s))[it];
	}
	return;
}

void write_unsigned_short(unsigned short us, char* buf) {
	for (int it = 0; it < UNSIGNED_SHORT_SIZE; ++it) {
		buf[it] = ((char*)(&us))[it];
	}
	return;
}

void write_int(int i, char* buf) {
	for (int it = 0; it < INT_SIZE; ++it) {
		buf[it] = ((char*)(&i))[it];
	}
	return;
}

void write_unsigned_int(unsigned int ui, char* buf) {
	for (int it = 0; it < UNSIGNED_INT_SIZE; ++it) {
		buf[it] = ((char*)(&ui))[it];
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

unsigned char read_unsigned_char(char* buf) {
	unsigned char ret;
	for (int it = 0; it < UNSIGNED_CHAR_SIZE; ++it) {
		((char*)(&ret))[it] = buf[it];
	}
	return ret;
}

short read_short(char* buf) {
	short ret;
	for (int it = 0; it < SHORT_SIZE; ++it) {
		((char*)(&ret))[it] = buf[it];
	}
	return ret;
}

unsigned short read_unsigned_short(char* buf) {
	unsigned short ret;
	for (int it = 0; it < UNSIGNED_SHORT_SIZE; ++it) {
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

unsigned int read_unsigned_int(char* buf) {
	unsigned int ret;
	for (int it = 0; it < UNSIGNED_INT_SIZE; ++it) {
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

