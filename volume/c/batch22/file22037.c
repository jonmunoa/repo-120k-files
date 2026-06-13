// fichero 22037 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22037;

Registro22037 crear_registro22037(int id) {
    Registro22037 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22037(Registro22037 r) {
    return r.valor + r.id;
}
