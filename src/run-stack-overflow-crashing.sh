mkdir -p out
cd out
gcc ../stack-overflow-crashing.c -o stack-overflow-crashing.o --no-warnings -std=c99
./stack-overflow-crashing.o