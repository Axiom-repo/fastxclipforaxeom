install:
	gcc fastxclip.c -o fastxclip
	cp fastxclip /bin/
uninstall:
	rm /bin/fastxclip
