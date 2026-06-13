// fichero 54185 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54185;

Registro54185 crear_registro54185(int id) {
    Registro54185 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54185(Registro54185 r) {
    return r.valor + r.id;
}
