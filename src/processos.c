#include "processos.h"
#define RedW 0.3
#define GreenW 0.59
#define BlueW 0.11

int i, j; //Declarei globalmente pois sera bastante usado nas operações com matrizes.



int MediaPixel(Pixel **pixel, int i, int j){
   int media;

   media = ((RedW*pixel[i][j].r) + (GreenW*pixel[i][j].g) + (BlueW*pixel[i][j].b));

   return media; 
  } 





void ImagemCinza(Imagem *img){
 
 int opti;
  
 for(opti = 0;opti<3;opti++){  
     for(i = 0;i<img->linha;i++){
         for(j = 0;j<img->coluna;j++){
             img->pixel[i][j].r = MediaPixel(img->pixel, i, j);
             img->pixel[i][j].g = MediaPixel(img->pixel, i, j);
             img->pixel[i][j].b = MediaPixel(img->pixel, i, j);
         }
      }  
   }
}
