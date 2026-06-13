// fichero 21297 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21297;

Registro21297 crear_registro21297(int id) {
    Registro21297 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21297(Registro21297 r) {
    return r.valor + r.id;
}
