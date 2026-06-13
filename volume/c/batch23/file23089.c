// fichero 23089 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23089;

Registro23089 crear_registro23089(int id) {
    Registro23089 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23089(Registro23089 r) {
    return r.valor + r.id;
}
