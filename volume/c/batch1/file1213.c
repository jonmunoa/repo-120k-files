// fichero 1213 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1213;

Registro1213 crear_registro1213(int id) {
    Registro1213 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1213(Registro1213 r) {
    return r.valor + r.id;
}
