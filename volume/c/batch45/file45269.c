// fichero 45269 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45269;

Registro45269 crear_registro45269(int id) {
    Registro45269 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45269(Registro45269 r) {
    return r.valor + r.id;
}
