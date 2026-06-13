// fichero 48665 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48665;

Registro48665 crear_registro48665(int id) {
    Registro48665 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48665(Registro48665 r) {
    return r.valor + r.id;
}
