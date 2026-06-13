// fichero 22393 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22393;

Registro22393 crear_registro22393(int id) {
    Registro22393 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22393(Registro22393 r) {
    return r.valor + r.id;
}
