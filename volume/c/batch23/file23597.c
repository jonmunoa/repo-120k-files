// fichero 23597 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23597;

Registro23597 crear_registro23597(int id) {
    Registro23597 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23597(Registro23597 r) {
    return r.valor + r.id;
}
