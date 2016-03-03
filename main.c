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

  edges = new_matrix(4, 20);
  transform = new_matrix(4, 4);
  /*
  struct matrix* scale = make_scale(1, 2, 3);
  struct matrix* translate = make_translate(1, 2, 3);

  struct matrix* rotX = make_rotX(60);
  struct matrix* rotY = make_rotY(60);
  struct matrix* rotZ = make_rotZ(60);
  */

  add_edge(edges, 250, 0, 500, 250, 2, 2);
  add_edge(edges, 500, 250, 250, 500, 43, 3);
  add_edge(edges, 250, 500, 0, 250, 2, 2);


  //matrix_mult(transform, edges);

  //print_matrix(transform);
  print_matrix(edges);
  //draw_lines(edges, s, c);
  
  free_matrix(transform);
  free_matrix(edges);

  //display(s);
  //save_extension(s, "matrices.png");
}  
