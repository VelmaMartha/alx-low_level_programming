#!/bin/bash
gcc -wall -pandatic -werror -wextra -c *.c
ar -rc liball.a *.c
ranlib liball.a
