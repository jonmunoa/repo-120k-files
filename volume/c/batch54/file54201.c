// fichero 54201 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54201;

Registro54201 crear_registro54201(int id) {
    Registro54201 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54201(Registro54201 r) {
    return r.valor + r.id;
}
