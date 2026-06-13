// fichero 6473 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6473;

Registro6473 crear_registro6473(int id) {
    Registro6473 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6473(Registro6473 r) {
    return r.valor + r.id;
}
