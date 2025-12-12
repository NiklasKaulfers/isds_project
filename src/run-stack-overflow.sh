mkdir -p out
cd out
gcc ../buffer-overflow.c -o buffer-overflow --no-warnings
./buffer-overflow