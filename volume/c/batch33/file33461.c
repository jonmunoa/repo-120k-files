// fichero 33461 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33461;

Registro33461 crear_registro33461(int id) {
    Registro33461 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33461(Registro33461 r) {
    return r.valor + r.id;
}
