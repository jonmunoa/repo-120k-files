// fichero 54169 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54169;

Registro54169 crear_registro54169(int id) {
    Registro54169 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54169(Registro54169 r) {
    return r.valor + r.id;
}
