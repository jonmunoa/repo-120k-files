// fichero 2409 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2409;

Registro2409 crear_registro2409(int id) {
    Registro2409 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2409(Registro2409 r) {
    return r.valor + r.id;
}
