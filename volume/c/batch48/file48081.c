// fichero 48081 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48081;

Registro48081 crear_registro48081(int id) {
    Registro48081 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48081(Registro48081 r) {
    return r.valor + r.id;
}
