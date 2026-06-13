// fichero 22081 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22081;

Registro22081 crear_registro22081(int id) {
    Registro22081 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22081(Registro22081 r) {
    return r.valor + r.id;
}
