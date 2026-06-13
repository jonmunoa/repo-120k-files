// fichero 22285 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22285;

Registro22285 crear_registro22285(int id) {
    Registro22285 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22285(Registro22285 r) {
    return r.valor + r.id;
}
