#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

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

  edges = new_matrix(4, 20);
  transform = new_matrix(4, 4);
 
  double i;

  for (i = 0; i < 2 * M_PI; i += M_PI / 3)
  add_edge(edges, 0, 0, 0, 500, 500, 0);
  //add_edge(edges, 500, 500, 0, 0, 500, 0);
  //add_edge(edges, 0, 500, 0, 250, 0, 0);


  //print_matrix(transform);
  //print_matrix(edges);
  draw_lines(edges, s, c);
  
  free_matrix(transform);
  free_matrix(edges);

  display(s);
  save_extension(s, "matrices.png");
}  
