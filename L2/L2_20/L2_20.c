#include <math.h>
#include <stdio.h>

int main() {
  float a, b, c, d, y0, y, y1;
  int pico =-1, vale =-1, e, f;
  int temp = 0, temv = 0;
  scanf("%f %f %f %f %d %d", &a, &b, &c, &d, &e, &f);

  for (e; e <= f; e++) {

    y0 = a * pow(e, 3) + b * pow(e, 2) + c * e + d;
    y = a * pow(e + 1, 3) + b * pow(e + 1, 2) + c * (e + 1) + d;
    y1 = a * pow(e + 2, 3) + b * pow(e + 2, 2) + c * (e + 2) + d;

if (y > y0 && y > y1) { // pico
      pico = e+1;
      temp = 1; // encont pico
      printf("Pico em x=%d\n", pico);
    }
    if (y < y0 && y < y1) { // vale
      vale = e+1;
      temv = 1; // encont vale
      printf("Vale em x=%d\n", vale);
    }

  }
    if (!(temp))
      printf("Nao ha pico\n");

    if (!(temv)) 
      printf("Nao ha vale\n");
    
    
  
  return 0;
}