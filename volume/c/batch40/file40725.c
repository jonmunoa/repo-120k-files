// fichero 40725 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40725;

Registro40725 crear_registro40725(int id) {
    Registro40725 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40725(Registro40725 r) {
    return r.valor + r.id;
}
