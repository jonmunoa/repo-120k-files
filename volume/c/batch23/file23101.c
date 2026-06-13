// fichero 23101 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23101;

Registro23101 crear_registro23101(int id) {
    Registro23101 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23101(Registro23101 r) {
    return r.valor + r.id;
}
