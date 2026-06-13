// fichero 6725 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6725;

Registro6725 crear_registro6725(int id) {
    Registro6725 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6725(Registro6725 r) {
    return r.valor + r.id;
}
