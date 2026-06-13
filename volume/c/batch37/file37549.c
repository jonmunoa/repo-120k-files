// fichero 37549 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37549;

Registro37549 crear_registro37549(int id) {
    Registro37549 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37549(Registro37549 r) {
    return r.valor + r.id;
}
