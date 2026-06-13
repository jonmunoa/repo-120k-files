// fichero 26349 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26349;

Registro26349 crear_registro26349(int id) {
    Registro26349 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26349(Registro26349 r) {
    return r.valor + r.id;
}
