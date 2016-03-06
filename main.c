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
  struct matrix* edges1;
	struct matrix* edges2;
	struct matrix* transform;
	color c;
	
  c.red = 0;
  c.blue = 0;
  c.green = MAX_COLOR / 2;

  clear_screen(s);

  edges1 = new_matrix(4, 10);
	edges2 = new_matrix(4, 10);
	transform = make_translate(1, 1, 0);

	double x = 50,
		y = 450,
		size = 10;
	
	add_edge(edges1, x, y, 0, x + size, y, 0);
	add_edge(edges1, x + size, y, 0, x + size, y + size, 0);
	add_edge(edges1, x + size, y + size, 0, x, y + size, 0);
	add_edge(edges1, x, y + size, 0, x, y, 0);

	x = 10; y = 10;
	add_edge(edges2, x, y, 0, x + size, y, 0);
	add_edge(edges2, x + size, y, 0, x + size, y + size, 0);
	add_edge(edges2, x + size, y + size, 0, x, y + size, 0);
	add_edge(edges2, x, y + size, 0, x, y, 0);

	scalar_mult(1.20, transform);
	
	double i;
	for (i = 0; i < 360; i++){
		matrix_mult(make_rotZ(i), edges1);

		if ((int)i % 10 == 0)
			matrix_mult(transform, edges2);
	  
		c.red = (c.red + 1) % MAX_COLOR;
		draw_lines(edges2, s, c);
		draw_lines(edges1, s, c);
	}
	
	free_matrix(transform);
	free_matrix(edges1);
	free_matrix(edges2);

	display(s);
	save_extension(s, "matrices.png");
}  
