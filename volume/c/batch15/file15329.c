// fichero 15329 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15329;

Registro15329 crear_registro15329(int id) {
    Registro15329 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15329(Registro15329 r) {
    return r.valor + r.id;
}
