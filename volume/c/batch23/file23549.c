// fichero 23549 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23549;

Registro23549 crear_registro23549(int id) {
    Registro23549 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23549(Registro23549 r) {
    return r.valor + r.id;
}
