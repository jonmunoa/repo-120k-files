// fichero 52625 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52625;

Registro52625 crear_registro52625(int id) {
    Registro52625 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52625(Registro52625 r) {
    return r.valor + r.id;
}
