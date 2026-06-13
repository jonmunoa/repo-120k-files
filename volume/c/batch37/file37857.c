// fichero 37857 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37857;

Registro37857 crear_registro37857(int id) {
    Registro37857 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37857(Registro37857 r) {
    return r.valor + r.id;
}
