// fichero 20433 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20433;

Registro20433 crear_registro20433(int id) {
    Registro20433 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20433(Registro20433 r) {
    return r.valor + r.id;
}
