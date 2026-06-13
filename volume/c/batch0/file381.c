// fichero 381 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro381;

Registro381 crear_registro381(int id) {
    Registro381 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro381(Registro381 r) {
    return r.valor + r.id;
}
