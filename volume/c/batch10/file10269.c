// fichero 10269 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10269;

Registro10269 crear_registro10269(int id) {
    Registro10269 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10269(Registro10269 r) {
    return r.valor + r.id;
}
