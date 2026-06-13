// fichero 37733 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37733;

Registro37733 crear_registro37733(int id) {
    Registro37733 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37733(Registro37733 r) {
    return r.valor + r.id;
}
