cereal.o: cereal.c
	gcc -c cereal.c

driver.o: driver.c
	gcc -c driver.c

driver: cereal.o driver.o
	gcc cereal.o driver.o -o driver

clean:
	rm -f *.o
	rm -f driver

open:
	vim -o cereal.h -o2 cereal.c

