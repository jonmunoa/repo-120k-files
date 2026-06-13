// fichero 19433 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19433;

Registro19433 crear_registro19433(int id) {
    Registro19433 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19433(Registro19433 r) {
    return r.valor + r.id;
}
