// fichero 10725 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10725;

Registro10725 crear_registro10725(int id) {
    Registro10725 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10725(Registro10725 r) {
    return r.valor + r.id;
}
