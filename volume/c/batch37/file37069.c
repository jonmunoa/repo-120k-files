// fichero 37069 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37069;

Registro37069 crear_registro37069(int id) {
    Registro37069 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37069(Registro37069 r) {
    return r.valor + r.id;
}
