// fichero 20401 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20401;

Registro20401 crear_registro20401(int id) {
    Registro20401 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20401(Registro20401 r) {
    return r.valor + r.id;
}
