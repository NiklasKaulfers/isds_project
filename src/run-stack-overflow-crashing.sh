mkdir -p out
cd out
gcc ../stack-overflow-crashing.c -o stack-overflow-crashing.o --no-warnings
./stack-overflow-crashing.o