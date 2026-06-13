// fichero 3381 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3381;

Registro3381 crear_registro3381(int id) {
    Registro3381 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3381(Registro3381 r) {
    return r.valor + r.id;
}
