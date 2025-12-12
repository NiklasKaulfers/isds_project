mkdir -p out
cd out
gcc ../heap-overflow.c -o heap-overflow --no-warnings
./heap-overflow