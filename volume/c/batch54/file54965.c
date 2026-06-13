// fichero 54965 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54965;

Registro54965 crear_registro54965(int id) {
    Registro54965 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54965(Registro54965 r) {
    return r.valor + r.id;
}
