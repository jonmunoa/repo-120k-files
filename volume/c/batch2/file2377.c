// fichero 2377 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2377;

Registro2377 crear_registro2377(int id) {
    Registro2377 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2377(Registro2377 r) {
    return r.valor + r.id;
}
