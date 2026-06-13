// fichero 23481 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23481;

Registro23481 crear_registro23481(int id) {
    Registro23481 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23481(Registro23481 r) {
    return r.valor + r.id;
}
