// fichero 8069 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8069;

Registro8069 crear_registro8069(int id) {
    Registro8069 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8069(Registro8069 r) {
    return r.valor + r.id;
}
