// fichero 29473 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29473;

Registro29473 crear_registro29473(int id) {
    Registro29473 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29473(Registro29473 r) {
    return r.valor + r.id;
}
