// fichero 15597 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15597;

Registro15597 crear_registro15597(int id) {
    Registro15597 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15597(Registro15597 r) {
    return r.valor + r.id;
}
