// fichero 48345 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48345;

Registro48345 crear_registro48345(int id) {
    Registro48345 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48345(Registro48345 r) {
    return r.valor + r.id;
}
