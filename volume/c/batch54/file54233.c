// fichero 54233 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54233;

Registro54233 crear_registro54233(int id) {
    Registro54233 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54233(Registro54233 r) {
    return r.valor + r.id;
}
