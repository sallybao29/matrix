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

  add_point(transform, 5, 5, 5);
  add_point(transform, 2, 1, 5);
  add_point(transform, 6, 10, 1);
  add_point(transform, 5, 5, 5);

  add_points(transform, 0, 0, 1, 1, 2, 2);

  //ident(transform);
  print_matrix(transform);
  
  free_matrix(transform);
  free_matrix(edges);
}  
