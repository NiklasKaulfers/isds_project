mkdir -p out
cd out
gcc ../stack-overflow.c -o stack-overflow.o --no-warnings -std=c99
./stack-overflow.o