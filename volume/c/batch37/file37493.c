// fichero 37493 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37493;

Registro37493 crear_registro37493(int id) {
    Registro37493 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37493(Registro37493 r) {
    return r.valor + r.id;
}
