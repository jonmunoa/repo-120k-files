// fichero 48021 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48021;

Registro48021 crear_registro48021(int id) {
    Registro48021 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48021(Registro48021 r) {
    return r.valor + r.id;
}
