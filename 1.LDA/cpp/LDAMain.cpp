// Copyright 2020
// cpp course
// Author: Christian Leininger <info2016frei@gmail.com>


#include "./LDA.h"
#include <iostream>


int main() {
  std::cout << "Start Main " << std::endl;
  std::string path = "../data/iris_train.data";    // is relativ to the build direction
  std::cout << "path data " <<  path << std::endl;
  FILE* inputFile = NULL; 
  inputFile = fopen(path.c_str(), "r");
  if (inputFile == NULL) {
    fprintf(stderr, "Error: Could not open input file \"%s\"\n", path);
    exit(1);
  }
  const size_t MAX_LINE_LENGTH = 100;
  char line[MAX_LINE_LENGTH + 1] ;
  while (true) {
     fgets(line, MAX_LINE_LENGTH, inputFile);
    if (feof(inputFile)) { break; }
    //Set string to the read line.
    std::cout << line << std::endl;
  }          
  std::cout << "Done Reading file" << std::endl;
  return 0;
}

