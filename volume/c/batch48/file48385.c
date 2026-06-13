// fichero 48385 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48385;

Registro48385 crear_registro48385(int id) {
    Registro48385 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48385(Registro48385 r) {
    return r.valor + r.id;
}
