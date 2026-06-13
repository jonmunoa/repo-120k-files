// fichero 43845 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43845;

Registro43845 crear_registro43845(int id) {
    Registro43845 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43845(Registro43845 r) {
    return r.valor + r.id;
}
