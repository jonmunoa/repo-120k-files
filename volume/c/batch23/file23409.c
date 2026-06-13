// fichero 23409 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23409;

Registro23409 crear_registro23409(int id) {
    Registro23409 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23409(Registro23409 r) {
    return r.valor + r.id;
}
