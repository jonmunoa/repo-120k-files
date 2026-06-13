// fichero 11725 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11725;

Registro11725 crear_registro11725(int id) {
    Registro11725 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11725(Registro11725 r) {
    return r.valor + r.id;
}
