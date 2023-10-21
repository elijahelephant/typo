#ifndef POINT_H
#define POINT_H

// This structure defines a point in two-dimensional space.
// It is used to represent key press locations on a touchscreen.

struct Point {
    float x;
    float y;
};

extern const Point QWERTY[26];

#endif
