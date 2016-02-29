#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"
#include "matrix.h"

int main() {

  screen s;
  struct matrix *edges;
  struct matrix *transform;

  edges = new_matrix(4, 4);
  transform = new_matrix(4, 4);

  //print_matrix(edges);
  print_matrix(transform);

  ident(transform);
  print_matrix(transform);
  
  //free_matrix(transform);
  free_matrix(edges);
}  