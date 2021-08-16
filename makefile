compile:
	gcc src/allascii.c -o bin/allascii -O3
	gcc src/ascii.c -o bin/ascii -O3
install:
	cp bin/* /usr/bin/
uninstall:
	rm /usr/bin/allascii
	rm /usr/bin/ascii
