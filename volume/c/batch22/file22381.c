// fichero 22381 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22381;

Registro22381 crear_registro22381(int id) {
    Registro22381 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22381(Registro22381 r) {
    return r.valor + r.id;
}
