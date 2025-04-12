FILE="main"

gcc -g -o $FILE $FILE.c

valgrind --leak-check=full --track-origins=yes ./$FILE
