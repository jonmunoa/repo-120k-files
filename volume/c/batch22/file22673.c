// fichero 22673 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22673;

Registro22673 crear_registro22673(int id) {
    Registro22673 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22673(Registro22673 r) {
    return r.valor + r.id;
}
