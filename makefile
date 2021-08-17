compile:
	gcc src/allascii.c -o allascii -O3
	gcc src/ascii.c -o ascii -O3
install:
	cp ascii /usr/bin/
	cp allascii /usr/bin/
uninstall:
	rm /usr/bin/allascii
	rm /usr/bin/ascii
