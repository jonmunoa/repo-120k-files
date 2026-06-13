// fichero 47833 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47833;

Registro47833 crear_registro47833(int id) {
    Registro47833 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47833(Registro47833 r) {
    return r.valor + r.id;
}
