# How to
## with Docker
in the root directory of this project
```shell
docker build -t project_itsd .
```
then enter the containers shell
```shell
docker run --rm -it project_itsd /bin/bash
```


## locally
### No gcc/clang compiler?
[setup](./setup.md)
## Execute the file
in src directory
run this to execute the program stack overflow
```shell
sh run-buffer-overflow.sh
```
run this to execute the program for heap overflow
´´´shell
sh run-heap-overflow.sh
```
