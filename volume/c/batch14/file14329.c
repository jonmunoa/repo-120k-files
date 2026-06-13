// fichero 14329 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14329;

Registro14329 crear_registro14329(int id) {
    Registro14329 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14329(Registro14329 r) {
    return r.valor + r.id;
}
