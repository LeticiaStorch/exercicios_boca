#include <stdio.h>

int area_total (int r1_x1, int r1_y1, int r1_x2, int r1_y2, int r2_x1, int r2_y1, int r2_x2, int r2_y2){
  int AT;

   AT = (((r1_x2 - r1_x1) * (r1_y2 - r1_y1) + (r2_x2 - r2_x1) * (r2_y2 - r2_y1)) - ((r1_x2 - r2_x1) * (r1_y2 - r2_y1)));
 // area T vai ser a soma das areas dos retang menos a area em comum

      if((r1_x2 <= r2_x1) && (r1_y2 <= r2_y1)){
        int soma = ((r1_x2 - r1_x1) * (r1_y2 - r1_y1) + (r2_x2 - r2_x1) * (r2_y2 - r2_y1));
        printf("RESP:%d", soma);
      } else 
        printf("RESP:%d", AT);
}

int area (int x1, int y1, int x2, int y2){
     int A1, A2;
     int r1_x1, r1_y1, r1_x2, r1_y2, r2_x1, r2_y1, r2_x2, r2_y2;

        x1 = r1_x2 - r1_x1;
        y1 = r1_y2 - r1_y2;
        A1 = x1 * y1;

        x2 = r2_x2 - r2_x1;
        y2 = r2_y2 - r2_y1;
        A2 = x2 * y2;
        
}


int main(){
    int r1_x1, r1_y1, r1_x2, r1_y2, r2_x1, r2_y1, r2_x2, r2_y2;

     scanf("%d %d %d %d\n%d %d %d %d", &r1_x1, &r1_y1, &r1_x2, &r1_y2, &r2_x1, &r2_y1, &r2_x2, &r2_y2);

     area_total (r1_x1, r1_y1, r1_x2, r1_y2, r2_x1, r2_y1, r2_x2, r2_y2);

}