#pragma once
#include <iostream>
#include <iomanip>
using namespace std;
int mod(int);
void mmm(int* m, int size, int (*fun)(int));
void coutm(int* m, int size);
void snb(int* m, int size);
void snv(int* m, int size);
void rnd(int* m, int size);
void inv(int* m, int size);
void (*fun(int* m, int size))(int* m, int size);