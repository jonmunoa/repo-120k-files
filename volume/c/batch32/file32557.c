// fichero 32557 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32557;

Registro32557 crear_registro32557(int id) {
    Registro32557 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32557(Registro32557 r) {
    return r.valor + r.id;
}
