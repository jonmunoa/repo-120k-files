// fichero 54381 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54381;

Registro54381 crear_registro54381(int id) {
    Registro54381 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54381(Registro54381 r) {
    return r.valor + r.id;
}
