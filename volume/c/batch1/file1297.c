// fichero 1297 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1297;

Registro1297 crear_registro1297(int id) {
    Registro1297 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1297(Registro1297 r) {
    return r.valor + r.id;
}
