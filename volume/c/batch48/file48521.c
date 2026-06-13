// fichero 48521 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48521;

Registro48521 crear_registro48521(int id) {
    Registro48521 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48521(Registro48521 r) {
    return r.valor + r.id;
}
