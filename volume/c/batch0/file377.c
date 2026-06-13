// fichero 377 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro377;

Registro377 crear_registro377(int id) {
    Registro377 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro377(Registro377 r) {
    return r.valor + r.id;
}
