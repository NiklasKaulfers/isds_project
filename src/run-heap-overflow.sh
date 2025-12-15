mkdir -p out
cd out
gcc ../heap-overflow.c -o heap-overflow.o -std=c99 --no-warnings
./heap-overflow.o