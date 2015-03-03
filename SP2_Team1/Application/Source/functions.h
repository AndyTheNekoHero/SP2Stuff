#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <vector>
#include"MatrixStack.h"
#include "Objects.h"

bool Collision(Vector3 charPos, std::vector<CObjects> objList);
bool Collision(Vector3 charPos, std::vector<CObjects> objList, int obj, int pos);


#endif