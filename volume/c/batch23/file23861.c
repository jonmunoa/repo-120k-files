// fichero 23861 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23861;

Registro23861 crear_registro23861(int id) {
    Registro23861 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23861(Registro23861 r) {
    return r.valor + r.id;
}
