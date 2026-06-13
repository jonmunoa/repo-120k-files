// fichero 46361 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46361;

Registro46361 crear_registro46361(int id) {
    Registro46361 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46361(Registro46361 r) {
    return r.valor + r.id;
}
