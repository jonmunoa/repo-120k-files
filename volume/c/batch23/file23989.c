// fichero 23989 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23989;

Registro23989 crear_registro23989(int id) {
    Registro23989 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23989(Registro23989 r) {
    return r.valor + r.id;
}
