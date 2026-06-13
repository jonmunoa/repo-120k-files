// fichero 37141 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37141;

Registro37141 crear_registro37141(int id) {
    Registro37141 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37141(Registro37141 r) {
    return r.valor + r.id;
}
