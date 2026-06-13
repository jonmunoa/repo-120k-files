// fichero 48145 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48145;

Registro48145 crear_registro48145(int id) {
    Registro48145 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48145(Registro48145 r) {
    return r.valor + r.id;
}
