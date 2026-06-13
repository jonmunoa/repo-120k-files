// fichero 21813 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21813;

Registro21813 crear_registro21813(int id) {
    Registro21813 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21813(Registro21813 r) {
    return r.valor + r.id;
}
