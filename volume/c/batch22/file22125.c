// fichero 22125 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22125;

Registro22125 crear_registro22125(int id) {
    Registro22125 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22125(Registro22125 r) {
    return r.valor + r.id;
}
