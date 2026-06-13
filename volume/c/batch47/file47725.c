// fichero 47725 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47725;

Registro47725 crear_registro47725(int id) {
    Registro47725 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47725(Registro47725 r) {
    return r.valor + r.id;
}
