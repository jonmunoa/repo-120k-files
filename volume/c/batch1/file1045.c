// fichero 1045 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1045;

Registro1045 crear_registro1045(int id) {
    Registro1045 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1045(Registro1045 r) {
    return r.valor + r.id;
}
