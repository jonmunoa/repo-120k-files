// fichero 37285 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37285;

Registro37285 crear_registro37285(int id) {
    Registro37285 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37285(Registro37285 r) {
    return r.valor + r.id;
}
