// fichero 45673 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45673;

Registro45673 crear_registro45673(int id) {
    Registro45673 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45673(Registro45673 r) {
    return r.valor + r.id;
}
