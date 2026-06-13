// fichero 37613 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37613;

Registro37613 crear_registro37613(int id) {
    Registro37613 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37613(Registro37613 r) {
    return r.valor + r.id;
}
