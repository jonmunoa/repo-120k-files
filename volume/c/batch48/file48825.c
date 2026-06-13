// fichero 48825 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48825;

Registro48825 crear_registro48825(int id) {
    Registro48825 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48825(Registro48825 r) {
    return r.valor + r.id;
}
