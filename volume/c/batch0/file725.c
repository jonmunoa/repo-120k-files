// fichero 725 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro725;

Registro725 crear_registro725(int id) {
    Registro725 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro725(Registro725 r) {
    return r.valor + r.id;
}
