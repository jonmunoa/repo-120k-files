// fichero 23245 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23245;

Registro23245 crear_registro23245(int id) {
    Registro23245 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23245(Registro23245 r) {
    return r.valor + r.id;
}
