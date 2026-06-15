// fichero 21597 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21597;

Registro21597 crear_registro21597(int id) {
    Registro21597 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
