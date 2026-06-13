// fichero 29141 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29141;

Registro29141 crear_registro29141(int id) {
    Registro29141 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29141(Registro29141 r) {
    return r.valor + r.id;
}
