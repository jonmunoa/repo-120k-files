// fichero 2625 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2625;

Registro2625 crear_registro2625(int id) {
    Registro2625 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2625(Registro2625 r) {
    return r.valor + r.id;
}
