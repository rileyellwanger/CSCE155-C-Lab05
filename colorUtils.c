#include "colorUtils.h"
#include <math.h>

int max(int x, int y, int z) {
  int m = x > y ? x : y;
  m = m > z ? m : z;
  return m;
}

int min(int x, int y, int z) {
  int m = x < y ? x : y;
  m = m < z ? m : z;
  return m;
}

int toGrayScaleAverage(int r, int g, int b) {
  int avg = round((r + g + b) / 3.0);
  if(avg < 0){
    return 0;
  } else if(avg > 255){
    return 255;
  } else {
    return avg;
  }
  return 0;
}

int toGrayScaleLightness(int r, int g, int b) {
  int lightness = round(((max(r, g, b) + min(r, g, b)) / 2.0));
  if(lightness < 0){
    return 0;
  } else if(lightness >= 0 && lightness <= 255){
    return lightness;
  } else {
    return lightness = 255;
  }
  return 0;
}

int toGrayScaleLuminosity(int r, int g, int b) {
  int luminosity = round((0.21 * r + 0.72 * g + 0.07 * b));
  if(luminosity < 0){
    return 0;
  } else if(luminosity >= 0 && luminosity <= 255){
    return luminosity;
  } else {
    return luminosity = 255;
  }
  return 0;
}

int toSepiaRed(int r, int g, int b) {
  int red = round(0.393 * r + 0.769 * g + 0.189 * b);
  if(red < 0){
    return 0;
  } else if(red >= 0 && red <= 255){
    return red;
  } else {
    return red = 255;
  }
  return 0;
}

int toSepiaGreen(int r, int g, int b) {
  int green = round(0.349 * r + 0.686 * g + 0.168 * b);
  if(green < 0){
    return 0;
  } else if(green >= 0 && green <= 255){
    return green;
  } else {
    return green = 255;
  }
  return 0;
}

int toSepiaBlue(int r, int g, int b) {
  int blue = round(0.272 * r + 0.534 * g + 0.131 * b);
  if(blue < 0){
    return 0;
  } else if(blue >= 0 && blue <= 255){
    return blue;
  } else {
    return blue = 255;
  }
  return 0;
}
