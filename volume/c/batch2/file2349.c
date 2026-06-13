// fichero 2349 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2349;

Registro2349 crear_registro2349(int id) {
    Registro2349 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2349(Registro2349 r) {
    return r.valor + r.id;
}
