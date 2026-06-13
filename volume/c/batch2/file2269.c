// fichero 2269 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2269;

Registro2269 crear_registro2269(int id) {
    Registro2269 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2269(Registro2269 r) {
    return r.valor + r.id;
}
