#!/bin/sh
cmake .
make -j8

.elf2uf2/elf2uf2 ./build/radio.elf ./build/radio.uf2
