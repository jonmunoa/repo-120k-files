// fichero 2765 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2765;

Registro2765 crear_registro2765(int id) {
    Registro2765 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2765(Registro2765 r) {
    return r.valor + r.id;
}
