// fichero 26433 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26433;

Registro26433 crear_registro26433(int id) {
    Registro26433 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26433(Registro26433 r) {
    return r.valor + r.id;
}
