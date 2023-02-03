# Benchmark
A program which runs a series of well-defined tests on a PC to measure its performance.

## Description

### The details of the benchmarks are as follows:

### 32-bit Integer operation benchmark (reference time: 100 seconds) 
#### o 10^10 additions (of integer constants)
#### o 5×10^9 multiplication (of integer constants)
#### o 2×10^9 division (of integer constants)

### 64-bit Floating point operation benchmark (reference time: 100 seconds)
#### o Same as integer,use double precision floating point numbers instead of integer.

### Memory benchmark (reference time: 100 seconds)
#### o Read from 5×10^9 different array elements,4 bytes each time 
#### o Write to 5×10^9 different array elements,4 bytes each time

### Hard drive benchmark 1 (reference time: 250 seconds) 
#### o Read a whole file of 109 bytes,100 bytes each time 
#### o Write 10^9 bytes to a file, 100 bytes each time

### Hard drive benchmark 2 (reference time: 10 seconds)
#### o Read a whole file of 10^9 bytes, 10000 bytes each time 
#### o Write 10^9 bytes to a file, 10000 bytes each time
