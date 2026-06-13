// fichero 46173 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46173;

Registro46173 crear_registro46173(int id) {
    Registro46173 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46173(Registro46173 r) {
    return r.valor + r.id;
}
