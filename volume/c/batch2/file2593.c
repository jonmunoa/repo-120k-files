// fichero 2593 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2593;

Registro2593 crear_registro2593(int id) {
    Registro2593 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2593(Registro2593 r) {
    return r.valor + r.id;
}
