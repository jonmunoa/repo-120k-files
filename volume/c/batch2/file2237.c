// fichero 2237 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2237;

Registro2237 crear_registro2237(int id) {
    Registro2237 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2237(Registro2237 r) {
    return r.valor + r.id;
}
