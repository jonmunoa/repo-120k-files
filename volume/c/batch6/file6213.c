// fichero 6213 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6213;

Registro6213 crear_registro6213(int id) {
    Registro6213 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6213(Registro6213 r) {
    return r.valor + r.id;
}
