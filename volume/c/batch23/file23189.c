// fichero 23189 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23189;

Registro23189 crear_registro23189(int id) {
    Registro23189 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23189(Registro23189 r) {
    return r.valor + r.id;
}
