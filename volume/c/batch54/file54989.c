// fichero 54989 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54989;

Registro54989 crear_registro54989(int id) {
    Registro54989 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54989(Registro54989 r) {
    return r.valor + r.id;
}
