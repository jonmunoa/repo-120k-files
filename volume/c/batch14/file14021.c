// fichero 14021 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14021;

Registro14021 crear_registro14021(int id) {
    Registro14021 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14021(Registro14021 r) {
    return r.valor + r.id;
}
