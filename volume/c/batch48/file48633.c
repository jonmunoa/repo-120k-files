// fichero 48633 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48633;

Registro48633 crear_registro48633(int id) {
    Registro48633 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48633(Registro48633 r) {
    return r.valor + r.id;
}
