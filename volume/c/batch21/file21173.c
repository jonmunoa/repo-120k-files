// fichero 21173 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21173;

Registro21173 crear_registro21173(int id) {
    Registro21173 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21173(Registro21173 r) {
    return r.valor + r.id;
}
