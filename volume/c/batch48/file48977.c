// fichero 48977 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48977;

Registro48977 crear_registro48977(int id) {
    Registro48977 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48977(Registro48977 r) {
    return r.valor + r.id;
}
