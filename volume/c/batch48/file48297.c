// fichero 48297 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48297;

Registro48297 crear_registro48297(int id) {
    Registro48297 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48297(Registro48297 r) {
    return r.valor + r.id;
}
