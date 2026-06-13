// fichero 14573 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14573;

Registro14573 crear_registro14573(int id) {
    Registro14573 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14573(Registro14573 r) {
    return r.valor + r.id;
}
