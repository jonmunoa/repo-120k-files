// fichero 49725 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49725;

Registro49725 crear_registro49725(int id) {
    Registro49725 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49725(Registro49725 r) {
    return r.valor + r.id;
}
