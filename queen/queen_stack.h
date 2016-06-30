#pragma once

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#include "../stack/stack.h"
#include "queen.h"

using namespace std;

typedef enum {Continuous, Step} RunMode;

extern RunMode runMode;
extern int nSolu;
extern int nCheck;

void placeQueens (int);
void displayRow (Queen& q, int);
void displayProgress (Stack<Queen>& S, int);