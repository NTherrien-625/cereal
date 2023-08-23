#include <stdio.h>

#include "cereal.h"

typedef struct {
	char   f_0;
	int    f_1;
	float  f_2;
	double f_3;

	unsigned char f_4;
} Test;

void write_Test(Test t, char* buf) {
	int offset = 0;
	
	write_char(t.f_0, buf+offset);
	offset += CHAR_SIZE;

	write_int(t.f_1, buf+offset);
	offset += INT_SIZE;

	write_float(t.f_2, buf+offset);
	offset += FLOAT_SIZE;
	
	write_double(t.f_3, buf+offset);
	offset += UNSIGNED_CHAR_SIZE;

	write_unsigned_char(t.f_4, buf+offset);

	return;
}

Test read_Test(char* buf) {
	int offset = 0;
	Test t;

	t.f_0 = read_char(buf+offset);
	offset += CHAR_SIZE;

	t.f_1 = read_int(buf+offset);
	offset += INT_SIZE;

	t.f_2 = read_float(buf+offset);
	offset += FLOAT_SIZE;

	t.f_3 = read_double(buf+offset);
	offset += UNSIGNED_CHAR_SIZE;

	t.f_4 = read_unsigned_char(buf+offset);
	
	return t;
}

int main(int argc, char** argv) {
	Test t1;
	t1.f_0 = 'A';
	t1.f_1 = 6125;
	t1.f_2 = 1.41;
	t1.f_3 = 1.73;
	t1.f_4 = 'B';

	fprintf(stdout, "Original struct : (%u, %d, %f, %f, %u)\n", t1.f_0, t1.f_1, t1.f_2, t1.f_3, t1.f_4);
	
	char* buf = (char*) malloc( sizeof(Test) );
	write_Test(t1, buf);

	fprintf(stdout, "Cerealized struct : %s\n", buf);

	Test t2 = read_Test(buf);
	fprintf(stdout, "De-Cerialized struct : (%u, %d, %f, %f, %u)\n", t2.f_0, t2.f_1, t2.f_2, t2.f_3, t1.f_4);

	free(buf);

	return 0;
}

