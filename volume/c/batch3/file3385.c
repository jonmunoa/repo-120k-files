// fichero 3385 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3385;

Registro3385 crear_registro3385(int id) {
    Registro3385 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3385(Registro3385 r) {
    return r.valor + r.id;
}
