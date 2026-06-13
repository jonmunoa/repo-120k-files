// fichero 48677 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48677;

Registro48677 crear_registro48677(int id) {
    Registro48677 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48677(Registro48677 r) {
    return r.valor + r.id;
}
