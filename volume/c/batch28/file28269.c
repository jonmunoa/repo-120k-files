// fichero 28269 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28269;

Registro28269 crear_registro28269(int id) {
    Registro28269 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28269(Registro28269 r) {
    return r.valor + r.id;
}
