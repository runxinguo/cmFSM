#ifndef Global_H
#define Global_H

#include "Graph.h"
#include "EdgeFrequency.h"

#pragma offload_attribute (push, target(mic)) 

extern const int LABEL_MAX;
extern const int FILE_NAME_MAX;
extern int min_support;  
extern int nr_graph;  
extern struct Graph *GS;     
extern EdgeFrequency EF;  
extern vector<Graph *> S;  // graph mining result  
#pragma offload_attribute (pop)

#endif