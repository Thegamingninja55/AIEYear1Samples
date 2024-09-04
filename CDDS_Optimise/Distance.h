#pragma once
#include "raylib.h"

float Vector2DistanceSqrd(Vector2 v1, Vector2 v2)
{
    float result = (v1.x - v2.x) * (v1.x - v2.x) + (v1.y - v2.y) * (v1.y - v2.y);
    return result;
}