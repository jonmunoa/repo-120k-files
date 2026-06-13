// fichero 2521 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2521;

Registro2521 crear_registro2521(int id) {
    Registro2521 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2521(Registro2521 r) {
    return r.valor + r.id;
}
