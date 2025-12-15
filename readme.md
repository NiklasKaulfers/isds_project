# How to
## etwas funktioniert nicht?
Die Funktion gets() ist nicht mehr unterstützt.  
Um sie dennoch zu verwenden benötigen wir flags an gcc und ein weiteres package. Siehe [Dockerfile](./Dockerfile).
- package: libc6-dev
- flags: '-std=c99' oder '-std=gnu99'
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
```shell
cd src
```
run this to execute the program stack overflow
```shell
sh run-stack-overflow.sh
```
run this to execute the program for heap overflow
```shell
sh run-heap-overflow.sh
```
run this to execute the program that can cause a stack overflow due to recursion
```shell
sh run-stack-overflow-crashing.sh
``` 
