// fichero 2761 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2761;

Registro2761 crear_registro2761(int id) {
    Registro2761 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2761(Registro2761 r) {
    return r.valor + r.id;
}
