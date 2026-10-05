#include <stdio.h>

#define WIDTH    128        /* внутреннее разрешение */
#define HEIGHT   128
#define SCALE    4          /* апскейл */
#define FRAMES   48         /* скок кадров отрендерить */
#define FOV_DEG  55.0f
#define NEAR_W   0.15f      /* отсечение по ближней плоскости */


/* ТИПЫ */
typedef struct { float x, y, z; } Vec3;
typedef struct { unsigned char r, g, b; } Color;

typedef struct {
    float x, y;
    float invw;
};

/* добавить потом буферы */


/* ВЕКТОРЫ */
static inline Vec3 v3(float x, float y, float z){ Vec3 v={x,y,z}; return v; }


void main() {

}