// fichero 50373 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50373;

Registro50373 crear_registro50373(int id) {
    Registro50373 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50373(Registro50373 r) {
    return r.valor + r.id;
}
