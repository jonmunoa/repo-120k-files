// fichero 48517 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48517;

Registro48517 crear_registro48517(int id) {
    Registro48517 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48517(Registro48517 r) {
    return r.valor + r.id;
}
