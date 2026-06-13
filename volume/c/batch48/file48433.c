// fichero 48433 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48433;

Registro48433 crear_registro48433(int id) {
    Registro48433 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48433(Registro48433 r) {
    return r.valor + r.id;
}
