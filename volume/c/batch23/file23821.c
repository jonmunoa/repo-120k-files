// fichero 23821 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23821;

Registro23821 crear_registro23821(int id) {
    Registro23821 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23821(Registro23821 r) {
    return r.valor + r.id;
}
