// fichero 2573 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2573;

Registro2573 crear_registro2573(int id) {
    Registro2573 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2573(Registro2573 r) {
    return r.valor + r.id;
}
