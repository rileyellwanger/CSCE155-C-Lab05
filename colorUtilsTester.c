#include<stdlib.h>
#include<stdio.h>
#include<math.h>

#include "colorUtils.h"

int main(int argc, char **argv) {

  int r, g, b;
  int x = 10, y = 20, z = 30;
  int result;
  int numPassed = 0;
  int numFailed = 0;

  printf("TESTING: max(%d,%d,%d): ", x, y, z);
  result = max(x, y, z);
  if(result != 30) {
    printf("FAILED: max returned %d, expected 30\n", result);
    numFailed++;
  } else {
    printf("PASSED\n");
    numPassed++;
  }

  printf("TESTING: max(%d,%d,%d): ", x, z, y);
  result = max(x, z, y);
  if(result != 30) {
    printf("FAILED: max returned %d, expected 30\n", result);
    numFailed++;
  } else {
    printf("PASSED\n");
    numPassed++;
  }

  printf("TESTING: max(%d,%d,%d): ", y, x, z);
  result = max(y, x, z);
  if(result != 30) {
    printf("FAILED: max returned %d, expected 30\n", result);
    numFailed++;
  } else {
    printf("PASSED\n");
    numPassed++;
  }

  printf("TESTING: max(%d,%d,%d): ", y, z, x);
  result = max(y, z, x);
  if(result != 30) {
    printf("FAILED: max returned %d, expected 30\n", result);
    numFailed++;
  } else {
    printf("PASSED\n");
    numPassed++;
  }

  printf("TESTING: max(%d,%d,%d): ", z, x, y);
  result = max(z, x, y);
  if(result != 30) {
    printf("FAILED: max returned %d, expected 30\n", result);
    numFailed++;
  } else {
    printf("PASSED\n");
    numPassed++;
  }

  printf("TESTING: max(%d,%d,%d): ", z, y, x);
  result = max(z, y, x);
  if(result != 30) {
    printf("FAILED: max returned %d, expected 30\n", result);
    numFailed++;
  } else {
    printf("PASSED\n");
    numPassed++;
  }

  printf("TESTING: max(%d,%d,%d): ", x, x, z);
  result = max(x, x, z);
  if(result != 30) {
    printf("FAILED: max returned %d, expected 30\n", result);
    numFailed++;
  } else {
    printf("PASSED\n");
    numPassed++;
  }

  printf("TESTING: max(%d,%d,%d): ", x, z, x);
  result = max(x, z, x);
  if(result != 30) {
    printf("FAILED: max returned %d, expected 30\n", result);
    numFailed++;
  } else {
    printf("PASSED\n");
    numPassed++;
  }

  printf("TESTING: max(%d,%d,%d): ", z, x, x);
  result = max(z, x, x);
  if(result != 30) {
    printf("FAILED: max returned %d, expected 30\n", result);
    numFailed++;
  } else {
    printf("PASSED\n");
    numPassed++;
  }

  printf("TESTING: max(%d,%d,%d): ", z, z, z);
  result = max(z, z, z);
  if(result != 30) {
    printf("FAILED: max returned %d, expected 30\n", result);
    numFailed++;
  } else {
    printf("PASSED\n");
    numPassed++;
  }

  r = 255, g = 0, b = 0;
  printf("TESTING: toGrayScaleAverage(%d,%d,%d): ", r, g, b);
  result = toGrayScaleAverage(r, g, b);
  if(result != 85) {
    printf("FAILED: toGrayScaleAverage returned %d, expected 85\n", result);
    numFailed++;
  } else {
    printf("PASSED\n");
    numPassed++;
  }

  r = 100, g = 39, b = 40;
  printf("TESTING: toGrayScaleAverage(%d,%d,%d): \n", r, g, b);
  result = toGrayScaleAverage(r, g, b);
  //TODO: this test case will fail, why?
  //because the if statement value doesn't math the expected value
  if(result != 60) {
    printf("FAILED: toGrayScaleAverage returned %d, expected 60\n", result);
    numFailed++;
  } else {
    printf("PASSED\n");
    numPassed++;
  }

  //TODO: add your test cases here
  r = 100, g = 200, b = 32;
  printf("TESTING: toGrayScaleLightness(%d,%d,%d): \n", r, g, b);
  result = toGrayScaleLightness(r, g, b);
  if(result != 116){
    printf("FAILED: toGrayScaleLightness returned %d, expected 116\n", result);
    numFailed++;
  } else {
    printf("PASSED\n");
    numPassed++;
  }

  printf("TESTING: toGrayScaleLuminosity(%d,%d,%d): \n", r, g, b);
  result = toGrayScaleLuminosity(r, g, b);
  if(result != 167){
    printf("FAILED: toGrayScaleLuminosity returned %d, expected 167\n", result);
    numFailed++;
  } else{
    printf("PASSED\n");
    numPassed++;
  }

  printf("TESTING: toSepiaRed(%d,%d,%d): \n", r, g, b);
  result = toSepiaRed(r, g, b);
  if(result != 199){
    printf("FAILED: toSepiaRed returned %d, expected 199\n", result);
    numFailed++;
  } else {
    printf("PASSED\n");
    numPassed++;
  }

  printf("TESTING: toSepiaGreen(%d,%d,%d): \n", r, g, b);
  result = toSepiaGreen(r, g, b);
  if(result != 177){
    printf("FAILED: toSepiaGreen returned %d, expected 177\n", result);
    numFailed++;
  } else {
    printf("PASSED\n");
    numPassed++;
  }

  printf("TESTING: toSepiaBlue(%d,%d,%d): \n", r, g, b);
  result = toSepiaBlue(r, g, b);
  if(result != 138){
    printf("FAILED: toSepiaBlue returned %d, expected 138\n", result);
    numFailed++;
  } else {
    printf("PASSED\n");
    numPassed++;
  }

  printf("Number Test Cases Passed: %6d\n", numPassed);
  printf("Number Test Cases Failed: %6d\n", numFailed);
  printf("Percent Passed:           %6.2f\n", 100.0 * numPassed / (numPassed + numFailed));

  return 0;

}
