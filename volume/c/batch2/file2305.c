// fichero 2305 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2305;

Registro2305 crear_registro2305(int id) {
    Registro2305 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2305(Registro2305 r) {
    return r.valor + r.id;
}
