// fichero 1141 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1141;

Registro1141 crear_registro1141(int id) {
    Registro1141 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1141(Registro1141 r) {
    return r.valor + r.id;
}
