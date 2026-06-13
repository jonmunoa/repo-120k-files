// fichero 15269 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15269;

Registro15269 crear_registro15269(int id) {
    Registro15269 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15269(Registro15269 r) {
    return r.valor + r.id;
}
