// fichero 15433 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15433;

Registro15433 crear_registro15433(int id) {
    Registro15433 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15433(Registro15433 r) {
    return r.valor + r.id;
}
