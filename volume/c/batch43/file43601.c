// fichero 43601 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43601;

Registro43601 crear_registro43601(int id) {
    Registro43601 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43601(Registro43601 r) {
    return r.valor + r.id;
}
