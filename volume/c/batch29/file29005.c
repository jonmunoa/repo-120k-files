// fichero 29005 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29005;

Registro29005 crear_registro29005(int id) {
    Registro29005 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29005(Registro29005 r) {
    return r.valor + r.id;
}
