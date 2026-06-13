// fichero 31381 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31381;

Registro31381 crear_registro31381(int id) {
    Registro31381 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31381(Registro31381 r) {
    return r.valor + r.id;
}
