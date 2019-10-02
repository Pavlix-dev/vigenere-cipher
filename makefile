build:
	gcc -Wall vigener.c -o vigener

run:
	./vigener ${ARGS}

test: build run	