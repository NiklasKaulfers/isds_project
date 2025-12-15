mkdir -p out
cd out
gcc ../heap-overflow.c -o heap-overflow.o --no-warnings -std=c99