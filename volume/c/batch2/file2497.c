// fichero 2497 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2497;

Registro2497 crear_registro2497(int id) {
    Registro2497 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2497(Registro2497 r) {
    return r.valor + r.id;
}
