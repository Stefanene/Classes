#include <iostream>
#include <cstring>
#include "media.h"

using namespace std;

Media::Media()
{
  //blank
}

//getters
int* Media::getYear(){
  return &year;
}

char* Media::getTitle(){
  return title;
}

int Media::getType(){
  return 0;
}
