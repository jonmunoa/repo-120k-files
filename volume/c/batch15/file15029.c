// fichero 15029 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15029;

Registro15029 crear_registro15029(int id) {
    Registro15029 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15029(Registro15029 r) {
    return r.valor + r.id;
}
