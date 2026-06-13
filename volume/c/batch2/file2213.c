// fichero 2213 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2213;

Registro2213 crear_registro2213(int id) {
    Registro2213 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2213(Registro2213 r) {
    return r.valor + r.id;
}
