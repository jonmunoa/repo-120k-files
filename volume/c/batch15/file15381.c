// fichero 15381 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15381;

Registro15381 crear_registro15381(int id) {
    Registro15381 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15381(Registro15381 r) {
    return r.valor + r.id;
}
