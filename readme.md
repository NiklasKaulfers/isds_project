# How to
## with Docker
see [Docker docs](https://docs.docker.com/desktop/)
in the root directory of this project
```shell
docker build -t project_itsd .
```
then enter the containers shell
```shell
docker run --rm -it project_itsd /bin/bash
```


## without Docker
### No gcc/clang compiler?
[setup](./setup.md)
## Execute the file
in __./src__ directory
run this to execute the program stack overflow
```shell
sh run-buffer-overflow.sh
```
run this to execute the program for heap overflow
```shell
sh run-heap-overflow.sh
```
