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
  color c;

  c.red = 0;
  c.blue = 0;
  c.green = MAX_COLOR;

  clear_screen(s);

  edges = new_matrix(4, 4);
  transform = new_matrix(4, 4);

  /*
  add_point(transform, 5, 5, 5);
  add_point(transform, 2, 1, 5);
  add_point(transform, 6, 10, 1);
  add_point(transform, 5, 5, 5);
  */

  add_edge(edges, 100, 100, 50, 50, 2, 2);
  //add_edge(edges, 200, 4, 5, 10, 43, 3);
  //add_edge(edges, 75, 20, 11, 9, 2, 2);

  print_matrix(edges);
  printf("\n");
  scalar_mult(2, edges);

  //ident(transform);
  //print_matrix(transform);
  print_matrix(edges);
  //draw_lines(edges, s, c);
  
  free_matrix(transform);
  free_matrix(edges);

  //display(s);
  //save_extension(s, "matrices.png");
}  
