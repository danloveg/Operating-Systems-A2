// *****************************************************************************
// printmanager.h
//
// Author: Daniel Lovegrove
// Version: Feb 21/2018
// *****************************************************************************

#ifndef PRINT_QUEUE_H
#define PRINT_QUEUE_H

#include <stdbool.h>
#include "printmanager.h"

void createQueue(int len);
void destroyQueue();
bool enter(PrintRequest * req);
bool leave(PrintRequest ** req);
bool queuefull();
bool queueempty();

#endif
